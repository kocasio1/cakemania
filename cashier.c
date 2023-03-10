//karina ocasio
// A C program that allows a customer to choose from a menue. The customer can continue to add multiple 
//items to their cart. Once the customer is done they can choose which city they live in for county tax.
//Once the items and tax are finished the total will be displayed.
//Customer can choose how much they pay and the program will compute change. 
//Creating a program that takes change from customer and give back left over change
#include<stdio.h>
#include<stdlib.h>

int main(){

   //initializing variables
    int selection;
    float cheesecake = 1.50;
    float cappuccino = 1.50;
    float lavaCake = 3.50;
    float scones = 1.00; 
    float totalAmount;

    //will loop till user choose 6
    while(selection != 6){
    printf("\n ==================================================================== \n");
    printf("                Welcome to Cake-Mania Cafe!                        \n");
    printf(" ==================================================================== \n");
    printf("Please choose selection: \n");
    printf("1. Passionfruit cheesecake(contains dairy): $1.50\n");
    printf("2. Chocolate Lava Cake(contains dairy): 3.50\n");
    printf("3. vanilla Bean scone: $1.00\n");
    printf("4. Cappuccino: 1.50\n");
    printf("5. press 5 once you are done shopping for total. Thank you!\n");
    printf("6. exit\n"); 
    scanf("%i", &selection);

    if(selection == 1){
        
        totalAmount = totalAmount + cheesecake; 
        printf("\n total amount before tax: %.2f \n", totalAmount);
    }
    
    else if(selection == 2){
        totalAmount = totalAmount + lavaCake;
         printf("\n total amount owed before taxes: $ %.2f \n", totalAmount);
    }
    else if (selection == 3){
        totalAmount = totalAmount + scones;
        printf("\n total amount owed before taxes: $ %.2f \n", totalAmount);
    }
    else if(selection == 4){
        totalAmount = totalAmount + cappuccino;
         printf("\n total amount owed before taxes: $ %.2f \n", totalAmount);
    }
    else if(selection == 5){
        int county;
        printf("\n Which city are you ordering from, Osceola(1) or Orange(2)?");
        scanf("%i", &county);
        if( county == 1 ){
            float osceola = .075; 
            totalAmount = (totalAmount * osceola) + totalAmount;
            printf("\n total amount owed: $ %.2f \n", totalAmount);
        }
        if(county == 2){
            float orange = .065;
             totalAmount = (totalAmount * orange) + totalAmount;
             printf("\n total amount owed: $ %.2f \n", totalAmount);
        }
        float billsAmount;
        printf("\nplease enter amount you like to pay (amount must be greater than bill): \n");
        scanf("%f", &billsAmount);
        
        totalAmount = billsAmount - totalAmount;
        
        printf("\nhere is your change: $%.2f \n", totalAmount);
        return 0;
       }
        }
    return 0;
}