/*
** EPITECH PROJECT, 2019
** my_compute_factorial_rec
** File description:
**
*/

int my_compute_factorial_rec(int nb)
{
    int c = nb;
    
    if (nb < 0 || nb >= 13)
        return (0);
    if (nb == 0 || nb == 1)
        return (1);
    c = c * my_compute_factorial_rec(--nb);
    printf("%i", c);
    return (c);
}

int main(void)
{
    my_compute_factorial_rec(5);
}
