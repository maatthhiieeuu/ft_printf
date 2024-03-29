/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   negative_precision_search.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:09:27 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:09:29 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	negative_precision_search(const char *point_ptr, t_format *option)
{
	size_t	i;

	i = 0;
	if (point_ptr == NULL || option == NULL)
		return ;
	while (i < option->digit_point_until_specifier
		&& option->negative_precision == false)
	{
		if (ft_isdigit(point_ptr[i]))
			option->value_precision = true;
		if (ft_atoi(point_ptr + i) < 0)
			option->negative_precision = true;
		i++;
	}
}
