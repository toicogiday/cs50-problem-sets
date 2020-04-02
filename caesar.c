#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    if(argc == 2)
    {
       for(int i = 0; i < strlen(argv[1]); i++)
       {
           if(isdigit(argv[1][i]) == 0){
               printf("Usage: ./caesar key\n");
               return 1;
           }
       }
       printf("Success\n");
       int key = atoi(argv[1]);
       string text = get_string("plaintext: ");
       printf("ciphertext: ");
       for (int i = 0; i < strlen(text); i++)
       {
          if(isalpha(text[i]) != 0 && isupper(text[i]) == 0 )
           {
               int numOfLetter = (int)text[i] - 97;
               int newAlpha = (numOfLetter + key) % 26;
               printf("%c", (char)(newAlpha + 97));
           }
           
           else if(isalpha(text[i]) != 0 && isupper(text[i]) != 0 )
           {
               int numOfLetter = (int)text[i] - 65;
               int newAlpha = (numOfLetter + key) % 26;
               printf("%c", (char)(newAlpha + 65));
           }
           else if(isalpha(text[i]) == 0)
           {
               printf("%c", text[i]);
           }
       }


    }
    printf("\n");

}