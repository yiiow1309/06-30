#include<stdio.h>
void po(int *a,int *b);
int main(void)
{
	int a=10;
	int b=20;
	printf("a:%d  b:%d\n",a,b);
	po(&a,&b);
	printf("�����ͷ� ���ٿ���\n");
	printf("a:%d b:%d",a,b);
}
void po(int *a,int *b)
{
	*a=*a+10;
	*b=*b+20;
}
