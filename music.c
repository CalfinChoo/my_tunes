#include "music.h"

void add_song(char * a, char * n) {
  char c = *a;
  int x = strcmp(c, 'A');
  if (0 <= x && x < 26){
    insert()
    return;
  }
}

struct node * search_song(char * a, char * n);
struct node * search_artist(char * a);
void print_letter(char c);
void print_artist(char * a);
void print_library();
void shuffle(int x);
void del(struct node * p);
void clear() {
  int x = 0;
  for (; x < 27; x++){
    lib[x] = free_list(lib[x]);
  }
}
