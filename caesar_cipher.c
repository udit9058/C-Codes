//practical 1: Caesar cipher, Name : Udit Sharma, Enroll no : 200450131040
#include<stdio.h>
#include<ctype.h>
int main()
{
    char text[500], ch;
    int key;
    printf("Enter a message to encrypt: ");
    gets(text);
    printf("Enter the key: ");
    scanf("%d", & key);

    for (int i = 0; text[i] != '\0'; ++i)
    {
        ch = text[i];
        // check for valid character
        if (isalnum(ch))
        {
            // lower case characters
            if (islower(ch))
            {
                ch = (ch - 'a' + key) % 26 + 'a';
            }
            // uppercase characters
            if (isupper(ch))
            {
                ch = (ch - 'A' + key) % 26 + 'A';
            }
        }
        else
        {
            printf("Invalid Message");
        }
        // adding encoded answer
        text[i] = ch;
    }
    puts(text);


    for(int i = 0; text[i] != '\0'; ++i)
    {
        ch = text[i];
        if(ch >= 'a' && ch <= 'z')
        {
            ch = ch - key;
            if(ch < 'a')
            {
                ch = ch + 'z' - 'a' + 1;
            }
            text[i] = ch;
        }
        else if(ch >= 'A' && ch <= 'Z')
        {
            ch = ch - key;
            if(ch < 'A')
            {
                ch = ch + 'Z' - 'A' + 1;
            }
            text[i] = ch;
        }
    }
    printf("\nDecrypted message: %s", text);
    return 0;
}
