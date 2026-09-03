#include <stdio.h>
int main(void)
{
	int n,m;
	printf("enter n,m values");
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(i>1&&i<n&&j>1&&j<m)
				printf(" ");
			else
				printf("^");
		}
		printf("\n");
	}
}
