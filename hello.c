#include<stdio.h>

int main(void)
{
    int t[100][100],n;
    printf("entre la valeur de N");
    scanf("%d",&n);
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<n;i++)
        {
            for(int k=0;k<n;k++)
            {
                if(i==k||j==k||i==n-1-k||j==n-1-k)
                {
                t[i][j]=n-k;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        printf(" %d",t[i][j]);
        }
        printf("\n");
    }
}