#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char text[] = "SCROLLING TEXT";
    int b = strlen(text);
    for(int i = 0; i <= b; i++)
    {
        for(int j = b - i; j < b; j++)
            printf("%c", text[j]);
        system("cls");
    }
    for(int i = 0; i < b; i++)
        printf("%c",text[i]);
    
    return 0;
}
