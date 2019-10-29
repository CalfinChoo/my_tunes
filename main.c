#include "llist.h"

int main() {
  struct node * list = linked_list();
  printf("Printing empty list:");
  print_list(list);
  printf("\n\nAdding #s 0-9 to list.");
  int i;
  for (i = 0; i < 10; i++) {
    list = insert_front(list, i);
  }
  printf("\n\nPrinting list:");
  print_list(list);
  printf("\n\nRemoving 10.");
  list = rem(list, 10);
  printf("\n\nPrinting list:");
  print_list(list);
  printf("\n\nRemoving 5.");
  list = rem(list, 5);
  printf("\n\nPrinting list:");
  print_list(list);
  printf("\n\nFreeing list.");
  list = free_list(list);
  printf("\n\nPrinting list:");
  print_list(list);
  printf("\n");
  return 0;
}
