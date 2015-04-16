#include<stdio.h>

void praise();
void no_doubt();

int main()
{
	int i=0;

	for(i=0;i<3;i++)	// use 3 times loops to run praise.
	{
		praise();
	}
	no_doubt();
	return 0;
}

void praise()
{
	printf("For he is a jolly good fellow!\n");
}
void no_doubt()
{
	printf("Which nobody can deny!\n");
}


