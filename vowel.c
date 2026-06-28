#include<stdio.h>
int main()
{
    char vowal[5]={'a','e','i','o','u'};
    char ch;
    printf("Enter a alphabet: ");
    scanf(" %c", &ch);
    for(int i=0; i<5; i++)
    {
        if(ch == vowal[i])
        {
            printf("It is a vowel.\n");
         } else
            {
                printf("It is not a vowel.\n");
            
            break;
        }
    }
    return 0;
}