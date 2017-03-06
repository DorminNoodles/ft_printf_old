NAME = libftprintf.a
TEST_SRCS = try/main_test_proto.c
LIB
NAME_SRCS =	ft_printf.c										\
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
			flags.c

SRCS = $(addprefix srcs/, $(SRC))
OBJS = $(SRC:.c=.o)
LIBFT_OBJ_PATH = $(addprefix libft/, $(LIBFT_OBJ))
CC = clang
#FLAGS = -fsanitize=address

#COMPILED =

all : $(NAME)

$(NAME) :
	make fclean -C libft/ && make re -C libft/
	$(CC) -c $()
	#$(CC) -c $(SRC_PATH) -I includes
	#ar rc $(NAME) $(OBJ)
	#$(CC) $(DEBUG_SRC) $(SRC_PATH) -I includes -I libftprint.a -o build/a.out
	#$(CC) -c
	#$(CC) -c $(SRC) -I includes -I libft/includes


	#make -C libft/
	#ar rc $(NAME) $(OBJ) $(LIBFT_OBJ_PATH) libft/libft.a
	#$(CC) -g3 $(DEBUG_SRC) $(SRC) -I libft/includes -I includes/  libft/libft.a -o build/a.out

clean :
	rm -f $(OBJ)
	make clean -C libft/

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all, clean, fclean, re
