//zoey sosa, first program C 
#include <stdio.h>

char name[20];
int age;

int main(void){
    printf("what is your name\n" );
    scanf("%s", name);
    printf("what is your age\n");
    scanf("%d",&age);
    printf("hello your name is %s. You are %d year old.\n", name, age );
    return 0;
}