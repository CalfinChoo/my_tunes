#include "music.h"

void add_song(char * a, char * n) {
  char c = *a;
  int x = c - 'A';
  if (0 <= x && x < 26){
    lib[x] = insert(lib[x], a, n);
  }
  else{
    lib[26] = insert(lib[26], a, n);
  }
}

struct node * search_song(char * a, char * n){
  char c = *a;
  int x = c - 'A';
  if (0 <= x && x < 26){
    return find_node(lib[x], a, n);
  }
  else{
    return find_node(lib[26], a, n);
  }
}

struct node * search_artist(char * a){
  char c = *a;
  int x = c - 'A';
  if (0 <= x && x < 26){
    return find_artist(lib[x], a);
  }
  else{
    return find_artist(lib[26], a);
  }
}

void print_letter(char c){
  int x = c - 'A';
  print_list(lib[x]);
}

void print_artist(char * a){
  struct node * p = search_artist(a);
  while (strcmp(p->artist, a) == 0){
    print_node(p);
    p = p->next;
  }
}

void print_library(){
  int x = 0;
  for (; x < 26; x++){
    printf("%c:", (char)(65 + x));
    print_list(lib[x]);
  }
  printf("%s:", "Other");
  print_list(lib[26]);
}

void shuffle(int x){
  int i = 0;
  int t = 0;
  for (; i < 27; i++){
    t += size(lib[i]);
  }
  for (; x > 0; x--){
    int y = rand() % t;
    i = 0;
    for (; i < 27; i++){
      struct node * temp = lib[i];
      while (temp && y > 0){
        y--;
        temp = temp->next;
      }
      if (temp && y == 0){
        print_node(temp);
        break;
      }
    }
  }
}

void del(char * a, char * n){
  char c = *a;
  int x = c - 'A';
  if (0 <= x && x < 26){
    lib[x] = rem(lib[x], a, n);
  }
  else{
    lib[26] = rem(lib[26], a, n);
  }
}

void clear() {
  int x = 0;
  for (; x < 27; x++){
    lib[x] = free_list(lib[x]);
  }
}
