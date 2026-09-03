#include<stdio.h>
int main(void)
{
	int n;
	printf("enter n value");
	scanf("%d",&n);
	int i,a[n],k=0;
	float b;
	for(i=1;i<=n;i++)
	{
		printf("enter value");
		scanf("%d",&a[i]);
		k=k+a[i];
	}
	b=k/n;
	int t=0;
	printf("avg is %2f\n",b);
	for (i=1;i<=n;i++)
	{
		if(a[i]>b)
		t++;
	}
	printf("total numbers that are greater  than avg is %d",t);
}
			


