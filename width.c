/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 15:12:02 by lchety            #+#    #+#             */
/*   Updated: 2017/02/17 21:00:44 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
static char	*add_prefix(char **str, t_print *dna)
{
	char *tmp;

	// printf("test == %s\n", str);
	tmp = *str;
	// printf("Hey\n");
	*str = (char*)ft_memalloc(sizeof(char) * (ft_strlen(dna->out) + prefix_count(dna) + 1));
	if (!str)
		return (NULL);
	// printf("Hey 2\n");
	// printf("prefix_count : %d\n", (int)prefix_count(dna));
	ft_memcpy(*str + prefix_count(dna), tmp, ft_strlen(tmp));
	// printf("test == %s\n", str+1);
	ft_memcpy(*str, prefix(dna), prefix_count(dna));
	free(tmp);
	return (*str);
}
*/

char	*do_width_with_pitch(t_print *dna)
{
	char	*tmp;
	int		size;

	tmp = dna->out;
	size = ft_strlen(dna->out);
	dna->out = (char*)ft_memalloc(sizeof(char) * (dna->width + 1));
	if (!dna->out)
		return (NULL);
	ft_memset(dna->out, ' ', dna->width);
	if (dna->justify)
		ft_memcpy(dna->out, tmp, size);
	else
		ft_memcpy(dna->out + (dna->width - size), tmp, size);
	free(tmp);
	return (dna->out);
}

char	*do_width_without_pitch(t_print *dna)
{
	char	*tmp;
	char	c;
	int		start;
	int		size;
	// printf("test = %s\n", dna->out);
	// printf("bite\n");
	//printf("%d\n", dna->base_size);
	size = dna->width - (dna->base_size + prefix_count(dna));
	//printf("FUCKING SIZE = %d\n", size);
	tmp = dna->out;
	c = (dna->flag_0) ? '0' : ' ';
	//printf("prefix_count %d\n", (int)prefix_count(dna));
	start = (dna->justify) ? 0 : size;
	//start = (dna->htag) ? prefix_count(dna) : size;
	//start = (dna->flag_0) ? start + 1 : start;
	//start = dna->out;
	dna->out = (char*)ft_memalloc(sizeof(char) * (dna->width + 1));
	if (!dna->out)
		return (NULL);
	ft_memset(dna->out, c, dna->width);
	// printf("test %s\n", dna->out);
	// printf("test %d\n", (int)ft_strlen(dna->out));
	ft_memcpy(dna->out + start, tmp, ft_strlen(tmp));

	// printf("test %s\n", dna->out);
	return (dna->out);
}

char	*width_ectoplasme(t_print *dna, bool prefix_in)
{
	char	*tmp;
	char	c;
	int		pos;

	tmp = dna->out;
	c = (dna->flag_0) ? '0' : ' ';
	pos = (prefix_in) ? 0 : prefix_count(dna);
	// printf("7.6 => %s\n", dna->out);
	if (!(dna->out = (char*)ft_memalloc(sizeof(char) * (dna->width + 1))))
		return (NULL);
	ft_memset(dna->out, c, dna->width);
	// printf("justify %d\n", dna->justify);
	// printf("prefix %d\n", (int)prefix_count(dna));
	// printf("prefix_in %d\n", prefix_in);
	if (dna->justify)
		ft_memcpy(dna->out + pos, tmp, ft_strlen(tmp));
	else
		ft_memcpy(dna->out + (dna->width - ft_strlen(tmp)), tmp, ft_strlen(tmp));
	// printf("7.7 => %s\n", dna->out);
	free(tmp);
	return (dna->out);
}

char	*do_width(t_print *dna)
{
	// width_ectoplasme(dna, prefix_in);

	/*
	if (dna->pitch_nb)
		dna->out = do_width_with_pitch(dna);
	else
		dna->out = do_width_without_pitch(dna);
	*/
	return (dna->out);

}


/*
char	*do_width(t_print *dna)
{
	char *tmp;
	int i;
	size_t size;
	char c;

	i = 0;
	tmp = dna->out;
	size = dna->width;
	if (!dna->pitch)
		size += prefix_count(dna);
	c = (dna->flag_0 && !dna->pitch) ? '0' : ' ';

	if (dna->width)
	{
		if (dna->pitch)
		{
			// printf("ft_strlen %d\n", (int)ft_strlen(dna->out));
			// printf("width %d\n", dna->width);
			if (dna->width > ft_strlen(dna->out))
			{
				//printf("bob %s\n", dna->out);
				dna->out = (char*)ft_memalloc(sizeof(char) * (dna->width + 1));
				ft_memset(dna->out, ' ', dna->width);

				if (dna->justify)
				{
					ft_memcpy(dna->out, tmp, ft_strlen(tmp));
				}
				else
				{
					//printf("do_width 2  ");
					ft_memcpy(dna->out + (dna->width - ft_strlen(tmp)), tmp, ft_strlen(tmp));
				}
				free(tmp);
			}
		}
		else //if no pitch
		{
			if (dna->flag_0)
			{
				printf("flag_0\n");
			}
			else // no flag_0
			{
				if (dna->width > ft_strlen(tmp) + prefix_count(dna))
				{
					dna->out = (char*)ft_memalloc(sizeof(char) * (dna->width + 1));
					if (!dna->out)
						return (NULL);
					ft_memset(dna->out, ' ', dna->width);
					add_prefix(&tmp, dna);
					if (!tmp)
						return (NULL);
					if(dna->justify)
					{
						ft_memcpy(dna->out, tmp, ft_strlen(tmp));
					}
					else
					{
						ft_memcpy(dna->out + (dna->width - ft_strlen(tmp)), tmp, ft_strlen(tmp));
					}
				}
				else
				{

				}

			}
		}
	}
*/
/*
	if (dna->pitch)
	{


	}
	else
	{


	}
*/
/*
	if (dna->width && dna->width > dna->base_size)
	{
		//printf("compute_width\n");
		tmp = dna->out;
		dna->out = (char*)ft_memalloc(1 * (dna->width + 1));
		while (i < dna->width)
		{
			*(dna->out + i) = c;
			i++;
		}
		if (dna->justify)
			ft_memcpy(dna->out, tmp, ft_strlen(tmp));
		else
			ft_strcpy(dna->out + (i - dna->base_size), tmp);
		free(tmp);
	}



	return (dna->out);
}
*/
