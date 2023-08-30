#include <stdio.h>
#include <ctype.h>

int main()
{
    int ch;
    while ((ch = getchar()) != EOF)
    {
        // checks if ch is a letter -- if not, it is printed as is
        if (isalpha(ch))
        {
            if (toupper(ch) >= 'A' && toupper(ch) <= 'M')
            {
                ch += 13;
            }
            else
            {
                ch -= 13;
            }
        }
        putchar(ch);
    }
    return 0;
}