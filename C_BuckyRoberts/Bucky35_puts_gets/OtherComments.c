// The problem with gets is that there is no way to protect against buffer overflow.

  char name[20];
  printf("Enter your name: ");
  gets(str);
  printf("Your name is %s.\n", name);

//gets doesn't know the size of the array so if the user enters a name that is longer than 20 characters it will overwrite whatever is stored after the array in memory. This could lead to bugs (even crashes) in your program.

//With fgets the size of the array is passed as an extra argument. You also need to specify that you want to read from stdin (standard input).

  char name[20];
  printf("Enter your name: ");
  fgets(str, sizeof(str), stdin);
  printf("Your name is %s.\n", name);

//Now, if the user enters a name that is too long it will simply be chopped off so that only the first 19 characters is written to the array.﻿
