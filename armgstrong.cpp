#include<stdio.h>
int main()
{
	int n, a,s=0;
	printf("enter the number");
	scanf("%d",n);
	s=n;
	while(s!=0)
	{
		a=n%10;
		s=s+(a*a*a);
		n=n/10;
	}
if(n==s)
{
	printf("It is a Armgstrong number");
	}	
	else
	printf("It is not a Armgstrong number");
}

