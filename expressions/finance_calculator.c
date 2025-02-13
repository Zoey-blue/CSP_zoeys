//zoey sosa, TEMPLATE
#include <stdio.h>
#include <math.h>

char name [1000];
float income,rent,utilities, groceries, transportation,savings,spendings;

int main(void){

printf("Welcome to my finance calculator!\n");

printf("what is your income?\n");
scanf("%f",&income);

printf("what is your rent?\n");
scanf("%f",&rent);

printf("how much is your utilities?\n");
scanf("%f",&utilities);

printf("how much is your groceries?\n");
scanf("%f",&groceries);

printf("how much is your transprtation?\n");
scanf("%f",&transportation);

float savings=income*0.1;
float spending=income-savings-rent-utilities-groceries-transportation;
float rent_percentage= rent/income *100;
float utilities_percentage= utilities/income *100;
float groceries_percentage= groceries/income *100;
float transportation_percentage= transportation/income *100;
float spending_percentage= spending/income *100;
float saving_percentage= savings/income *100;

printf ("your rent is $ %f, which is %f, percent of your income\n", rent, rent_percentage);

printf ("your utilities is $ %f, whitch is %f, percent of your incme\n", utilities, utilities_percentage);

printf ("your groceries is $ %f, which is %f, percent of your income\n", groceries, groceries_percentage);

printf ("your transportation is $ %f, which is %f, percent of your income\n", transportation, transportation_percentage);

printf ("your saving is $ %f, which is %f, percent of your income\n", savings, saving_percentage);

printf ("your spending is $ %f, which is %f, percent of your income\n", spending, spending_percentage);
    return 0;
}