#include <stdio.h>
#include <cs50.h>

float posFloat(void);
int main(void){
    float change = posFloat();
    printf("%.2f is your change\n", change);
    int i = change * 100;
     printf("%i is your change in cents\n", i);
    int quarter = 0, nickel = 0, dime = 0, cent = 0;
 
    while(i >= 25){
        quarter++;
        i -= 25;
    }
    while(i >= 10){
        nickel++;
        i = i - 10;
    }
    while (i >= 5){
        dime++;
        i = i - 5;
    } 
    while (i >= 1){
        cent++;
        i = i - 1;
    }
    
    printf("Quarters: %i (%i cents)\nNickels: %i (%i cents)\nDimes: %i (%i cents)\nCents: %i (%i cents)\n", 
    quarter, quarter * 25, nickel, nickel * 10, dime, dime * 5, cent, cent * 1);
    }    

float posFloat(void){
    float n;
    do{
        printf("What is your change? ");
        n = get_float();        
    }
    while(n < 0);
    return n;
}
