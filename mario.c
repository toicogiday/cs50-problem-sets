#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do{
     height = get_int("A number from 1-8?");
    }while(height<1||height>8);
    if (height>=1||height<=8){
        for(int i =1; i<=height; i++){
        int k =height-i;
           while(k>0){
           printf(" ");
           k--;
           }
           int j =1;
            do{
           printf("#");
           j++;
           }while (j<=i);
           
           printf("\n");
        }
    }
}
