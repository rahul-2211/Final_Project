//generate possible cobination of words using number
//SET3_Q1
#include<stdio.h>
#include<string.h>

const char pL[10][4]={"","","ABC","DEF","GHI","JKL","MNO","PRS","TUV","WXY"};

void pW(int num[],int crr,char op[],int n)
{
	
	if(crr==n)
		{
		 printf("%s\t",op);
		 return ;
		}
		for(int i=0;i<strlen(pL[num[crr]]);i++){
			op[crr]=pL[num[crr]][i];
		pW(num,crr+1,op,n);
		if(num[crr]==0 || num[crr]==1)
			return ;
		}

}

void pWs(int num[],int n)
{
	char ans[n+1];
	ans[n]='\0';
	pW(num,0,ans,n);

}


int main()
{
	int digits[7];
	printf("enter digits without hyphen and with space:\n");
	for(int i=0;i<7;i++)
	{
		scanf("%d",&digits[i]);
	}
	int n= sizeof(digits)/sizeof(digits[0]);
	pWs(digits,n);
}
