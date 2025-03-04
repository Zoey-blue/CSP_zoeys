//zoey sosa, time of day
#include <stdio.h>
#include <time.h>


int main(void){
    time_t now= time(NULL);
    struct tm*tm_struct = localtime(&now);
    int hour= tm_struct->tm_hour;
    printf ("%d\n", hour);
    
if (hour<=12){
    printf ("good morning");
}else if (hour<= 17){
    printf("good afternoon");
}else {
    printf("good evening");
}
return 0;
}