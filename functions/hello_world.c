//zoey sosa, hello world update c
#include <stdio.h>
#include <math.h>

void add(char name[]){
      printf("Hello %s!\n",name);
}

int main(void){
    char name[50];

    printf("what is your name?\n");
    scanf("%s", name);
    add(name);

    add("Jasper");
    add("Josephine");
    add("Amon");
    add("Sam");
    return 0;
}
