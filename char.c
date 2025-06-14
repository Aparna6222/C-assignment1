#include <stdio.h>
int main()
{
    char ch;

    printf("Enter character:\t");
    scanf("%c", &ch);

    printf("You entered: %c\n", ch);

    printf("Previous character: %c\n", ch - 1);

    printf("Next character: %c\n", ch + 1);

    return 0;
}
