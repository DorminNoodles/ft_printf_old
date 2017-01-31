/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 13:58:10 by lchety            #+#    #+#             */
/*   Updated: 2017/01/31 23:48:13 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define TRUE 1
# define FALSE 0
# define STRING_CONV "sSpdDioOuUxXcC"

#include <stdarg.h>
#include <stdio.h>
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
	bool conv_i;
	bool conv_c;
	bool conv_lc;
	bool conv_s;
	bool conv_ls;
	bool conv_x;
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
	int pitch_nb;
	int pitch_dollar;
	int pitch_star;


}			t_print;



int		ft_printf(const char *format, ...);
int		parsing_format(const char *format, t_print *conv_info);
char	*flags_parsing(const char *format);
void	*parsing_func_collection();
void	*flags_apply_hashtag();
int		parsing_distributor(const char* format);
char	*parsing_converter(const char *format, t_print *conv_info);
int		parsing_dispatch(const char *format, t_print *conv_info);
void	compute_conv(t_print *conv_info, va_list ap);
void		compute_conv_lc (va_list ap);
char		*ft_itoa_base(unsigned long long n, int base);
void		compute_width(t_print *conv_info);
void		compute_htag(t_print *conv_info);
void		reset_print(t_print *conv_info);
void		parsing_htag(const char	*format, t_print *conv_info, char *end);
void		parsing_justify(const char *format, t_print *conv_info, char *end);
void		parsing_pitch(const char *format, t_print *conv_info, char *end);
void		parsing_cast(const char *format, t_print *conv_info, char *end);
void		parsing_hh(const char *format, t_print *conv_info, char *end);
intmax_t	exec_cast_signed(t_print *conv_info, va_list ap);
intmax_t	exec_cast_unsigned(t_print *conv_info, va_list ap);
char		*ft_itoa_printf(intmax_t n, int base);
wchar_t		utf8_enc(wchar_t c);

//char *find_end(const char *format);
#endif
