#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0;
    int count = 1;
    int in=0;
    for(count;count<=5;count++)
    {
        printf("Please Enter the Number: ");
        scanf("%d",&in);
        sum=sum+in;
        printf("%d\n",sum);
    }
}
