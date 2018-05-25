/*
** EPITECH PROJECT, 2017
** my_compute_factorial_it
** File description:
** 
*/

int my_compute_factorial_it(int nb)
{
	int	b = nb;
	int	a = 1;

	if (nb < 0 || nb > 13) {
		return(0);
	}
	
	if (nb == 0) {
		return(1);
	}

	if (nb == 1 || b == 1) {
		return(1);
	}
	
	while (a < b) {
		nb = nb * (b - a);
		a = a + 1;
	}
	
	return(nb);
}
