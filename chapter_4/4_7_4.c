#include<stdio.h>

#define B "booboo"
#define X 10

int main(void)
{
  int xp;
  int age;
  char name[40];
  printf("Please inputs your first name:	");
  scanf("%s",name);
  printf("%s,what's your age?   ",name);
  scanf("%d",&age);
  xp=age+X;
  printf("That's a %s! You must be at least %d.\n",B,xp);
  
  return 0;
}
