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
		prefix.c

LIBFT_OBJ =	ft_atoi.o		\
			ft_bzero.o		\
			ft_isalnum.o	\
			ft_isalpha.o	\
			ft_isascii.o	\
			ft_isdigit.o	\
			ft_isprint.o	\
			ft_itoa.o		\
			ft_lstadd.o		\
			ft_lstdel.o		\
			ft_lstdelone.o	\
			ft_lstiter.o	\
			ft_lstmap.o		\
			ft_lstnew.o		\
			ft_memalloc.o	\
			ft_memccpy.o	\
			ft_memchr.o		\
			ft_memcmp.o		\
			ft_memcpy.o		\
			ft_memdel.o		\
			ft_memmove.o	\
			ft_memset.o		\
			ft_putchar.o	\
			ft_putchar_fd.o	\
			ft_putendl.o	\
			ft_putendl_fd.o	\
			ft_putnbr.o		\
			ft_putnbr_fd.o	\
			ft_putstr.o		\
			ft_putwchar.o	\
			ft_putstr_fd.o	\
			ft_strcat.o		\
			ft_strchr.o		\
			ft_strclr.o		\
			ft_strcmp.o		\
			ft_strcpy.o		\
			ft_strdel.o		\
			ft_strdup.o		\
			ft_strequ.o		\
			ft_striter.o	\
			ft_striteri.o	\
			ft_strjoin.o	\
			ft_strlcat.o	\
			ft_strlen.o		\
			ft_strmap.o		\
			ft_strmapi.o	\
			ft_strncat.o	\
			ft_strncmp.o	\
			ft_strncpy.o	\
			ft_strnequ.o	\
			ft_strnew.o		\
			ft_strnstr.o	\
			ft_strrchr.o	\
			ft_strsplit.o	\
			ft_strstr.o		\
			ft_strsub.o		\
			ft_strtrim.o	\
			ft_tolower.o	\
			ft_toupper.o	\
			ft_wstrlen.o

OBJ = $(SRC:.c=.o)
LIBFT_OBJ_PATH = $(addprefix libft/, $(LIBFT_OBJ))
CC = clang
FLAGS = -Wall -Wextra -Werror

#COMPILED =

all : $(NAME)

$(NAME) :
	make -C libft/
	$(CC) -c $(SRC) -I includes -I libft/includes
	ar rc $(NAME) $(OBJ) $(LIBFT_OBJ_PATH) libft/libft.a
	$(CC) $(DEBUG_SRC) $(SRC) -I libft/includes -I includes/ libft/libft.a -o build/a.out

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
