#include<stdio.h>
int ab(int a);
int main()
{
	int a;
	printf("�����Է�");
	scanf("%d",&a);
	
	
	printf("�Է��Ѽ���+10::%d",ab(a)); 
	return 0;
}
int ab(int a)
{
	return a+10;	
}
