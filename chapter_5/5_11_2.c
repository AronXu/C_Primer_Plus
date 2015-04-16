#include<stdio.h>
#define INCRESE 10

int main(void)
{
    int num;
    int i;   

    printf("Please type a number:\t");
    while(!scanf("%d",&num))              	//to check whether type right or not
    {
        printf("*************************\n");
        printf("input error!\n");
        printf("Please type a number:\t");
        getchar(); 				// capture the fail character
    }
    for(i=0;i<=INCRESE;i++)
    {
        printf("%d ",num+i);
    }    
    printf("\n");

    return 0;
}
