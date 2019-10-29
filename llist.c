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
    n = *p;
    while (n.next != NULL) {
      n = *(n.next);
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
  if (strcmp(a, p->artist) < 0 && strcmp(n, p->name) < 0){
    insert_front(p, a, n);
    return;
  }
  struct node * q = malloc(sizeof(struct node));
  q->artist = a;
  q->name = n;
  while (q.next != NULL) {
    q = *(q.next);
    if (strcmp(a, q->artist) < 0){

    }
  }
  return p;
}
struct node * free_list(struct node * p) {
  struct node * current;
  current = p->next;
  if (current != NULL) {
    printf("\nfreeing node: %d", p->i);
    free_list(current);
  }
  free(p);
  p = NULL;
  return p;
}
struct node * rem(struct node *front, int data) {
  struct node * current;
  current = front->next;
  if (front->i == data) {
    free(front);
    front = NULL;
    return current;
  }
  while (current != NULL) {
    if (current->i == data) {
      front->next = current->next;
      free(current);
      current = NULL;
      return front;
    }
    else rem(current, data);
    return front;
  }
  return front;
}
