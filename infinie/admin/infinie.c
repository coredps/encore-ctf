#include <stdio.h>
#include <string.h>

static void welcome(char *s)
{
	char name[16];

	strcpy(name, s);
	printf("Hello %s! Welcome to Encore\n", name);
	getchar();
}

int main(void)
{
	char name[1024];

	setbuf(stdout, NULL);
	setbuf(stdin, NULL);
	setbuf(stderr, NULL);
	puts("What is your name?");

	fgets(name, sizeof(name), stdin);
	welcome(name);
}

