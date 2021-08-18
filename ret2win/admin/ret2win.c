#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void flag(){
  system("/bin/cat flag.txt");
}

void get_password(){
  char password[25];
  gets(password);
}

int main(){
  setvbuf(stdout, NULL, _IONBF, 0);
  printf("This is encore!\n");
  printf("Enter your password to enter: ");
  get_password();
  printf("Thanks for the participating :)\n");
  return 0;
}
