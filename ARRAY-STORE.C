#include<stdio.h>
main()
{
	int i,n,sum=0,avg;
	int a[100],b[100],c[100];
	
	// a value
	printf("ENTER A ARRAY VALUE = ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
	// b value
	printf("\nENTER B ARRAY VALUE = ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("b[%d] = ",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",b[i]);
	}
	
	printf("\n SUM OF TWO ARRAY = \n");
	for(i=0;i<n;i++)
	{
		
		c[i] = a[i] + b[i];
		printf("%d\n",c[i]);
	}
	
	

}
