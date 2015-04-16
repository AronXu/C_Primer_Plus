#include<stdio.h>
#include<float.h>

int main(void)
{
    double d_Test=1.0/3.0;
    float  f_Test=1.0/3.0;

    printf("result of double: %.4lf  %.12lf  %.16lf\n",d_Test,d_Test,d_Test);
    printf("result of float : %.4f   %.12f   %.16f\n",f_Test,f_Test,f_Test);
    printf("Value of FLT_DIG: %d\n", FLT_DIG);
    printf("Value of DBL_DIG: %d\n", DBL_DIG);      
    
    return 0;
}
