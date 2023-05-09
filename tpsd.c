#include<stdio.h>
#include<stdlib.h>

struct cellul
{
    int val;
    struct cellul*suiv;
};
typedef struct cellul *list;

list cree_list()
{
    list l,neu,pre;int i;
    l = (list)malloc(sizeof(struct cellul));
    l->val =0;
    l->suiv =NULL;
    pre=l;
    for(i=1;i<20;i++)
    {
        neu=(list)malloc(sizeof(struct cellul));
        neu->val =i;
        neu->suiv= NULL;
        pre->suiv =neu;
        pre= neu;
    }
    return l;
}
void afficher_list(list l)
{
    list p=l;
    while (p!=NULL)
    {
        printf("%d\t",p->val);
        p=p->suiv;
    }
}
void remlir (list l,list *pair,list *impair)
{
    list p ,neu,neu2;
    p=l;
    while(p!=NULL)
    {
        if(p->val %2==0)
        {
            neu = (list)malloc(sizeof(struct cellul));
            neu->val=p->val;
            neu->suiv=*pair;
            *pair = neu;
        }
        else
        {
            neu2 = (list)malloc(sizeof(struct cellul));
            neu2->val=p->val;
            neu2->suiv=*impair;
            *impair = neu2;
        }
        p=p->suiv;
    }
}
int main()
{
    list l, impair=NULL,pair=NULL;
    l=cree_list();
    afficher_list(l);
    printf("\n");
    remlir(l,&pair,&impair);
    afficher_list(impair);
    printf("\n");
    afficher_list(pair);
    free(l);
    free(pair);
    free(impair);
}

