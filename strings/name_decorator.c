//zoey sosa, name decorator C
#include <stdio.h>

    char name [2000];
   
int main(void){
    printf("hello welcome to your personal name decorator\n");
    printf("What is your name?\n");
    scanf ("%s", name);
    char decor1 [20] ="^^^";
    char decor2 [20] = "^^^";
    printf("%s\n",decor1);
    strcat(decor1,name);
    printf("%s\n",decor2);
    strcat(decor1, decor2);
    printf("%s", decor1);
    return 0; 
}