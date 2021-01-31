##
## EPITECH PROJECT, 2019
## Makefile rush2
## File description:
## No file there, just an epitech header example
##

SRC	=	lib/my/my_compute_square_root.c		\
		lib/my/my_getnbr.c					\
		lib/my/my_isalpha.c					\
		lib/my/my_isneg.c					\
		lib/my/my_is_prime.c				\
		lib/my/my_lowercase.c				\
		lib/my/my_print_params.c			\
		lib/my/my_print_prime_sup.c			\
		lib/my/my_putchar.c					\
		lib/my/my_put_nbr.c					\
		lib/my/my_putstr.c					\
		lib/my/my_revstr.c					\
		lib/my/my_showmem.c					\
		lib/my/my_showstr.c					\
		lib/my/my_show_word_array.c			\
		lib/my/my_sort_int_array.c			\
		lib/my/my_strcapitalize.c			\
		lib/my/my_strcat.c					\
		lib/my/my_strcmp.c					\
		lib/my/my_strcpy.c					\
		lib/my/my_str_islower.c				\
		lib/my/my_str_isnum.c				\
		lib/my/my_str_isprintable.c			\
		lib/my/my_str_isupper.c				\
		lib/my/my_strlen.c					\
		lib/my/my_strncat.c					\
		lib/my/my_strncmp.c					\
		lib/my/my_strncpy.c					\
		lib/my/my_strstr.c					\
		lib/my/my_strupcase.c				\
		lib/my/my_swap.c					\
		lib/my/main.c						\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

move: $(NAME)
	@cp libmy.a lib/

$(NAME):	$(OBJ)
	@gcc -o $(NAME) $(OBJ)

clean:
	@rm -f	$(OBJ) $(NAME)

fclean:	clean
	@rm -f    *.o
