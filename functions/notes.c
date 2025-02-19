//zoey sosa, funtion notes in C
#include <stdio.h>
int num;
char name [50],verb[50];
void add(int numOne, int numTwo){
    //return numOne+numTwo;
}
void due(char assignment[50], char day[20]){
    printf("The %s assignment is due %s", assignment, day);
}

const char* word(type){
   char choice[50];
   printf("please give me %s:\n", type);
   scanf("%s",choice);
}

int main(void){
    //printf("please tell me a number");
    //scanf("%d\n, num");
    //add(4,10);
    //add(7,10);
    due("functions notes", "today");
    due("hello world update", "tomorrow");
    due("hello world update", "today");
    return 0;

}