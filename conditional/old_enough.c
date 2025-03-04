//zoey sosa, Old Enough C
#include <stdio.h>
int num;

int main(void){
    printf("How old are you?\n");
    scanf("%d", &num);
if(num == 18){
    printf("you can vote\n");
}else if (num ==16){
    printf("you can drive!\n");
}else if (num == 15){
    printf("You can get a learners permit\n");
}else if (num ==4)
    printf("you can go to school\n");
else{
    printf("you aren't any of these ages\n");
}
return 0;
}