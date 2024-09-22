#include "fractol.h"



int main(int argc, char* argv[])
{
    if(argc == 2 && !ft_strncmp(argv[1], "mandelbrot", 10)
    || argc == 4 && !ft_strncmp(argv[1], "julia", 5))
{
    //Prompt correct, kick off the application 


}
else
{
    putstr_fd(ERROR_MESSAGE, STDERR_FILENO); //TODO
    exit(EXIT_FAILURE);

}


}