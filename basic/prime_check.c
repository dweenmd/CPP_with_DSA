#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int n, count = 0;
    printf("Enter a value for n: ");
    scanf("%d", &n);
    printf("Prime numbers from 1 to %d are:\n", n);
    for (int num = 2; num <= n; num++)
    {
        bool is_prime = true;
        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime)
        {
            count += 1;
            printf("%d ", num);
            if (count % 15 == 0)
                printf("\n");
        }
    }
    printf("\n total prime number are: %d ", count);
    return 0;
}
