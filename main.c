#include "music.h"

int main() {
  struct node * list = linked_list();
  srand(time(NULL));
  printf("LINKED LIST TESTS\n====================================\n");

  printf("Testing print_list on empty list:\n");
  print_list(list);

  printf("\nTesting insert(node):\n");
  printf("Adding song \"Eine kleine Nachtmusik\" by Mozart to list.\n");
  list = insert(list, "Mozart", "Eine kleine Nachtmusik");
  printf("Adding song \"Für Elise\" by Beethoven to list.\n");
  list = insert(list, "Beethoven", "Für Elise");
  printf("Adding song \"\'O mio babbino caro\' from Gianni Schicchi\" by Puccini to list.\n");
  list = insert(list, "Puccini", "\'O mio babbino caro\' from Gianni Schicchi");
  printf("Adding song \"Toccata and Fugue in D minor\" by J.S. Bach to list.\n");
  list = insert(list, "J.S. Bach", "Toccata and Fugue in D minor");
  printf("Adding song \"Symphony No.5 in C minor\" by Beethoven to list.\n");
  list = insert(list, "Beethoven", "Symphony No.5 in C minor");
  printf("Adding song \"Symphony No.5 in C minor\" by Beethoven to list (again).\n");
  list = insert(list, "Beethoven", "Symphony No.5 in C minor");
  printf("Adding song \"The Four Seasons\" by Vivaldi to list.\n");
  list = insert(list, "Vivaldi", "The Four Seasons");
  printf("Adding song \"Carmen\" by Bizet to list.\n");
  list = insert(list, "Bizet", "Carmen");
  printf("Adding song \"The Blue Danube\" by Johann Strauss II to list.\n");
  list = insert(list, "Johann Strauss II", "The Blue Danube");
  printf("Adding song \"Boléro\" by Ravel to list.\n");
  list = insert(list, "Ravel", "Boléro");
  printf("Adding song \"In the Hall of the Mountain King\" by Grieg to list.\n");
  list = insert(list, "Grieg", "In the Hall of the Mountain King");
  printf("Adding song \"Pachelbel's Canon\" by Pachelbel to list.\n");
  list = insert(list, "Pachelbel", "Pachelbel's Canon");
  printf("\nTesting print_list on filled list:\n");
  print_list(list);

  printf("\n======================================================================================\n");

  printf("Testing find_node:\n");
  printf("\nFinding node [Mozart : Eine kleine Nachtmusik].\n");
  struct node * findTest = find_node(list, "Mozart", "Eine kleine Nachtmusik");
  if (findTest) {
    printf("NODE FOUND >> ");
    print_node(findTest);
  }
  else printf("NODE NOT FOUND\n");
  printf("\nFinding node [Beethoven : Symphony No.5 in C minor].\n");
  findTest = find_node(list, "Beethoven", "Symphony No.5 in C minor");
  if (findTest) {
    printf("NODE FOUND >> ");
    print_list(findTest);
  }
  else printf("NODE NOT FOUND\n");
  printf("\nFinding node [Scott Joplin : The Entertainer] (which doesn't exist).\n");
  findTest = find_node(list, "Scott Joplin", "The Entertainer");
  if (findTest) {
    printf("NODE FOUND >> ");
    print_node(findTest);
  }
  else printf("NODE NOT FOUND\n");

  printf("\n======================================================================================\n");

  printf("Testing find_artist:\n");
  printf("\nFinding artist Beethoven.\n");
  findTest = find_artist(list, "Beethoven");
  if (findTest) {
    printf("ARTIST FOUND >> ");
    print_list(findTest);
  }
  else printf("ARTIST NOT FOUND\n");

  printf("\n======================================================================================\n");

  printf("Testing random:\n");
  int i = 0;
  for (; i < 4; i++) print_node(random_song(list));

  printf("\n======================================================================================\n");

  printf("Testing remove:\n");
  printf("\nRemoving song Mozart : Eine kleine Nachtmusik.");
  list = rem(list, "Mozart", "Eine kleine Nachtmusik");
  printf("\nRemoving song Beethoven : Für Elise.");
  list = rem(list, "Beethoven", "Für Elise");
  printf("\nRemoving song Scott Joplin : The Entertainer (which doesn't exist).");
  list = rem(list, "Scott Joplin", "The Entertainer");
  printf("\n\nPrinting list:\n");
  print_list(list);

  printf("\n======================================================================================\n");

  printf("Testing free_list:\n\n");
  list = free_list(list);
  printf("\nlist after free_list:\n");
  print_list(list);
  printf("\n\n");
  return 0;
}
