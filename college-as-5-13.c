#include<stdio.h>
/*
Write program, which will print those numbers whose last digit is between 5 and 8. e.g. 5, 6, 7, 8, 15, 16, 17, 18, 25, 26, ….
*/
int main()
{
    for(int i=0;i<=100;i++)
    {
        if(i>=5 && i<=8 || (i%10)>=5 && (i%10)<=8)
        {
            printf("%d ",i);
        }
    }
    return 0;
}