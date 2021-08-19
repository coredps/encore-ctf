#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// "912465"
bool check(int x)
{
	return x * 10 + 5 == 912465;
}

int main(void)
{
	printf("Welcome to Encore\n Please enter your password: ");
	int num;
	scanf("%d", &num);
	if (check(num)) {
		puts("logged in");
	} else {
		puts(" stahp the haxing");
	}
}
