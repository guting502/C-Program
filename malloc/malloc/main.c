#include<stdio.h>
#include<stdlib.h>
int main()
{

	int * num= (int *)malloc(sizeof(int) * 5);

	double *nums = (double  *)malloc(sizeof(double ) * 5);

	for (int i = 0; i <= 5; i++)
	{
		printf("�������%d��Ԫ�أ�",i+1);
		scanf_s("%d",num + i);
	}

	printf("����Ԫ��Ϊ��\n");
	for (int i = 0; i <= 5; i++)
	{
		printf("%d\t",* (num+i));
	
	}
	//free(num);
	//num = NULL;

	
	return 0;
}