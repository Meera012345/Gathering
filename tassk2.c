#include<stdio.h>
avg(int n[])
{
	int i,sum=0;
	for(i=0;n[i]!=NULL;i++)
	{
		sum=sum+n[i];
	}
	printf("Addtion of your value is:-%d\n",sum);
}
main()
{
	int a[100],b[100];
	int i,n;
	printf("Enter Array size=");
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	avg(a);	
}
