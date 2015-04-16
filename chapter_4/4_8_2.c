#include<stdio.h>
#include<string.h>

int main(void)
{
  char c_FirstName[20];
  char c_SecondName[20];
  char c_FullName[40];
  int  i_NameLen1,i_NameLen2;
  printf("please enter your first name:  ");
  scanf("%s",c_FirstName);
  printf("please enter your sencond name:  ");
  scanf("%s",c_SecondName);

  strcat(c_FullName,c_FirstName);
  strcat(c_FullName," ");
  strcat(c_FullName,c_SecondName);

  printf("******test 4_8_2******\n\n");
  printf("\"%s\"\n",c_FullName);
  printf("\"%20s\"\n",c_FullName);
  printf("\"%-20s\"\n",c_FullName);
  printf("   %s\n\n\n",c_FullName);  
  
  printf("******test 4_8_5******\n\n");
  i_NameLen1=strlen(c_FirstName);
  i_NameLen2=strlen(c_SecondName);
  printf("%10s %10s\n",c_FirstName,c_SecondName);
  printf("%10d %10d\n\n",i_NameLen1,i_NameLen2);

  printf("%-10s %-10s\n",c_FirstName,c_SecondName);
  printf("%-10d %-10d\n",i_NameLen1,i_NameLen2);
  return 0;  
}
