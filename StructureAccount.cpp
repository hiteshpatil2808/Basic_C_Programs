#include <stdio.h>
#include <stdlib.h>

struct Account
{
	int accNo;
	char cname[10];
	float accbal;
	int accpwd;
};
int main() 
{
	int i,search,flag=0,flag1=0,ch,amt,pwd;
	float balance;
	struct Account accarr[3];
	
	printf("\nSize of structure is : %d",sizeof(struct Account));
	for(i=0;i<3;i++)
	{
		printf("\nEnter a Account number : ");
	    scanf("%d",&accarr[i].accNo);
	    
	    printf("\nEnter the Account Holder name : ");
	    scanf("%s",&accarr[i].cname);
	    
	    printf("\nEnter the Account Balance : ");
	    scanf("%f",&accarr[i].accbal);
	    
	    printf("\nEnter a password for your account : ");
	    scanf("%d",&accarr[i].accpwd);
	}
	for(i=0;i<3;i++)
	{
		printf("\n===============================================");
		printf("\nAccount Number        : %d",accarr[i].accNo);
		printf("\nAccount Holder Name   : %s",accarr[i].cname);
		printf("\nAccount Balance       : %0.3f",accarr[i].accbal);
	}
	
	printf("\n===============================================");
	printf("\n\n==============WELCOME TO SBI BANK=============");
	printf("\n===============================================");
	printf("\nEnter Your Account Number : ");
	scanf("%d",&search);
	for(i=0;i<3;i++)
	{
		if(accarr[i].accNo==search)
		{
			flag=1;
			break;
		}	
	}
	if(flag==1)
	{
		do
		{
			printf("\n<><><><><><><><><><><><><><><><><><><><><><><>");
	    	printf("\nAccount Holder Name is : %s",accarr[i].cname);
		    printf("\n1-Deposite\n2-Widrawal\n3-Balance");
    		printf("\n");
    		scanf("%d",&ch);
		
    		if(ch==1)
    		{
	    		printf("\n-----------DEPOSITE------------------");
	    		printf("\nEnter the Deposite Amount ");
	    		scanf("%d",&amt);
	    		balance=amt+accarr[i].accbal;
	    		accarr[i].accbal=balance;
	    		printf("\nNew Account Balance : %0.3f",accarr[i].accbal);
	    	}
		
	    	else if(ch==2)
	    	{
	    		printf("\n-----------Widrawal------------------");
	    		printf("\nEnter the Amount Do You Want To Widraw : ");
	    		scanf("%d",&amt);
	    		
	    		printf("\nPlease Enter Your Pin : ");
	    		scanf("%d",&pwd);
	    		
	    		if(pwd==accarr[i].accpwd)
	    		{
	    		    printf("\nTransaction Successfull...");
					if(amt<=accarr[i].accbal)
	    		    {
	    	        	balance=accarr[i].accbal-amt;
	    	        	accarr[i].accbal=balance;
	            		printf("\nNew Account Balance : %0.3f",accarr[i].accbal);
                    }
					else 
			    	{
			    		printf("\nWrong Password...Please Try Again...");
			    	}

	    		}			
	    	    else
	    	    {
	    	   		printf("\nInsufficient Fund");
		   		}	
			}
		
	    	else if(ch==3)
		    {
	    		printf("\n-----------Balance-------------------");
	    		printf("\nAccount Balance : %0.3f",accarr[i].accbal);
		    }
		    else
    		{
	    		printf("\n-----------INVALID--------------------");
		    }

	    	printf("\nDo You Want to Continue Press 1...");
			scanf("%d",&ch);	
		}while(ch==1);
	}
	printf("\n\n^^^^^^^^^^^^^^^THANK YOU^^^^^^^^^^^^^^^^^^^^^^");
	return 0;
}
