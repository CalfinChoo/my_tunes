#ifndef LLIST_H
#define LLIST_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#endif

struct node {
  char artist[100];
  char name[100];
  struct node *next;
};

struct node * linked_list();
void print_list(struct node * p);
void print_node(struct node * p);
struct node * insert_front(struct node * p, char * a, char * n);
struct node * insert(struct node * p, char * a, char * n);
struct node * find_node(struct node * p, char * a, char * n);
struct node * find_artist(struct node * p, char * a);
int size(struct node * p);
struct node * random_song(struct node * p);
struct node * rem(struct node *front, char * a, char * n);
struct node * free_list(struct node * p);
