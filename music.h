#ifndef MUSIC_H
#define MUSIC_H
#include "llist.h"
#endif

struct node * lib[27];

void add_song(char * a, char * n);
struct node * search_song(char * a, char * n);
struct node * search_artist(char * a);
void print_letter(char c);
void print_artist(char * a);
void print_library();
void shuffle(int x);
void del(char * a, char * n);
void clear();
