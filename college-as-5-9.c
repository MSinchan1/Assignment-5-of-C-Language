#include<stdio.h>
/*
Write program, which will print all numbers which are either between 50 and 70, or less than 20, or more than 90.
*/
int main()
{
    for(int i=1;i<=100;i++)
    {
        if(i>50 && i<70 || i<20 || i>90)
        {
            printf("%d ",i);
        }
    }
    return 0;
}