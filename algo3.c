#include<stdio.h>
int main(void)
{
    char r , t[10]={'x','o','o','x','o','o','x','o','o','x'};
    int c=0,g=9,i=0;
    while(i<4)
    {
        if(t[c]=='x')
        {
            c++;
        }
        if(t[g]=='o')
        {
            g--;
        }
        if(t[g]=='x'&&t[c]=='o')
        {
            r=t[g];
            t[g]=t[c];
            t[c]=r;
        }
        i++;
    }
    for(int i=0;i<10;i++)
    {
        printf("%c|",t[i]);
    }
    printf("\n");
    for(i=0;i<10;i++)
    {
        if(i%3==0&&t[i]=='o')
        {
            for(g=0;g<10;g++)
            {
                if((g%3)!=0&&t[g]=='x')
                {
                    r=t[g];
                    t[g]=t[i];
                    t[i]=r;
                }
            }
        }
    }


    for(int i=0;i<10;i++)
    {
        printf("%c|",t[i]);
    }
}