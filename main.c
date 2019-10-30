#include "llist.h"

int main() {
  struct node * list = linked_list();
  printf("Printing empty list:\n");
  print_list(list);
  printf("Adding song to list.\n");
  list = insert(list, "abc", "dtl");
  printf("Adding song to list.\n");
  list = insert(list, "abc", "xtl");
  printf("Adding song to list.\n");
  list = insert(list, "dbc", "dta");
  printf("Adding song to list.\n");
  list = insert(list, "qbc", "dta");
  printf("Adding song to list.\n");
  list = insert(list, "dbc", "dtaa");
  printf("Adding song to list.\n");
  list = insert(list, "dbc", "xyn");
  printf("Adding song to list.\n");
  list = insert(list, "abc", "aca");
  printf("Adding song to list.\n");
  list = insert(list, "bbc", "abc");
  printf("Printing list:\n");
  print_list(list);
  printf("Removing song abc : dtl.\n");
  list = rem(list, "abc", "dtl");
  printf("Removing song abc : dtl.\n");
  list = rem(list, "abc", "xyn");
  printf("Printing list:\n");
  print_list(list);
  printf("Freeing list.\n");
  list = free_list(list);
  printf("Printing list:\n");
  print_list(list);
  printf("\n\n");
  return 0;
}
