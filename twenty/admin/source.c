#include <stdio.h>
#include <stdlib.h>

void shell(){
	system("/bin/sh");
}

int main(int argc, char** argv)
{
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);

    printf("Comeon shout AAAA at me already: \n");
    int jojo;
    char buffer[100];
    jojo = 0;
    gets(buffer); 
    if (jojo == 21)
    {
        shell();
    }
    else if (jojo != 21 && jojo != 0){
        printf("Dude 21dB?");
    }
    else
    {
        printf("You need to be more extrAAAA\n");
    }
    return 0;
}
