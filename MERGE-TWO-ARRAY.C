#include <stdio.h>

int main() {
	int i,n,n1,temp,sum=0;
    int a[100],b[100],c[200];

	printf(" ENTER A ARRAY VALUE  = \n");
    scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
		c[i] =a[i];
		temp = i;
	}
	temp=temp+1;

	printf(" ENTER B  ARRAY VALUE = \n");
	scanf("%d", &n1);
	for(i=0;i<n1;i++)
	{
		printf("b[%d] = ",i);
		scanf("%d",&b[i]);	
		c[temp] = b[i];
		temp++;
	}	

	printf("\n MERGE TWO ARRAY  = ");
	for(i=0; i<n+n1; i++)
	{
		printf("%d  ",c[i]);
		sum = sum + c[i];
	}
	

	printf(" \n MERGE TWO ARRAY SUM  =  %d ",sum);
	
}

