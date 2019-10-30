#include "llist.h"

int main() {
  struct node * list = linked_list();
  printf("Printing empty list:");
  print_list(list);
  printf("\n\nAdding song to list.");
  list = insert(list, "abc", "dtl");
  printf("\n\nPrinting list:");
  print_list(list);
  printf("\n\nRemoving 10.");
  list = rem(list, "abc", "dtl");
  printf("\n\nPrinting list:");
  print_list(list);
  printf("\n\nFreeing list.");
  list = free_list(list);
  printf("\n\nPrinting list:");
  print_list(list);
  printf("\n");
  return 0;
}
