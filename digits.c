#include <stdio.h>

int main()
{
    int n , i;
    int count = 0;
    printf("Enter an integer: ");
    scanf("%d",&n);

    for( i = 0 ; n!=0 ; i++)
    {
        n /= 10;
        ++count;
    }
     printf("Number of digits: %d", count);
}
