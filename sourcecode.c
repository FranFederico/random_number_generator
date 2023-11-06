#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, numbers, amount, start, end;

    printf("Enter Interval.\n");
    printf("From: ");
    scanf("%d", &start);
    printf("To: ");
    scanf("%d", &end);
    printf("\nHow many Random Numbers to Generate ? ");

    scanf("%d", &amount);
    printf("\nGenerating %d Random Numbers between %d and %d:\n", amount, start, end);
    srand(time(0));

    for(i=0; i<amount; i++)
    {
        numbers = rand()%(end+1-start)+start;
        printf("%d\n", numbers);
    }

    return 0;
}
