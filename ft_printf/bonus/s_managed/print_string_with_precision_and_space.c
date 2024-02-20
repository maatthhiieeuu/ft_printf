/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string_with_precision_and_space.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:06:47 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:06:48 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

static void	print_str(t_format *option, char *string);
static void	print_field(t_format *option, size_t *size_string);

void	print_string_with_precision_and_space(t_format *option, char *string,
		size_t size_string)
{
	if (option == NULL)
		return ;
	if (string == NULL)
		size_string = 6;
	if (option->minus == false)
	{
		print_field(option, &size_string);
		print_str(option, string);
	}
}

static void	print_field(t_format *option, size_t *size_string)
{
	size_t	j;

	j = 0;
	if (option == NULL)
		return ;
	if (option->precision_array < *size_string)
	{
		while ((j) < (option->space_array - option->precision_array))
		{
			putchar_bonus(option, ' ');
			j++;
		}
	}
	else if (option->precision_array > *size_string)
	{
		while ((j) < (option->space_array - *size_string))
		{
			putchar_bonus(option, ' ');
			j++;
		}
	}
}

static void	print_str(t_format *option, char *string)
{
	if (option == NULL)
		return ;
	if (string == NULL)
		putstr_bonus(option, "(null)");
	else
		putnstr_bonus(option, string, option->precision_array);
}
