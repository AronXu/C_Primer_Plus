#include<stdio.h>

long my_pow(long num, int root);

int main()
{
	long toes;
	toes=10;

	printf("%d %d %d\n",toes,toes+toes,my_pow(toes,2));
	
	return 0;
}

/*my_pow is used to power number. In near future we can make it can work properly when root is float*/
long my_pow(long num,int root)	
{
	int i=0;		
	long result=1;
	
	for(i=0;i<root;i++)
	{
		result*=num;
	}
	
	return result;
}	
