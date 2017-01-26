NAME = printf
SRC =	try/main_test_proto.c							\
		ft_printf.c										\
		parsing.c										\
		parsing_cast.c									\
		compute_conv.c									\
		casting.c										\
		ft_itoa_printf.c								\
		parsing_converter.c								\
		reset_print.c


CC = clang

$(NAME) : all


all :
	make -C libft/
	$(CC) $(SRC) -I libft/includes -I includes/ libft/libft.a -o build/a.out

clean :

fclean :

re :