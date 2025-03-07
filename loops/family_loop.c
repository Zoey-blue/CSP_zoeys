//zoey sosa, My Family Loop C
#include <stdio.h>

int main(void){
    char sibilings[][20] = {"Sabrina","Maisha", "Cinthia"};
    int flength = sizeof(sibilings)/sizeof(sibilings[0]);

    int i;
    for (i=0;i<flength;i++){
        printf("hello %s\n",sibilings[i]);

    }

    return 0;
}