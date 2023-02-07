/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:23:19 by xmatute-          #+#    #+#             */
/*   Updated: 2023/02/07 18:07:31 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

char	*ft_strjoinfree(char *s1, char *s2)
{
	char	*s;
	size_t	i;
	size_t	j;

	if (!s2)
		return (s1);
	s = ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof(char));
	if (!s)
		return (0);
	i = 0;
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		s[i + j] = s2[j];
		j++;
	}
	free(s1);
	free(s2);
	return (s);
}

size_t elen(char *s)
{
	if (*s == 39)
	{
		/* code */
	}
	if (*s == '"')
	{
		/* code */
	}
	if (*s == '$')
	{
		/* code */
	}
	return (i);
}

char *expanded(char *s)
{
	char	*e;
	size_t	i;

	e = ft_calloc(elen(s) + 1, sizeof(char));
	i = 1;
	if (!*s)
		return (ft_strdup(""));
	if (*s == 39)
	{
		i = 1;
		while (s[i] != 39)
			i++;
		e = ft_calloc(i + 1, sizeof(char));
		while (i--)
			e[i] = s[i];
	}
	e[0] = *s;
	return (e);
}
\\hazte un len y triusalo
char *expand(char *s)
{
	char	*e;
	size_t	i;

	if (!s)
		return (s);
	i = 0;
	e = ft_strdup("");
	while (s[i])
	{
		e = ft_strjoinfree(e, expanded(s + i));
		i += elen(s + i);
	}
	// free(s);
	return (e);
}

int main(int argc, char const *argv[])
{
	printf("%s\n", expand(""));
	printf("%s\n", expand("ey"));
	printf("%s\n", expand("aupa"));
	printf("%s\n", expand("\'aupa\'"));
	return 0;
}
