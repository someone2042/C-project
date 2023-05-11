 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
typedef struct{
    int jour;
    int anne;
    int mois;
    
} date;

typedef struct{
    char Nom[30];
    char prenom[30];
    date naissance;
    int note[5];
    float moyenne;
} stagiaire;
typedef struct{
    int lenght;
    stagiaire table[100];
}classe;
typedef struct{
    int lenght;
    classe table[30];
}institut;

date remplir_date()
{
    date a;
    printf('saisir la date:\n');
    scanf("%d%d%d",&a.jour,&a.mois,&a.anne);
    return a ;
}

stagiaire remplir_stage()
{
    float s;
    stagiaire stage;
    printf("saisir le nom et le prenom\n");
    scanf("%s%s",&stage.Nom,&stage.prenom);
    stage.naissance=remplir_date();
    for(int i=0;i<5;i++)
    {
        printf("saisir la not %d \n",i);
        scanf("%d",&stage.note[i]);
        s=s+stage.note[i];
    }
    stage.moyenne=s/5;
    return stage;
}

void aficher_stage(stagiaire a)
{
    printf("le nom est %s: \nle prenom est %s: \nla date de naissance est : %d/%d/%d\nle moyenne est : %f\n",a.Nom,a.prenom,a.naissance.jour,a.naissance.mois,a.naissance.anne,a.moyenne);
}

classe cree_class()
{
    classe a;
    printf("saisir le nombre des stagaire en class\n");
    scanf("%d",&a.lenght);
    for(int i=0;i<a.lenght;i++)
    {
        a.table[i]=remplir_stage();
    }
    return a;
}

 int main()
 {
    char A[30];
    printf("zejiko");
    gets(A);
    printf("%s",A);
    return 0;
 }


