#include<stdio.h>
/*
Write program, which will print those numbers whose first digit leaves remainder 1 when divided by 3.
e.g.  10, 11, ..., 19,40, 41, …, 49, 70, 71, ..., 79.
*/
int main()
{
    for(int i=10;i<100;i++)
    {
        if((i/10)%3==1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}