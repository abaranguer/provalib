#ifndef EXTERNA
#define EXTERNA

#include <stdio.h>
#include <string.h>

char *externa(char *str1, char *str2) {
  /* concatenates cad1 and cad2 */
  return strcat(str1, str2);
}

/* main - test */
char append[] = "; appended buffer content.";
char buffer[200] = "initial buffer content";

int main(int argc, char *argv[]) {  
  printf("original (before): %s\n", buffer); 
  printf("buffer length (before) %d\n", strlen(buffer));
  externa(buffer, append);
  printf("original (after): %s\n", buffer);
  printf("buffer length (after) %d\n", strlen(buffer));
  return(0);
}

#endif 
