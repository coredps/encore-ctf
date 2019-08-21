#include<stdio.h>
#include<string.h>
void main()
{
	char str1[100];
	printf("Why did you summon me?");
	scanf("%[^\n]s", &str1);
	char *str2 = "to_say_something";
	if(strcmp(str1, str2)==0)
	{
		printf("enc0re{all_these_moments_lost_in_time_starting_to_fade}");
	}
	else
	{
		printf("That's the most absurd answer you can give to me!");
	}
	
}