#include<stdio.h>
/*
Write program, which will print all numbers, which are either a multiple of 3 or 5 but not both.
*/
int main()
{
    for(int i=1;i<=100;i++)
    {
        if((i%3==0 || i%5==0) && !(i%3==0 && i%5==0))
        {
            printf("%d ",i);
        }
    }
    return 0;
}