#include <stdio.h>
int main()
{
	int i,j,k,n;
	printf("Enter no. of repetitions : ");
	scanf("%d", &n);
	printf("\n");
	for (i=1;i<=n;i++)
	{
		printf("0\n");
		for (j=1;j<=i;j++)
		{
			for (k=1;k<=j;k++)
			{printf("%d",k);}
			printf("\n");
		}
		
		for (j=i-1;j>0;j--)
		{
			for (k=1;k<=j;k++)
			{printf("%d",k);}
			printf("\n");		
		}
		
	}
	return 0;
}
