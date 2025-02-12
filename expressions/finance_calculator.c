//zoey sosa, TEMPLATE
#include <stdio.h>
#include <math.h>


float income,rent,utilities, groceries, transportation,savings,spendings;

int main(void){
printf("what is your income?");
scanf("%s",income);

printf("what is your rent?");
scanf("%s",rent);

printf("how much is your utilities?");
scanf("%s", utilities);

printf("how much is your groceries?");
scanf("%s",groceries);

printf("how much is your transprtation?");
scanf("%s",transportation);

float savings=income*0.1;
float spending=income-savings-rent-utilities-groceries-transportation;
float rent_percentage= rent/income *100;
float utilities_percentage= utilities/income *100;
float groceries_percentage= groceries/income *100;
float transportation_percentage= transportation/income *100;
float spending_percentage= spending/income *100;
float saving_percentage= savings/income *100;

printf ("your rent is $",rent,",which is",rent_percentage, "of your income");

printf("your utilities is $",utilities,",which is" ,utilities_percentage, "of your income");

printf("")
    return 0;
}