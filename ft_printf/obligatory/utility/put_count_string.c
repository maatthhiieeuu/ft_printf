/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_count_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:19:11 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:19:14 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../printf/ft_printf.h"

void	put_count_string(char *s, int *result)
{
	if (s == NULL || result == NULL)
		return ;
	while (*s != '\0')
	{
		check_write(write(1, s, 1));
		*result += 1;
		s++;
	}
}
