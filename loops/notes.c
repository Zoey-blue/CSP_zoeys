//zoey sosa, Notes in C
#include <stdio.h>

int main(void){
 //What is a loop? 
    // a section of code repeated multiple time
//What are the two types of loops?
    //while loops
    int start = 0;
    while(start <5){
        print("hello!\n");
        start++;
    }
    //for loops
    int q;
    for (q=0;q<5;q++){
        print("%d\n",q);
    }
//What is iteration
    //repeating something with minor changes each time 
    // like q becuase it changes everytime
//What are lists? 
    //A array is a varible holding multipe values 

//How do you make arrays (lists) in C?
    //arrays items must be all the same data type
int grades[] = {88, 97, 100, 70, 72, 99, 61};
// 1. set data type
//2. AFTER naming put brackets and write the lenth of the list
//3. list is surrounded by curly brackets {}
//4. commas, between each item

//How do you make for loops in C?
printf("CSP Grade: %d\n", grades[2]);
// change an item in the array
grades[2] = 95;
printf("CSP Grade: %d\n", grades[2]);

// size of list in bytes
int size = sizeof (grades);
//length in list items 
int length = sizeof (grades)/sizeof(grades[0]);
printf("the array is %d items long.\n", length);
// array with strings
//frist brackets sets elngth of list
//seconds brackets sets length of each string
char movies[][20] = {"Cars","treasure plant", "an american tale", "marley and me", "the avengers"};
printf("the movie is %s!\n", movies[1]);
int mlength = sizeof(movies)/sizeof(movies[0]);
//set the iterator, keep track of times through the loop (best practice )
int x;
// in parens (starting point; ending point; count by)
for (x=0;x<10;x++){
    printf("%d\n",x);

}
int m;
for (m=0;m<mlength;m++){
    
};
//How do you make while loops in C?"
int w = 0;
while(w<100)
    printf ("%d\n",w);
    w+=10;

    return 0;
}