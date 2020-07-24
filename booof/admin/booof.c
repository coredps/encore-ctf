#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>


int main(int argc, char **argv){

  setvbuf(stdout, NULL, _IONBF, 0);
  
  gid_t gid = getegid();
  setresgid(gid, gid, gid);

  FILE *file;
  char flag[50];
  char secret[128];
  
  memset(flag, 0, sizeof(flag));
  memset(secret, 0, sizeof(secret));

  printf("Please enter the password\n");
  
  fgets(secret, sizeof(secret), stdin);
  char *end = strchr(secret, '\n');
  if (end != NULL) {
    *end = '\x00';
  }

  strcat(secret, " | HAILCORE");

  file = fopen("flag.txt", "r");
  if (file == NULL) {
    printf("You have been caught pwning this binary 🔫");
    exit(0);
  }


  fgets(flag, sizeof(flag), file);

  printf("Here you go sir: ");
  puts(secret);

  return 0;
}