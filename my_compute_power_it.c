/*
** EPITECH PROJECT, 2017
** my_compute_power_it.c
** File description:
** 
*/

int my_compute_power_it(int nb, int p)
{
	int k = 1;
	if (nb == 0) {
		return(1);
	}

	if (p < 0) {
		return(0);
	}

	while (k < p) {
		nb = nb * nb;
		k = k + 1;
	}
	return(nb);
}
