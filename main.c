#include "llist.h"

int main() {
  struct node * list = linked_list();
  printf("Printing empty list:\n");
  print_list(list);
  printf("Adding song to list.\n");
  list = insert(list, "Mozart", "Eine kleine Nachtmusik");
  printf("Adding song to list.\n");
  list = insert(list, "Beethoven", "Für Elise");
  printf("Adding song to list.\n");
  list = insert(list, "Puccini", "\'O mio babbino caro\' from Gianni Schicchi");
  printf("Adding song to list.\n");
  list = insert(list, "J.S. Bach", "Toccata and Fugue in D minor");
  printf("Adding song to list.\n");
  list = insert(list, "Beethoven", "Symphony No.5 in C minor");
  printf("Adding song to list.\n");
  list = insert(list, "Beethoven", "Symphony No.5 in C minor");
  printf("Adding song to list.\n");
  list = insert(list, "Vivaldi", "The Four Seasons");
  printf("Adding song to list.\n");
  list = insert(list, "Bizet", "Carmen");
  printf("Adding song to list.\n");
  list = insert(list, "Johann Strauss II", "The Blue Danube");
  printf("Adding song to list.\n");
  list = insert(list, "Ravel", "Boléro");
  printf("Adding song to list.\n");
  list = insert(list, "Delibes", "The Blue Danube");
  printf("Adding song to list.\n");
  list = insert(list, "Pachelbel", "Pachelbel's Canon");
  printf("Printing list:\n");

  print_list(list);
  printf("Removing song Mozart : Eine kleine Nachtmusik.\n");
  list = rem(list, "Mozart", "Eine kleine Nachtmusik");
  printf("Removing song Beethoven : Für Elise.\n");
  list = rem(list, "Beethoven", "Für Elise");
  printf("Printing list:\n");
  print_list(list);
  printf("Freeing list.\n");
  list = free_list(list);
  printf("Printing list:\n");
  print_list(list);
  printf("\n\n");
  return 0;
}
