#include<stdio.h>
int main()
{
	int m=0;
	int B=2;
	int A=10;
	int a[10]={52,521,52,4,12,52,15,4,12,52}; 
	int b[2]={4,12};                         
	int i=0;int j=0;   
	while(j<B && i<A)
	{       
		if(a[i]==b[j])
		{
			j++;
			if(j==B-1)
			{
				printf("la table b se trouve a l indice %d\n",i);
				for(int k=i;k<i+B;k++)     
				{
					a[k]=a[k+B];
					m++;
				}
				j=0;                    
			}
		}
		i++;
	}	
	int l=0;
	for(l=0;l<A-m;l++)
	{
		printf("%d  ",a[l]);
	}
}
	
