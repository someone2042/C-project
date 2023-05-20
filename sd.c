#include<stdio.h>
#include<stdlib.h>

typedef struct cellule
{
    int exp;
    float coef;
    struct cellule *suiv;
} cellule;

typedef cellule *polynome;

polynome ajoute( polynome poly, int coef ,float exp)
{
    polynome nv,p;
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
        p=poly;
        while(p->suiv!=NULL)
        {
            p=p->suiv;
        }
        if(p->suiv==NULL)
        {
            nv = (polynome)malloc(sizeof(struct cellule));
            nv->coef = coef;
            nv->exp = exp;
            nv->suiv = NULL;
            p->suiv = nv;

        }
        return poly;
    }
}
polynome somme(polynome p1,polynome p2)
{
    polynome somme=NULL;
    polynome pun,pdeux;
    //saisir de premier cellule du somme
    if(p1->exp>p2->exp)
    {
        somme=ajoute(somme,p1->exp,p1->coef);
        pun=p1->suiv;
    }
    if(p1->exp<p2->exp)
    {
        somme=ajoute(somme,p2->exp,p2->coef);
        pdeux=p2->suiv;
    }
    if(p1->exp==p2->exp)
    {
        somme=ajoute(somme,p1->exp,p2->coef+p1->coef);
        pdeux=p2->suiv;
        pun=p1->suiv;
    }
    while (pun!=NULL||pdeux!=NULL)
    {
        if(pun->exp > pdeux->exp)
        {
            somme=ajoute(somme,pun->exp,pun->coef);
            pun=pun->suiv;
        }
        if(pun->exp < pdeux->exp)
        {
            somme=ajoute(somme,pdeux->exp,pdeux->coef);
            pdeux=pdeux->suiv;
        }
        if(pun->exp==pdeux->exp)
        {
            somme=ajoute(somme,pun->exp,pdeux->coef+pun->coef);
            pdeux=pdeux->suiv;
            pun=pun->suiv;
        }
    }
    return somme;
}
void afficher(polynome poly)
 {
    polynome p = poly;
    while (p != NULL) 
    {
        printf("coef = %f\t exp = %d\n", p->coef, p->exp);
        p = p->suiv;
    }
}

void main(void)
{
    polynome poly1 = NULL, poly2 = NULL ,result=NULL;
    poly1 = ajoute(poly1, 1.0, 3);
    poly1 = ajoute(poly1, 3.0, 2);
    poly1 = ajoute(poly1, 1.0, 1);
    poly1 = ajoute(poly1, 1.0, 0);
    poly2 = ajoute(poly2, 4.0, 3);
    poly2 = ajoute(poly2, -2.0, 2);
    poly2 = ajoute(poly2, 1.0, 0);
    printf("polynome1\n");
    afficher(poly1);
    printf("polynome2\n");
    afficher(poly2);
    result=somme(poly1,poly2);
    printf("polynome3\n");
    afficher(result);
}

