#include<stdio.h>
#include<stdbool.h>

int get_int(void);
bool bad_limits(int begin, int end, int low, int high);
double sum_squares(int a, int b);
void print_star(int n);
#define STAR 50

int main()
{
    const int MIN = -1000;
    const int MAX = 1000;
    int start, stop;
    double answer;

    printf("This program computes the sum of the squares of "
	   "integers in a range.\n The lower bound should not "
           "be less than %d and \nthe upper bound should not "
           "be more than %d.\nEnter the Limits (enter 0 for"
           "both limits to quit):\nlower limit: ",MIN,MAX);
    start = get_int();
    printf("upper limit: ");
    stop = get_int();
    while(start != 0 || stop != 0)
    {
        if(bad_limits(start,stop,MIN,MAX))
        {
	    printf("Please try again\n");
        }
      	else
      	{
	    answer = sum_squares(start, stop);
   	    printf("The sum of the squares of the integers from ");
      	    printf("%d to %d is %e\n %f\n", start, stop, answer, answer);
	}
   	print_star(STAR);
  	printf("Enter the limits (Enter 0 for both limits to quit): \n");
  	printf("lower limit: ");
  	start = get_int();
     	printf("upper limit: ");
 	stop = get_int();
    }
    printf("Done!\n");
    return 0;
}



int get_int(void)
{
    int input;
    char ch;

    while(1 != scanf("%d",&input))   		// When we type 70ab, scanf will get 70 and then let ab alone.
    {						// At next loop, no matter we use scanf or getchar, ab will be 
	while((ch = getchar()) != '\n')		// used, That problem make this program not good.
	    putchar(ch);
    printf(" is not an integer.\n Please enter an ");
    printf("integer value, such as 25, -178, or 3: ");
    }

    return input;
}

double sum_squares(int a ,int b)
{
    double total = 0;
    int i;

    for(i = a; i <= b; i++)
   	total += i*i;
   
    return total;
}

bool bad_limits(int begin, int end, int low, int high)
{
    bool not_good = false;
    
    if(begin > end)
    {
    	printf("%d isn't smaller than %d.\n", begin, end);
  	not_good = true;
    }
    if(begin < low || end < low)
    {
 	printf("values must be %d or greater.\n",low);
    	not_good = true;
    }
    if(begin > high || end > high)
    {
	printf("Values must be %d or less.\n",high);
  	not_good = true;
    }

    return not_good;
}

void print_star(int n)
{
    int i;
    for(i=0;i<n;i++)
    	putchar('*');
    putchar('\n');
}
















