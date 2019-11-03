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
  printf("Adding song \"Toccata and Fugue in D minor\" by Bach to list.\n");
  list = insert(list, "Bach", "Toccata and Fugue in D minor");
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

  printf("\n======================================================================================\n");
  printf("\n======================================================================================\n");

  printf("LIBRARY\n====================================\n");
  int x = 0; //clean lib to NULL
  for (; x < 27; x++){
    lib[x] = NULL;
  }
  printf("Testing print_library on empty library:\n");
  print_library();
  printf("\nTesting add_song:\n");
  printf("Adding song \"Eine kleine Nachtmusik\" by Mozart to library.\n");
  add_song("Mozart", "Eine kleine Nachtmusik");
  printf("Adding song \"Für Elise\" by Beethoven to library.\n");
  add_song("Beethoven", "Für Elise");
  printf("Adding song \"\'O mio babbino caro\' from Gianni Schicchi\" by Puccini to library.\n");
  add_song("Puccini", "\'O mio babbino caro\' from Gianni Schicchi");
  printf("Adding song \"Toccata and Fugue in D minor\" by Bach to library.\n");
  add_song("Bach", "Toccata and Fugue in D minor");
  printf("Adding song \"Symphony No.5 in C minor\" by Beethoven to library.\n");
  add_song("Beethoven", "Symphony No.5 in C minor");
  printf("Adding song \"Symphony No.5 in C minor\" by Beethoven to library (again).\n");
  add_song("Beethoven", "Symphony No.5 in C minor");
  printf("Adding song \"The Four Seasons\" by Vivaldi to library.\n");
  add_song("Vivaldi", "The Four Seasons");
  printf("Adding song \"Carmen\" by Bizet to library.\n");
  add_song("Bizet", "Carmen");
  printf("Adding song \"The Blue Danube\" by Johann Strauss II to library.\n");
  add_song("Johann Strauss II", "The Blue Danube");
  printf("Adding song \"Boléro\" by Ravel to library.\n");
  add_song("Ravel", "Boléro");
  printf("Adding song \"In the Hall of the Mountain King\" by Grieg to library.\n");
  add_song("Grieg", "In the Hall of the Mountain King");
  printf("Adding song \"Pachelbel's Canon\" by Pachelbel to library.\n");
  add_song("Pachelbel", "Pachelbel's Canon");
  printf("Adding song \"Nocturne Op.2 No.9\" by Chopin to library.\n");
  add_song("Chopin", "Nocturne Op.2 No.9");
  printf("Adding song \"Rondo Alla Turca\" by Mozart to library.\n");
  add_song("Mozart", "Rondo Alla Turca");
  printf("Adding song \"Piano Sonata No.14 in C sharp minor\" by Beethoven to library.\n");
  add_song("Beethoven", "Piano Sonata No.14 in C sharp minor");
  printf("Adding song \"Clair de Lune\" by Debussy to library.\n");
  add_song("Debussy", "Clair de Lune");
  printf("Adding song \"Violin Concerto in E minor, Op.64\" by Mendelssohn to library.\n");
  add_song("Mendelssohn", "Violin Concerto in E minor, Op. 64");
  printf("Adding song \"Symphony No.8 in B minor\" by Schubert to library.\n");
  add_song("Schubert", "Symphony No.8 in B minor");
  printf("Adding song \"Vltava\" by Smetana to library.\n");
  add_song("Smetana", "Vltava");
  printf("Adding song \"The Nutcracker Suite\" by Tchaikovsky to library.\n");
  add_song("Tchaikovsky", "The Nutcracker Suite");
  printf("Adding song \"Invention No.1 in C major\" by Bach to library.\n");
  add_song("Bach", "Invention No.1 in C major");
  printf("Adding song \"some song name\" by \"..artist\" to library.\n");
  add_song("..artist", "some song name");
  printf("Adding song \"Hungarian Rhapsody No. 2\" by \"Liszt\" to library.\n");
  add_song("Liszt", "Hungarian Rhapsody No. 2");
  printf("Adding song \"Hungarian Dance No.5 in G minor\" by \"Brahms\" to library.\n");
  add_song("Brahms", "Hungarian Dance No.5 in G minor");
  printf("Adding song \"Fantasie Impromptu, Op.66\" by Chopin to library.\n");
  add_song("Chopin", "Fantasie Impromptu, Op.66");

  printf("\nTesting print_library on filled library:\n");
  print_library();

  printf("\n======================================================================================\n");

  printf("Testing search_song:\n");
  printf("\nSearching for [Mozart : Eine kleine Nachtmusik].\n");
  struct node * songTest = search_song("Mozart", "Eine kleine Nachtmusik");
  if (songTest) {
    printf("SONG FOUND >> ");
    print_node(songTest);
  }
  else printf("SONG NOT FOUND\n");
  printf("\nSearching for [Beethoven : Symphony No.5 in C minor].\n");
  songTest = search_song("Beethoven", "Symphony No.5 in C minor");
  if (songTest) {
    printf("SONG FOUND >> ");
    print_node(songTest);
  }
  else printf("SONG NOT FOUND\n");
  printf("\nSearching for [Scott Joplin : The Entertainer] (which doesn't exist).\n");
  songTest = search_song("Scott Joplin", "The Entertainer");
  if (songTest) {
    printf("SONG FOUND >> ");
    print_node(songTest);
  }
  else printf("SONG NOT FOUND\n");

  printf("\n======================================================================================\n");

  printf("Testing search_artist:\n");
  printf("\nSearching for artist Beethoven.\n");
  songTest = search_artist("Beethoven");
  if (songTest) {
    printf("ARTIST FOUND >> ");
    print_list(songTest);
  }
  else printf("ARTIST NOT FOUND\n");

  printf("\n======================================================================================\n");

  ("Testing print_letter:\n");
  printf("Printing for \'A\':\n");
  print_letter('A');
  printf("Printing for \'B\':\n");
  print_letter('B');

  printf("\n======================================================================================\n");

  printf("Testing print_artist:\n");
  printf("\nPrinting for \"Schubert\":\n");
  print_artist("Schubert");
  printf("\nPrinting for \"Beethoven\":\n");
  print_artist("Beethoven");

  printf("\n======================================================================================\n");

  printf("Testing shuffle:\n");
  printf("\nObtaining 3 random songs:\n");
  shuffle(3);
  printf("\nObtaining 7 random songs:\n");
  shuffle(7);

  printf("\n======================================================================================\n");

  printf("Testing del:\n");
  printf("\nDeleting song Mozart : Eine kleine Nachtmusik.");
  del("Mozart", "Eine kleine Nachtmusik");
  printf("\nDeleting song Beethoven : Für Elise.");
  del("Beethoven", "Für Elise");
  printf("\nDeleting song Debussy : Clair de Lune.");
  del("Debussy", "Clair de Lune");
  printf("\nDeleting song Scott Joplin : The Entertainer (which doesn't exist).");
  del("Scott Joplin", "The Entertainer");
  printf("\nDeleting song Grieg : In the Hall of the Mountain King.");
  del("Grieg", "In the Hall of the Mountain King");
  printf("\nDeleting song Johann Strauss II : The Blue Danube.");
  del("Johann Strauss II", "The Blue Danube");
  printf("\n\nPrinting library:\n");
  print_library();

  printf("\n======================================================================================\n");

  printf("Testing clear:\n\n");
  clear();
  printf("\nlibrary after clear:\n");
  print_library();
  printf("\n\n");

  return 0;
}
