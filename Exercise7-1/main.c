#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Arian khatiban
// Exercise7-1

int main()
{
    int oddsum = 0,
            evensum = 0,
            code[20],
            i,
            check_digit,
            last_digit,
            result;

    printf("Enter the barcode: ");
    for(i = 0; i < 12; i++)
        scanf("%d", &code[i]);

    for(i = 0; i < 12; i = i + 2)
        oddsum += code[i];
    for(i = 1; i < 10; i = i + 2)
        evensum += code[i];

    oddsum *= 3;
    result = oddsum + evensum;
    last_digit = result % 10;

    if(last_digit != 0)
        check_digit = 10 - last_digit;
    else
        check_digit = last_digit;

    printf("\nSum of digits in odd positions multiplied by 3 is %d", oddsum);
    printf("\nSum of digits in even positions is %d", evensum);
    printf("\nSum of digits in odd positions multiplied by 3 added to Sum of digits in even positions is %d", result);

    if(check_digit == code[11])
        printf("\n\nvalidated\n");
    else
        printf("\n\nerror in barcode\n");

    return 0;
}

