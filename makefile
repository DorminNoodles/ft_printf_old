NAME = libftprintf.a
DEBUG_SRC = try/main_test_proto.c
SRC =	ft_printf.c										\
		parsing.c										\
		parsing_cast.c									\
		compute_conv.c									\
		casting.c										\
		ft_itoa_printf.c								\
		parsing_converter.c								\
		reset_print.c									\
		unicode.c										\
		ft_itoa_signed.c								\
		ft_putstr_buff.c								\
		pitch.c											\
		prefix.c										\
		width.c											\
		set_length.c									\
		flags.c											\
		ft_isdigit.c									\
		ft_memalloc.c									\
		ft_memcpy.c										\
		ft_memset.c										\
		ft_putchar.c									\
		ft_putstr.c										\
		ft_putwchar.c									\
		ft_strchr.c										\
		ft_strlen.c										\
		ft_strncpy.c									\
		ft_strnew.c										\
		ft_toupper.c									\
		ft_wstrlen.c


OBJ = $(SRC:.c=.o)
LIBFT_OBJ_PATH = $(addprefix libft/, $(LIBFT_OBJ))
CC = clang
#FLAGS = -fsanitize=address

#COMPILED =

all : $(NAME)

$(NAME) :
	$(CC) -c $(SRC) -I includes
	ar rc $(NAME) $(OBJ)
	$(CC) $(DEBUG_SRC) $(SRC) -I includes -I libftprint.a -o build/a.out
	#$(CC) -c
	#$(CC) -c $(SRC) -I includes -I libft/includes


	#make -C libft/
	#ar rc $(NAME) $(OBJ) $(LIBFT_OBJ_PATH) libft/libft.a
	#$(CC) -g3 $(DEBUG_SRC) $(SRC) -I libft/includes -I includes/  libft/libft.a -o build/a.out

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
