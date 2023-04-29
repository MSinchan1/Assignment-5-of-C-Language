#include<stdio.h>
/*
Write program, which will print all numbers which are multiple of either 3 or 7.
*/
int main()
{
    for(int i=1;i<=100;i++)
    {
        if(i%3==0 || i%7==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}