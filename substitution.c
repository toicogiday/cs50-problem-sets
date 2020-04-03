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
        printf("Usage: ./substitution key\n");
        return 1;
    }
    if(argc == 2)
    {
        if(strlen(argv[1]) != 26)
        {
            printf("Key must contain 26 characters\n");
            return 1;
        }
        else{
            for(int i = 0; i < strlen(argv[1]); i++)
            {
           if(isalpha(argv[1][i]) == 0){
               printf("Usage: ./substitution key\n");
               return 1;
           }
            for(int j = i+1; j< strlen(argv[1]);j++)
            {
                if( argv[1][j] == argv[1][i])
                {
                    printf("Key must not contained repeated characters");
                    return 1;
                }
            }
           }
    }
    

    string key = argv[1];
    string text = get_string("plaintext: ");
    printf("ciphertext: ");
    for (int i = 0; i < strlen(text); i++)
    {
      if(isalpha(text[i]) != 0 && isupper(text[i]) == 0 )  //if it is lowercase
           {
               int numOfLetter = (int)text[i] - 97;
               char newAlpha = key[numOfLetter];
               if(isupper(newAlpha) == 0)  //if it is lowercase
               {
                   printf("%c", newAlpha);
               }
               else //if uppercase
               {
                   int alpha2 = (int)newAlpha + 32;
                   printf("%c",(char)alpha2 );
               }
           }
        else if(isalpha(text[i]) != 0 && isupper(text[i]) != 0 ) //if uppercase
           {
               int numOfLetter = (int)text[i] - 65;
               char newAlpha = key[numOfLetter];
               if(isupper(newAlpha) == 0)  //if it is lowercase
               {
                   int alpha2 = (int)newAlpha - 32;
                   printf("%c",(char)alpha2 );
               }
               else //if uppercase
               {
                   printf("%c", newAlpha);
               }

           }
          else if(isalpha(text[i]) == 0) //not a alpha
           {
               printf("%c", text[i]);
           }

    }
    printf("\n");
}
}