#include<stdio.h>
#include "my_math.h"

long my_pow(long num,int root);

int main()
{
	int num=0;
	printf("int:%d,float:%d\n",sizeof(int),sizeof(float));
	printf("int:%d,float:%f\n",my_pow(2,sizeof(int)*8-1)-1,my_pow(2,sizeof(float)*8)-1);
	num=my_pow(2,sizeof(int)*8-1)-1;
	printf("num=:%d , num+1=%d\n",num,num+1);
	return 0;
}

/*
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
*/
