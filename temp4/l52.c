#include <stdio.h>
int main(void)
{
	int n;
	printf("enter  n value");
	scanf("%d",&n);
	double a[n],b[n],j=0;
	int i;
	for(i=1;i<=n;i++)
	{
		printf("enter a value");
                scanf("%lf",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		printf("enter b value");
                scanf("%lf",&b[i]);
	}
	for(i=1;i<=n;i++)
	{
		j= j+ a[i]*b[i];
	}
	printf("dot product is %3f",j);
	return 0;
}

