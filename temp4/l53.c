#include<stdio.h>
int main(void)
{
        int n,i;
        printf("enter n value");
        scanf("%d",&n);
        int a[n];
        int count[10] ={0};
        for(i=1;i<=n;i++)
        {
                printf("enter single digit number ");
                scanf("%d",&a[i]);
                while(!(a[i]>=0&&a[i]<=9))
                {
                        printf("please enter single digit number");
                        scanf("%d",&a[i]);
                }
                count[a[i]]++;
        }
        printf("\n");
        for(i=0;i<=9;i++)
        {
                printf("%d : %d\n",i,count[i]);
        }
}




