#include<stdio.h>
#include<stdlib.h>

typedef struct cellule
{
    int exp;
    float coef;
    struct cellule *suiv;
} cellule;

typedef cellule *polynome;

polynome ajoute( polynome poly, int exp ,float coef)
{
    polynome nv,p,q;
    if(poly==NULL)
    {
        nv=(polynome)malloc(sizeof(struct cellule));
        nv->coef=coef;
        nv->exp=exp;
        nv->suiv=NULL;
        return nv;
    }
    else
    {
        p==poly;
        while(p->suiv!=NULL)
        {
            p=p->suiv;
        }
        nv=(polynome)malloc(sizeof(struct cellule));
        nv->coef=coef;
        nv->exp=exp;
        nv->suiv=NULL;
        p->suiv=nv;
    }
}
