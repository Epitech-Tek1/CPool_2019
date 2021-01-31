/*
** EPITECH PROJECT, 2019
** my_print_comb
** File description:
** c
*/

int algo_01(int a, int b, int c)
{
    for (c = '1'; c < 58; c++) {
        if (c < b && c < b) {
            my_putchar(c);
            my_putchar(b);
            my_putchar(a);
            if (c != '7') {
                my_putchar(',');
                my_putchar(' ');
            }
        }
    }
}

int algo_02(int a, int b, int c)
{
    if (b < a && b > c) {
        my_putchar(c);
        my_putchar(b);
        my_putchar(a);
        my_putchar(',');
        my_putchar(' ');
        if (b == '8') {
            algo_01(a, b, c);
        }
    }
}

int algo_03(int a, int b, int c)
{
    if (a == '9') {
        for(b = '2'; b < 57; b++) {
            algo_02(a, b, c);
        }
    }
}

int my_print_comb(void)
{
    int b = '1';
    int c = '0';
    for (int a = '2'; a < 58; a++) {
        if (a > b && b > c) {
            my_putchar(c);
            my_putchar(b);
            my_putchar(a);
            my_putchar(',');
            my_putchar(' ');
            algo_03(a, b, c);
        }
    }
}
