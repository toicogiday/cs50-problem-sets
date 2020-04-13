#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int count_letters(string s);
int count_words(string s);
int count_sentences(string s);

int main(void)
{
    string text = get_string("Text: ");
    int letter = count_letters(text) ;
    int W = count_words(text);
    int sentence = count_sentences(text);
    double S = (double)(100 * sentence) / W;
    double L = (double)(100 * letter) / W;
    int index = round(0.0588 * L -0.296 * S - 15.8);
    if (index < 1)
    {
        printf("Before Grade 1\n");

    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");

    }
    else
    {
        printf("Grade %i\n", index);

    }
}

int count_letters(string s)
{
    int num = 0;
    for(int i = 0; i < strlen(s); i++)
     {
        if(isalpha(s[i])< 0||isalpha(s[i])>0 )
        {
            num ++;
        }
    }
    return num;
}

int count_words (string s)
{
    int num = 1;
    for(int i = 1; i<strlen(s); i++)
    {
        if(isspace(s[i])!=0)
        {
            for(int k =i+1; k<strlen(s); k++)
            {
                if(isalpha(s[k])!=0)
                {
                    num++;
                    break;
                }
            }

        }
}
return num;
}

int count_sentences (string s)
{
    int num = 0;
    char c1 = '.';
    char c2 = '!';
    char c3 = '?';
    for(int i =0; i<strlen(s); i++)
    {
         if((int)s[i]==(int)c1||(int)s[i]==(int)c2||(int)s[i]==(int)c3)
         {
            num++;
        }
    }
    return num;
}