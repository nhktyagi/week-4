#include<stdio.h>
int main()
{
	int i,n,s,j;
	printf("Enter the number of lines");
	scanf("%d",&n);
	{
	for (i=0;i<n;i++)
	{
	for (s=0;s<i;s++)
	printf(" ");
 for(j=0;j<n-i;j++)
 printf("*");

	printf("\n");
}
}
}

