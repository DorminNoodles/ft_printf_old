/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 13:58:10 by lchety            #+#    #+#             */
/*   Updated: 2017/02/10 15:03:11 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define TRUE 1
# define FALSE 0
# define STRING_CONV "sSpdDioOuUxXcC"

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

/*
#ifndef DEBUG
#warning Only Debug builds are supported
#endif
*/

typedef	char	bool;


typedef struct s_print
{
	char *format;
	char *end;
	char *conv_type;
	char *out;

	bool conv;
	bool conv_d;
	bool conv_ld;
	bool conv_i;
	bool conv_o;
	bool conv_c;
	bool conv_lc;
	bool conv_s;
	bool conv_ls;
	bool conv_x;
	bool conv_lx;
	bool conv_p;

	bool cast_h;
	bool cast_hh;
	bool cast_ll;
	bool cast_l;
	bool cast_z;
	bool cast_j;
	bool flag_0;
	bool htag;
	bool justify;
	int base_size;
	int width;

	bool pitch;
	int pitch_nb;
	int pitch_dollar;
	int pitch_star;

	size_t ret_nb;

}			t_print;



int			ft_printf(const char *format, ...);
int			parsing_format(const char *format, t_print *dna);
char		*flags_parsing(const char *format);
void		*parsing_func_collection();
void		*flags_apply_hashtag();
int			parsing_distributor(const char* format);
char		*parsing_converter(const char *format, t_print *dna);
int			parsing_dispatch(const char *format, t_print *dna);
void		compute_conv(t_print *dna, va_list ap);
void		compute_conv_lc (va_list ap);
char		*ft_itoa_base(unsigned long long n, int base);
void		compute_width(t_print *dna);
void		compute_htag(t_print *dna);
void		reset_print(t_print *dna);
void		parsing_htag(const char	*format, t_print *dna, char *end);
void		parsing_justify(const char *format, t_print *dna, char *end);
void		parsing_pitch(const char *format, t_print *dna, char *end);
void		parsing_cast(const char *format, t_print *dna, char *end);
void		parsing_hh(const char *format, t_print *dna, char *end);
intmax_t	exec_cast_signed(t_print *dna, va_list ap);
intmax_t	exec_cast_unsigned(t_print *dna, va_list ap);
char		*ft_itoa_printf(uintmax_t n, int base);
//wchar_t		utf8_enc(wchar_t c);
size_t		count_unicode(wchar_t *str);
char		*ft_itoa_signed(long long n);
intmax_t	cast_ld(t_print *dna, va_list ap);
void		ft_putstr_buff(char const *s);
void		compute_pitch(t_print *dna, va_list ap, bool cut);
void 		compute_pitch_nb(t_print *dna, bool cut);
void		compute_pitch_star(t_print *dna, va_list ap, bool cut);

//char *find_end(const char *format);
#endif
