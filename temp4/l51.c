#include <stdio.h>
int main(void)
{
	int n;
	printf("enter n value");
	scanf("%d",&n);
	int i,j,a[n][n];
	for(i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			a[i][j]=i*j;
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
}

			
