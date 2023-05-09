#include<stdio.h>
int main(void)
{
    int c=30;
    int f;
    int t[30]={0,0,2,4,5,102,44,66,93,0,15,23,22,56,2,66,6,2,2,24,15,66,48,32,81,54,43,21,45,76};
    printf("saisir la valeur que vous voulez suprimer");
    scanf("%d",&f);
    for(int i=0;i<c;i++)
    {
        if(t[i]==f)
        {
            for(int j=i;j<c;j++)
            {
                t[j]=t[j+1];
            }
            c--;
            i--;
        }
    }
        for(int i=0;i<c;i++)
    {
        printf("%d|",t[i]);
    }
    printf("\n");
    


    //question 7
    int n=30;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(t[i]==t[j])
            {
                for(int k=j;k<30;k++)
                {
                    t[k]=t[k+1];
                }
                i--;
                n--;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d|",t[i]);
    }
    printf("\n");

}