#include<stdio.h>
int main(void)
{
    int m[6][6]={{1,0,0,1,1,1},{0,1,0,1,1,1},{1,1,0,1,1,1},{1,1,1,0,0,1},{0,0,0,1,1,0},{1,1,0,1,1,0}};
    int n=2,r=0;

    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            printf(" %d",m[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            for(int k=i;k<n+i;k++)
            {
                for(int l=j;l<n+j;l++)
                {
                    {
                        if ( (m[k][l]==0))
                        {
                            r=1;
                            break;
                        }
                    }
                }
            }
            if(r==0)
            {
                n++;
                printf(" les valeur sont %d %d %d \n",i,j,n-1);
                j--;
            }
            else
            {
                n=2;
            }
            r=0;
        }
    }
}