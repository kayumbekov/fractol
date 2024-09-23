#ifndef FRACTOL_H
# define FRACTOL_H

# include <stdio.h> //TODO debugging
# include <stdlib.h> //malloc free
# include <unistd.h> //write
# include <math.h>
# include "minilibx-linux/mlx.h"


#define ERROR_MESSAGE "Please enter \n\t\"./fractol mandelbrot\" or \n\t\"./fractol julia <value_1> <value_2>\"\n"












//Strings utils ***

int ft_strncmp(char *s1, char *s2, int n);
void	putstr_fd(char *s, int fd);



#endif
