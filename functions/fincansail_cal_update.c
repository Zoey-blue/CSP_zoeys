//zoey sosa, Financial Calculator update C
#include <stdio.h>
#include <math.h>

float user_input(char *prompt){
    float value;
    printf("%s",prompt);
    scanf("%f",&value);
    return value;
}

void print_result(char*item_name, float amount, float income){
    float percentage= (amount/income)*100;
    printf("your %s are $%.2f which is %.2f%% of your income.\n", item_name, amount, percentage);
}

int main(){
    float income,rent,utilities, groceries, transportation,savings,spendings;
    printf("Welcome to your finance calculator!\n");
    income= user_input("what is your income\n");
    rent= user_input("what is your rent?\n");
    utilities= user_input("what are your utilities?\n");
    groceries= user_input("how much are your groceries?\n");
    transportation= user_input ("how much is your transportation?\n");

    savings= income*0.1;
    spendings= income-savings-rent-utilities-groceries-transportation;

    print_result("rent",rent, income); 
    print_result("utilities",utilities, income); 
    print_result("groceries",groceries, income); 
    print_result("transportation",transportation, income); 
    print_result("savings",savings, income); 
    print_result("spendings",spendings, income); 
    return 0;
}