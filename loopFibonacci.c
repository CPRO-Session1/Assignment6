#include <stdio.h>

void main() {

long int first, second, next;
int i, lim;


        printf("Enter the amount of terms you would like to print.\n");
        scanf("%d", &lim);

        first = 0;
        second =1;

        printf("\n");

        for (i=1; i<lim+1; i++)
        {

                next = first +second;
                printf("%ld\n", next);
                first = second;
                second = next;
        }


}

