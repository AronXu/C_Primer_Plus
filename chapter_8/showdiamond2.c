#include<stdio.h>

void display( int lines);

int main()
{
   int lines;
   printf("Please type lines' number of Diamond:\t");
   while(1!=scanf("%d",&lines))						// to make sure the user type a number. 
   {
       printf("You type a wrong value!\n");
       printf("Please type lines's of Diamond:\t");
       getchar();
   }
   display(lines);
   
   return 0;
}

void display( int lines)
{
    int row,col;                                       
    int star_num;
    
    for(row = 1,star_num = 1; row <= lines ; row++)          	 	// print each line of diamond
    {
        if(0 != lines%2)						// The case of the lines'value belongs to the odd number
        {
            if(row < (lines-1)/2+1)
                star_num=2*row-1;
            else
                star_num=2*(lines-row)+1;      
	}
        else								// The case of the lines'value belongs to the even number.
        {
            if(row < lines/2) 
                star_num=2*row-1;
            else if(row <= lines/2+1)
                star_num=lines-1;
            else
                star_num=2*(lines-row)+1;  
        }
        for(col = 1;col <= (lines-star_num)/2+star_num; col++)          // print each lines' stars and spaces 
        {
            if(col <= (lines-star_num)/2)
               putchar(' ');
	    else
               putchar('*');
        }
        putchar('\n');
    }
}
