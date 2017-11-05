#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[])
{
    char name[10];
    printf("Input your name: ");
    scanf("%s",name);
    printf("Your name is: %s",name);
    return 0;
}