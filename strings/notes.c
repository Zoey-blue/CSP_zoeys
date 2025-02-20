//zoey sosa, Strings notes C
#include <stdio.h>
#include <string.h>

//char subject[50];
//char name[]= "Victoria";
//char sentence[] = 

int main(void){
    //printf("What class are you in?\n");
    //scanf("%s", subject);
    //fgets(subject, sizeof(subject), stdin);
    //printf("you are in %s, that is a cool class", subject);
    //name[0] = 'T';
    //name[1] = 'o';
    //name[2] = 'r';
    //name[3] = 'i';
    //printf("%s", name);
    //printf("%lu\n", sizeof(sentence));
    //printf("%d\n",strlen(sentence));
    char one[]= "hello";
    char two[]= "world";
    char three[]= "welcome to my program";
    printf("%s\n",one);
    strcat(one, two);
    printf("%s\n", two);
    strcat(three,one); //can only concattenate 2 things at a time
    return 0;
}
sgv jsngoenoengwegmgpowme