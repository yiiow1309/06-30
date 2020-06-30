#include<stdio.h>
void printArray(int arr[], int count);

int main(void)
{
	int arr[5]={1,2,3,4,5};
	
	printArray(arr, sizeof(arr) / sizeof(int));
	//printf("%d",sizeof(int));
	//printf("%d",sizeof(arr));
	
	return 0;
	
}

void printArray(int arr[], int count)
{ 
	int i;
	for(i = 0;i < count; i++)
    {
        printf("%d ", arr[i]);
    }
}
