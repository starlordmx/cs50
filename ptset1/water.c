#include <stdio.h>
#include <cs50.h>

int main (void){
  int n;
  do{
    printf("How much time do you spend showering? ");
    n = get_int();
  }
  while(n<=0);
  printf("Minutes: %i\nBottles: %i\n", n, n * 12);
}
