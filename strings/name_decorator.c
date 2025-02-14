//zoey sosa, name decorator C
#include <stdio.h>

    char name [2000];
   
int main(void){
    printf("hello welcome to your personal name decorator\n");
    printf("What is your name?\n");
    scanf ("%s", name);
    char decor1 [20] ="^^^";
    char decor2 [20] = "^^^";
    printf("%s%s%s", decor1, name, decor2);
    return 0;
}