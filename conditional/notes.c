//zoey sosa, conditional notes for C
#include <stdio.h>
#include <string.h> // needed to compare strings

char name[]="zoey";
int num;

int main(void){
//10. How do you write an if statement in C?
if(strcmp(name, "zoey")== 0){ // strcmp means string comparison when the outcome is 0 the string are the same 
    print("hello zoey, welcome to class\n");
//11. How do you write else statements in C?
}else{ 
    printf("hello %s, welcome to class.\n", name);
}

print("How many siblings do you have?\n");
scanf("%d", &num);
//12. How do you write elif/ else if statements in C?
if(num == 0){
    printf("you are a only child\n");
}else if (num <=2){
    printf("you have a couple siblings\n");
}else is (num <=5);{
    printf("you have a few siblings\n");
}
}

//13. How do you write the 3 logical operators in C?
//&& = and 
// ||= or
// ! = not
if (num == 7 || num == 13){
    printf("%d is an unlucky number\n", num);
}else if(num <10 && num >5){
    printf("%d is a large single digit number\n", num);
}else if (!num >10){
    if(num == 12){
        printf("that is a dozen!\n");
        }else{
            printf("%d is a big number\n", num);
    }else{
        printf("you type %d\n", num);
}
    return 0;
}