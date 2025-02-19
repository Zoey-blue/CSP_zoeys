//zoey sosa, silly sentences C
#include <stdio.h>// empty string variables for user words (minimum 3)

char celebrity[50];
char place[50];
char food[50];

int main(void){
    // A welcome for the user telling them what the program is (print)
    printf("Welcome a silly sentences maker! Answer the following questions! (please only one word answers!!)\n");
    //ask user for words (print statement with a quesion scanf to set to a variable) 

    printf("What is you favorite celebrity?\n");
    scanf("%s", celebrity);
    printf("What is your favorite place to be?\n");
    scanf("%s", place);
    printf("What is you favorite food?\n");
    scanf("%s", food);
    
    //(in C we need to tell the user that they can only type 1 word)

    // print out the story with the varables inserted (" welcome %s to my program", name)
    printf("You were walking when %s saw you and you guys walked to the %s and ate %s", celebrity, place, food);
    return 0;
}