#include<iostream>
using namespace std;

	
	int main()
	{

	int a,b;
	char ch;
	int sum();
	int diff();
	int multiply();
	float division();
	
	cout<<"Enter the operation you want to perform (+,-,*,/): ";
	cin>>ch;
	
	
	if(ch=='+')
	{
		cout<<"ADDITION"<<endl;
		sum();
	}
	
		else if(ch=='-')
	{
		cout<<"SUBSTRACTION"<<endl;
		diff();
	}
	
		else if(ch=='*')
	{
		cout<<"MULTIPLICATION"<<endl;
		multiply();
	}
	
		else if(ch=='/')
	{
		cout<<"DIVISION"<<endl;
		division();
	}
	
	return(0);
}

int sum()
{
	int x,y,sum;
	printf("\tInput the two numbers:");
	scanf("%d %d",&x,&y);
	sum=x+y;
	printf("The sum of %d and %d is %d: \n",x,y,sum);
}

int diff()
{
	int x,y,diff;
	printf("\tInput the two numbers:");
	scanf("%d %d",&x,&y);
	diff=x-y;
	printf("The difference of %d and %d is %d: \n",x,y,diff);
}

int multiply()
{
	int x,y,product;
	printf("\tInput the two numbers:");
	scanf("%d %d",&x,&y);
	product=x*y;
	printf("The difference of %d and %d is %d: \n",x,y,product);
}

float division()
{
	float x,y,divide;
	printf("\tInput the two numbers:");
	scanf("%f %f",&x,&y);
	divide=x/y;
	printf("The division of %f and %f is %f: \n",x,y,divide);
}
