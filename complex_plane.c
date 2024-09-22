#include <stdio.h>

typedef struct s_complex
{
    //      x
    double real;
    //      y
    double i;

}       t_complex;


int main ()
{
    t_complex   z;
    //          point
    t_complex   c;
    double      tmp_real;


    z.real = 0;
    z.i = 0;

    c.real = 0.25;
    c.i = 0.4;

    for(int i = 0; i < 42; i++)
    {
        //General formula 
        //z  = z^2 + c
        //x^2 + 2xyi - y^2 = (x^2 - y^2)#real + 2xyi#imaginary
        tmp_real = (z.real * z.real) - (z.i * z.i);
        
        z.i = 2 * z.real * z.i;
        
        z.real = tmp_real;
        
        //Adding the c value
        z.real =  z.real + c.real;
        z.i = z.i + c.i;


        printf("iteration m -> %d real %f imaginary %f \n", i, z.real, z.i);
    }
}