#include<stdio.h>
/*
Write a progrram to print even numbers between 0 to 100 or between 50 to 70;
The given program prints numbers between 0 and 100, which are either even or between 50 and 70.
*/
int main()
{
    int x;
    for(x=0;x<100;x++)
    {
        if(x>50 && x<70 || x%2==0)
        {
            printf("%d ",x);
        }
    }
    return 0;
}