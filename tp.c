#include<stdio.h>
int main(void)
{
    a:
    int i,n;
    float moy,not;
    do
    {
        printf("entrer un entier positive");
        scanf("%d",&n);
    } while (n<1);
    moy=0;
    for(i=1;i<=n;i++)
    {
        do
        {
            printf("entrer une valeur positive \n");
            scanf("%f",&not);
        } while (not<=0);
        moy=moy + 2*not ;        
    }
    moy=moy/n;
    printf("%f\n",moy);
    goto a;
}