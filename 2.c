#include<stdio.h>
int ab(int a);
int main()
{
	int a;
	printf("숫자입력");
	scanf("%d",&a);
	
	
	printf("입력한숫자+10::%d",ab(a)); 
	return 0;
}
int ab(int a)
{
	return a+10;	
}
