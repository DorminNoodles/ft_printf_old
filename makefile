NAME = libftprintf.a
TEST_SRC = try/main_test_proto.c
#TEST_SRC = main_c.c
NAME_SRCS =	ft_printf.c										\
			parsing.c										\
			parsing_cast.c									\
			convert.c										\
			casting.c										\
			ft_itoa_base.c									\
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
			parsing_flags.c									\
			parsing_pitch.c									\
			conv_s.c										\
			conv_d.c										\
			conv_c.c										\
			conv_o.c										\
			conv_x.c										\
			conv_u.c										\
			conv_b.c										\
			conv_f.c										\
			conv_p.c										\
			color.c


LIBFT_SRCS_NAME =	ft_atoi.c   		\
					ft_bzero.c			\
					ft_isalnum.c		\
					ft_isalpha.c		\
					ft_isascii.c		\
					ft_isdigit.c		\
					ft_isprint.c		\
					ft_itoa.c			\
					ft_lstadd.c			\
					ft_lstdel.c			\
					ft_lstdelone.c		\
					ft_lstiter.c		\
					ft_lstmap.c			\
					ft_lstnew.c			\
					ft_memalloc.c		\
					ft_memccpy.c		\
					ft_memchr.c			\
					ft_memcmp.c			\
					ft_memcpy.c			\
					ft_memdel.c			\
					ft_memmove.c		\
					ft_memset.c			\
					ft_putchar.c		\
					ft_putchar_fd.c		\
					ft_putendl.c		\
					ft_putendl_fd.c		\
					ft_putnbr.c	\
					ft_putnbr_fd.c	\
					ft_putstr.c	\
					ft_putstr_fd.c	\
					ft_putwchar.c	\
					ft_strcat.c		\
					ft_strchr.c		\
					ft_strclr.c		\
					ft_strcmp.c		\
					ft_strcpy.c		\
					ft_strdel.c		\
					ft_strdup.c		\
					ft_strequ.c		\
					ft_striter.c	\
					ft_striteri.c	\
					ft_strjoin.c	\
					ft_strlcat.c	\
					ft_strlen.c		\
					ft_strmap.c		\
					ft_strmapi.c	\
					ft_strncat.c	\
					ft_strncmp.c	\
					ft_strncpy.c	\
					ft_strnequ.c	\
					ft_strnew.c		\
					ft_strnstr.c	\
					ft_strrchr.c	\
					ft_strsplit.c	\
					ft_strstr.c		\
					ft_strsub.c		\
					ft_strtrim.c	\
					ft_tolower.c	\
					ft_toupper.c	\
					ft_wstrlen.c


SRCS = $(addprefix srcs/,$(NAME_SRCS))
OBJS = $(NAME_SRCS:.c=.o)
LIBFT_SRCS = $(addprefix libft/,$(LIBFT_SRCS_NAME))
LIBFT_OBJS = $(LIBFT_SRCS:.c=.o)
CC = clang
HEADER_LIB = libft/includes/libft.h

all : $(NAME)

$(NAME) : $(OBJS) $(HEADER_LIB)
	make -C libft/ re
	ar rc $(NAME) $(OBJS) $(LIBFT_OBJS)
	ranlib $(NAME)

%.o : srcs/%.c includes/ft_printf.h
	$(CC) -c $< -o $@ -I includes -I libft/includes

clean :
	rm -f $(OBJS)
	make -C libft/ clean

fclean : clean
	rm -f $(NAME)
	make -C libft/ fclean

re : fclean all

test : $(NAME)
	$(CC) $(TEST_SRC) -I includes -I libft/includes $(NAME) -o build/debug.out

.PHONY : all, clean, fclean, test, re,
