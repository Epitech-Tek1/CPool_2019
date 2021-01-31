/*
** EPITECH PROJECT, 2019
** my_compute_power_it
** File description:
**
*/

int my_compute_power_it(int nb, int p)
{
    int c = nb;
    
    for (int i = 0; i < p; ++i) {
        c = c * nb;
    }
    return (c);
}
