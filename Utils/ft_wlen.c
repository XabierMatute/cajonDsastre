/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wlen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 16:56:29 by xmatute-          #+#    #+#             */
/*   Updated: 2023/01/29 17:40:10 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

size_t	ft_wlen(const char *s, char c)
{
	int	l;

	l = 0;
	while (s[l] && s[l] != c)
	{
		l = ignoreq(&s[l]) - s;
		l++;
	}
	return (l);
}
