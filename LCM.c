#include<stdio.h>
int f_lcm(int,int);
int main()
{
	int a,b,result;
	printf("Enter the number:");
	scanf("%d%d",&a,&b);
	result=f_lcm(a,b);
	printf("LCM of %d and %d = %d\n",a,b,result);
	return 0;
}
int f_lcm(int a ,int b)
{
	static int temp=1;
	if (temp%a==0 && temp%b==0)
	{
		return temp;
	}
	temp++;
	f_lcm(a,b);
	return temp;
}
