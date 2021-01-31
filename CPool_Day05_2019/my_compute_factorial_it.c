/*
** EPITECH PROJECT, 2019
** my_compute_factorial_it
** File description:
** 
*/

int my_compute_factorial_it(int nb)
{
    int c = nb;

    if (nb < 0 || 13 <= nb)
        return (0);
    if (nb == 0 || nb == 1)
        return (1);
    for (int i = 1; i < c; ++i) {
        nb = nb * i;
    }
    printf("%i", nb);
    return (nb);
}

int main(void)
{
    my_compute_factorial_it(5);
}
