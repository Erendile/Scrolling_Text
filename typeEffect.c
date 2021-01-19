#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char text[] = "TYPE EFFECT";
    int s = strlen(text);
    for(int i = 0; i < s; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("%c",text[j]);
        }
        if(i != s - 1)
            system("cls");
    }

    return 0;
}
