#include <stdio.h>
int main() 
{
    char ch;
    printf("Enter any alphabet:");
    scanf(" %c", &ch);
    if ( ch == 'A' || ch == 'E' || ch == 'I' ||
        ch == 'O' || ch == 'U')
        printf("Vowel");
    else
        printf("Not a vowel");

    return 0;
}
