#include<stdio.h>
#include<stdlib.h>

int main() {
		  setvbuf(stdout, NULL, _IONBF, 0);
		    setvbuf(stdin, NULL, _IONBF, 0);
		      setvbuf(stderr, NULL, _IONBF, 0);

	          char *str;   
		      char *secret="enc0re{f0rm4t_5tr1n6_vuln3r4b1l1ty}";
		          printf("Please input value\n");
			      scanf("%s",str);
			          puts("aight imma just printf it again");
				      printf(str);
				      printf("\nwell you cant leak me easily. Can you?\n");
				          exit(1);
}

