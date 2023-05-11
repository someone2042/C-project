#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


char M[5][7]={{' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' '}};

bool win()
{
    //if player 1 wins

    // in line 
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            int k=j;
            while(k<j+4)
            {
                if(M[i][k]=='X')
                {
                    k++;
                }
                else
                {
                    break;
                    
                }
            }
            if(k==j+4)
            {
                printf("\n player 1 wins");
                return true ;
            }
        }
    }
    //in column

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<7;j++)
        {
            int k=i;
            while(k<i+4)
            {
                if(M[k][j]=='X')
                {
                    k++;
                }
                else
                {
                    break;
                }
            }
            if(k==i+4)
            {
                printf("\n player 1 wins");
                return true ;
            }
        }
    }

    //in y=-x
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            int k=j,l=i;
            while(k<j+4)
            {
                if(M[l][k]=='X')
                {
                    k++;
                    l++;
                }
                else
                {
                    break;
                }
            }
            if(k==j+4)
            {
                printf("\n player 1 wins");
                return true ;
            }
        }
    }

    //in y=x
    for(int i=3;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            int k=j,l=i;
            while(k<j+4)
            {
                if(M[l][k]=='X')
                {
                    k++;
                    l--;
                }
                else
                {
                    break;
                }
            }
            if(k==j+4)
            {
                printf("\n player 1 wins");
                return true ;
            }
        }
    }

//##########################################################

    //if player 2 wins


    //in line
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            int k=j;
            while(k<j+4)
            {
                if(M[i][k]=='O')
                {
                    k++;
                }
                else
                {
                    break;
                }
            }
            if(k==j+4)
            {
                printf("\n player 2 wins");
                return true ;
            }
        }
    }

    //in column
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<7;j++)
        {
            int k=i;
            while(k<i+4)
            {
                if(M[k][j]=='O')
                {
                    k++;
                }
                else
                {
                    break;
                }
            }
            if(k==i+4)
            {
                printf("\n player 2 wins");
                return true ;
            }
        }
    }
     //in y=-x
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            int k=j,l=i;
            while(k<j+4)
            {
                if(M[l][k]=='O')
                {
                    k++;
                    l++;
                }
                else
                {
                    break;
                }
            }
            if(k==j+4)
            {
                printf("\n player 2 wins");
                return true ;
            }
        }
    }

    //in y=x
    for(int i=3;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            int k=j,l=i;
            while(k<j+4)
            {
                if(M[l][k]=='O')
                {
                    k++;
                    l--;
                }
                else
                {
                    break;
                }
            }
            if(k==j+4)
            {
                printf("\n player 2 wins");
                return true ;
            }
        }
    }

}

int main(void)
{
    int T[7]={0,0,0,0,0,0,0};
    int n=0,a;
    while(!win())
    {
        if(n%2==0)
        {
            printf("\nPLAYER 1 : ");
            scanf("%d",&a);
            while(a<1||a>7||(T[a-1]>4))
            {
                printf("\nCHOSE AN OHTER VALUE : ");
                scanf("%d",&a);
            }
            M[T[a-1]][a-1]='X';
            T[a-1]+=1;
        }
        else
        {
            printf("\nPLAYER 2 : ");
            scanf("%d",&a);
            while(a<1||a>7||(T[a-1]>4))
            {
                printf("\nCHOSE AN OHTER VALUE : ");
                scanf("%d",&a);
            }
            M[T[a-1]][a-1]='O';
            T[a-1]+=1;
        }
        for(int i=4;i>=0;i--)
        {
            for(int j=0;j<7;j++)
            {
            printf(" %c ",M[i][j]);
            }
            printf("\n");
        }
        n++;
    }
}