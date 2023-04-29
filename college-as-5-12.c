#include<stdio.h>
/*
Write program, which will print those numbers whose last digit is multiple of 3. e.g. 0, 3, 6, 9, 10, 13, 16, 19, 20, 23, ….. 
*/
int main()
{
    for(int i=0;i<=100;i++)
    {
        if((i%10)%3==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}