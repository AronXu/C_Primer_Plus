#include<stdio.h>

int main()
{
	int i=0,j=0;
	int times;

	printf("inputs times : ");
	scanf("%d",&times);

	for(i=0;i<times;i++)
	{
		for(j=0;j<times-i;j++)
		{
			printf("Hello!");
		}
		printf("\n");
	}

	return 0;
}
