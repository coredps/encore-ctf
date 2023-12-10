#include <stdio.h>


void win() {
    puts("wait whaaaa-");

    char *args[] = {"/bin/sh", NULL};
    execve(args[0], args, NULL);
}

void vuln() {
    char buffer[64];
    puts("pown this :>");
    gets(buffer);
    printf(buffer);
    puts("everything is a bruteforce challenge if you're brave enough");
    gets(buffer);
}

int main() {
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
    vuln();
}
