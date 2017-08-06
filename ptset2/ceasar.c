#include <stdlib.h> // atoi function
#include <stdio.h>
#include <cs50.h>
#include <ctype.h> // toupper
#include <string.h> // strlen


int main(int argc, string argv[]){
    if (argc != 2){
        printf("Number of arguments don't match. Try again\n");
        return 1;
    }
    int key = atoi(argv[1]);
    if (key <= 0){
        printf("Can't cipher\n");
        return 1;
    }
    else
    {   
        printf("Plaintext: ");
        string s = get_string();
        
        printf("Ciphertext: ");
        if (s != NULL)
        {
            for (int i = 0, n = strlen(s); i < n; i++)
            {
                if (islower(s[i])){
                    printf("%c", ((s[i] + key - 97) % 26) + 97);
                }
                else if(isupper(s[i])){
                    printf("%c", ((s[i] + key - 65) % 26) + 65);
                }
                else{
                    printf("%c", s[i]);
                }
            }
            printf("\n");
        }
    }
}
