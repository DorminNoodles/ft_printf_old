/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 17:10:51 by lchety            #+#    #+#             */
/*   Updated: 2017/03/30 12:02:46 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define TRUE 1
# define FALSE 0
# define STRING_CONV "sSpdDioOuUxXcC%beEfF"
# define STRING_FLAG ".hzjl0123456789 +-#*"

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include <stdlib.h>
# include "libft.h"

# define BLACK "\x1b[30m"
# define RED "\x1b[31m"
# define GREEN "\x1b[32m"
# define YELLOW "\x1b[33m"
# define BLUE "\x1b[34m"
# define MAGENTA "\x1b[35m"
# define CYAN "\x1b[36m"
# define WHITE "\x1b[37m"
# define NOCOLOR "\x1b[0m"

typedef	char	t_bool;

typedef struct	s_print
{
	char	*format;
	char	*end;
	char	*out;
	t_bool	conv;
	t_bool	conv_s;
	t_bool	conv_ls;
	t_bool	conv_p;
	t_bool	conv_d;
	t_bool	conv_ld;
	t_bool	conv_i;
	t_bool	conv_o;
	t_bool	conv_lo;
	t_bool	conv_u;
	t_bool	conv_lu;
	t_bool	conv_c;
	t_bool	conv_lc;
	t_bool	conv_x;
	t_bool	conv_lx;
	t_bool	conv_mod;
	t_bool	conv_b;
	t_bool	conv_e;
	t_bool	conv_f;
	t_bool	conv_null;
	t_bool	cast_h;
	t_bool	cast_hh;
	t_bool	cast_ll;
	t_bool	cast_l;
	t_bool	cast_z;
	t_bool	cast_j;
	t_bool	flag_0;
	t_bool	flag_blk;
	t_bool	htag;
	t_bool	justify;
	t_bool	pre_min;
	t_bool	pre_pls;
	int		base_size;
	int		width;
	char	*width_pos;
	t_bool	width_star;
	t_bool	pitch;
	int		pitch_nb;
	int		pitch_dollar;
	int		pitch_star;
	size_t	ret_nb;
}				t_print;

int				ft_printf(const char *format, ...);
int				parsing_format(const char *format, t_print *dna, va_list ap);
char			*parsing_converter(const char *format, t_print *dna);
int				parsing_dispatch(const char *format, t_print *dna, va_list ap);
void			parsing_pitch(const char *fmt, t_print *dna, char *end,
				va_list ap);
void			parsing_cast(const char *format, t_print *dna, char *end);
void			parsing_flags(const char *fmt, t_print *dna, char *end);
void			parsing_star(const char *fmt, t_print *dna, char *end,
				va_list ap);
void			silent_flags(t_print *dna);
void			convert(t_print *dna, va_list ap);
void			conv_s(t_print *dna, va_list ap);
void			conv_ls(t_print *dna, va_list ap);
void			conv_c (t_print *dna, va_list ap);
void			conv_lc (t_print *dna, va_list ap);
void			conv_d(t_print *dna, va_list ap);
void			conv_ld(t_print *dna, va_list ap);
void			conv_o(t_print *dna, va_list ap);
void			conv_lo(t_print *dna, va_list ap);
void			conv_x(t_print *dna, va_list ap);
void			conv_u(t_print *dna, va_list ap);
void			conv_lu(t_print *dna, va_list ap);
void			conv_b(t_print *dna, va_list ap);
void			conv_p(t_print *dna, va_list ap);
void			conv_f(t_print *dna, va_list ap);
char			*ft_itoa_base(uintmax_t n, int base);
char			*do_pitch(t_print *dna, t_bool cut);
void			reset_print(t_print *dna);
intmax_t		exec_cast_signed(t_print *dna, va_list ap);
intmax_t		exec_cast_unsigned(t_print *dna, va_list ap);
char			*ft_itoa_base(uintmax_t n, int base);
size_t			count_unicode(wchar_t *str);
void			ft_putstr_buff(char const *s);
size_t			prefix_count(t_print *dna);
char			*get_prefix(t_print *dna);
char			*set_length_digit(t_print *dna);
char			*set_length_char(t_print *dna);
void			prefix_lossless(t_print *dna);
int				prefix_lossy(t_print *dna);
char			*width_ectoplasme(t_print *dna, t_bool prefix_in);
size_t			ft_wcharlen(wchar_t c);
char			*flag_blk(t_print *dna);
void			set_length_wchar(t_print *dna);
void			pitch_ls(t_print *dna);
void			width_ls(t_print *dna);
void			ft_putwchar(wchar_t c);
char			*flag_blk_lossy(t_print *dna);
intmax_t		cast_unsigned_wide(t_print *dna, va_list ap);
void			print_null(t_print *dna);
int				pars_color(const char *fmt);

#endif
