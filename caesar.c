#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// char* caesar(char* text);

int main(int argc, char* argv[])
{
    if (argc == 2)
    {
        int len = strlen(argv[1]);
        for (int i = 0; i < len; i++)
        {
            if (argv[1][i]<'0' || argv[1][i]>'9')
            {
                printf("Usage: ./caesar key");
                return 1;
            }
        }
    }
    else
    {
        printf("Usage: ./caesar key");
        return 1;
    } 

    char* plaintext;
    printf("Plaintext: ");
    scanf("%s", plaintext);

    int n = atoi(argv[1]);

    //plaintextをn個分ずらす
    int len = strlen(plaintext);

    for (int i = 0; i < len; i++)
    {
        if (islower(plaintext[i]))
        {
            if (plaintext[i] + n > 'z') plaintext[i] = 97 + (plaintext[i] + n - 97)%26;
            else plaintext[i] += n;
        }
        else
        {
            if (plaintext[i] + n > 'Z') plaintext[i] = 65 + (plaintext[i] + n - 65)%26;
            else plaintext[i] += n;
        }
    }
    
    printf("%s %i\n", plaintext, n);

    return 0;
}

// char* caesar(char* text)
// {
//     return text;
// }