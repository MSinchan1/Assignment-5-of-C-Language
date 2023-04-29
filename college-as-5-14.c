#include<stdio.h>
/*
Write program, which will print those numbers whose sum of both digits is multiple of 7. 
e.g. 0,7,16, 25, 34, 43, 52, 59, 61, 68, 70, 77, 86, 95.
*/
int main()
{
    for(int i=0;i<=100;i++)
    {
        if(((i/10)+(i%10))%7==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}