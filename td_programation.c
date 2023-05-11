#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=0;
    int i,l;
    int t[20]={0,0,2,4,5,23,22,56,2,66,6,2,62,24,15,66,43,21,45,76};
    int a[20];
    for(i=0;i<20;i++)
    {
       int k=0;
       for(int j=0;j<i;j++)
       {
            if(t[i]==a[j])
            {
                k=1;
            }
       }
       if(k==0)
       {
            a[n]=t[i];
            n++;
       }
    }
    for(i=0;i<44;i++)
    {
        printf("t[%d]=%d\n",i,a[i]);
    }
    
    return 0;
}