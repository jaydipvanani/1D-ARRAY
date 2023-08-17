#include<stdio.h>
main()
{
	int i,n,sum=0,avg;
	int a[100];
	printf("ENTER ARRAY VALUE = ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		
		sum = sum + a[i];
		
	}
	printf("  ARRAY SUM = %d\n",sum);
	
	avg = sum/n;
	
	printf("  ARRAY AVG = %d ",avg);
}
