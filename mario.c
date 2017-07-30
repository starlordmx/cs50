#include <cs50.h>
#include <stdio.h>

int positive(void);
int main(void) {
    int height = positive();
    for (int i = 0; i < height; i++){
        for (int j = 0; j < height - i - 1; j++){
           printf("%c", ' '); 
        }
        for (int k = 0; k <  i + 2; k++){
            printf("#");
        }
        for (int l = 0; l < 2; l++){
            printf("%c", ' ');
        }
        for (int m = 0; m < i + 2; m++)
        {
            printf("#");
        }
        printf("\n");
    }
}

int positive(void){
    int n;
    do{
        printf("Please, enter a positive number up to 23 for height:");
        n = get_int();
    }
    while(n < 0 || n > 23);
    return n;
}
