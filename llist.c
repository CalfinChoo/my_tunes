#include "llist.h"

struct node * linked_list() {
  struct node * l;
  l = NULL;
  return l;
}
void print_list(struct node * p) {
  printf("\n[ ");
  if (p != NULL) {
    printf("%s: %s |", p->artist, p->name);
    struct node n;
    n = p;
    while (n->next != NULL) {
      n = n->next;
      printf("%s: %s |", n->artist, n->name);
    }
  }
  printf(" ]");
}
struct node * insert_front(struct node * p, char * a, char * n) {
  struct node * q = malloc(sizeof(struct node));
  q->artist = a;
  q->name = n;
  q->next = p;
  return q;
}
struct node * insert(struct node * p, char * a, char * n) {
  if (!p) insert_front(p, a, n);
  if (strcmp(a, p->artist) < 0 && strcmp(n, p->name) < 0){
    insert_front(p, a, n);
    return;
  }
  struct node * l = p;
  struct node * l2 = p->next;
  struct node * q = malloc(sizeof(struct node));
  q->artist = a;
  q->name = n;
  while (l2) {
    if (strcmp(a, l2->artist) == 0){
      while (strcmp(n, l2->name) > 0) {
        l = l->next;
        l2 = l2->next;
      }
      q->next = l2;
      l->next = q;
      return p;
    }
    if (strcmp(a, l2->artist) > 0){
      q->next = l2;
      l->next = q;
      return p;
    }
    l = l->next;
    l2 = l2->next;
  }
  l->next = q;
  q->next = NULL;
  return p;
}
struct node * song(struct node * p, char * a, char * n){
  struct node * temp = p;
  while (temp){
    if (strcmp(a, temp->artist) == 0 && strcmp(n, temp->name) == 0) return temp;
    temp = temp->next;
  }
  return NULL;
}
struct node * artist(struct node * p, char * a){
  struct node * temp = p;
  while (temp){
    if (strcmp(a, temp->artist) == 0) return temp;
    temp = temp->next;
  }
  return NULL;
}
int size(struct node * p){
  int x = 0;
  struct node * temp = p;
  while (temp){
    x++;
    temp = temp->next;
  }
  return x;
}
struct node * random_song(struct node * p){
  int x = rand() % size(p);
  struct node * temp = p;
  for (; x > 0; x--){
    temp = temp->next;
  }
  return temp;
}
struct node * free_list(struct node * p) {
  struct node * current;
  current = p->next;
  if (current != NULL) {
    printf("\nfreeing node: %s : %s", p->artist, p->name);
    free_list(current);
  }
  free(p);
  p = NULL;
  return p;
}
struct node * rem(struct node *front, char * a, char * n) {
  struct node * current;
  current = front->next;
  if (strcmp(front->artist, a) == 0 && strcmp(front->name, n) == 0) {
    free(front);
    front = NULL;
    return current;
  }
  while (current != NULL) {
    if (strcmp(front->artist, a) == 0 && strcmp(front->name, n) == 0) {
      front->next = current->next;
      free(current);
      current = NULL;
      return front;
    }
    else rem(current, a, n);
    return front;
  }
  return front;
}
