///menu-driven calculator 
//SET3_Q2

#include<stdio.h>

void addition(double n1,double n2)
{
	double res;
	res=n1+n2;
	printf("addition is: %lf+%lf=%lf\n",n1,n2,res);

}

void subtraction(double n1,double n2)
{
	double res;
	res=n1-n2;
	printf("subtraction is: %lf-%lf=%lf\n",n1,n2,res);

}

void multiplication(double n1,double n2)
{
	double res;
	res=n1*n2;
	printf("multiplication is: %lf*%lf=%lf\n",n1,n2,res);

}

void division(double n1,double n2)
{
	double res;
	res=n1/n2;
	printf("division is: %lf/%lf=%lf\n",n1,n2,res);

}


int main()
{
	double n1,n2;
	int inf=1;

	while(inf>=1 && inf<=4)
	{
				printf("\n1.addition\n2.subtraction\n3.multiplication\n4.division\n5.Quit\n");
		printf("enter your choice:\n");
		scanf("%d",&inf);

		if(inf == 5)
			return 0;
		printf("enter n1 and n2: \n");
		scanf("%lf %lf",&n1,&n2);


	
		void(*fun[4])(double,double)={&addition,&subtraction,&multiplication,&division};

		(*fun[inf-1])(n1,n2);
		return 0;
}
}


