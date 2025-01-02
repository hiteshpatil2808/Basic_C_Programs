#include <stdio.h>
#include <stdlib.h>

void factor();
void factorial();
void primeNumber();
void reverseNumber();
int main() 
{
	int ch,c;
	do
	{
	    printf("\n1-Factor of number\n2-Factorial of a number\n3-To check Prime numbers\n4-Reverse of Number");
 	    printf("\nEnter your choice : ");
	    scanf("%d",&ch);
 	    switch(ch)
 	    {
 	    	case 1:
 	    		factor();
 	    		break;	
	        case 2:
	        	factorial();
	        	break;
	        case 3:`
	        	primeNumber();
	        	break;
	        case 4:
	        	reverseNumber();
			 	break;
	    }
        printf("\nTo continue pree 1...");
        scanf("%d",&c);
	}while(c==1);
	printf("\n------------THANK YOU-----------");
	return 0;
}
void factor()
{
	int n,i;
	printf("\nEnter any number to find factors : ");
	scanf("%d",&n);
	printf("\nFactors of a number %d : ",n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			printf("\n%d",i);
		}
	}
}
void factorial()
{
	int n,i,fact=1;
	printf("\nEnter number to find a factorial : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\nFactorial of number %d : %d",n,fact);
}
void primeNumber()
{
	int n,i,flag=0;
	printf("\nEnter any number to check it prime number or not : ");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		printf("\n%d is not a prime number",n);
	}
	else
	{
		printf("\n%d is a prime number",n);
	}
}
void reverseNumber()
{
	int n,rev=0,rem;
	printf("\nEnter a any number to find reverse of a number : ");
	scanf("%d",&n);
	while(n=!0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("\nReverse of a %d is : %d",n,rev);
}
