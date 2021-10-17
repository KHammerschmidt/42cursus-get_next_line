/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katharinahammerschmidt <katharinahammer    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 14:50:22 by khammers          #+#    #+#             */
/*   Updated: 2021/10/17 21:08:08 by katharinaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

/* Function returns the length of a string. */
size_t	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/* Function searches for the first occurence of 'c'. */
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] != (unsigned char)c && s[i] != '\0')
		i++;
	if (s[i] == (unsigned char)c)
		return ((char *)(s + i));
	else
		return (NULL);
}

/* Function appends one string onto another. */
char	*ft_strnjoin(char *s1, char *s2, ssize_t bytes)
{
	char	*strnw;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s1 != NULL)
		bytes = ft_strlen(s1);
	strnw = (char *)ft_calloc((bytes + ft_strlen(s2) + 1), sizeof(char));
	if (strnw == NULL)
		return (NULL);
	while (s1 && s1[i] != '\0')
	{
		strnw[i] = s1[i];
		i++;
	}
	while (s2 && s2[j] != '\0')
		strnw[i++] = s2[j++];
	if (s1)
		ft_free(&s1);
	return (strnw);
}

/* Function duplicates a string. */
char	*ft_strdup(char *s1)
{
	char	*cpy;
	size_t	i;

	i = 0;
	cpy = (char *)ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	if (cpy == NULL)
		return (NULL);
	while (s1[i] != '\0' && s1)
	{
		cpy[i] = s1[i];
		i++;
	}
	return (cpy);
}

/* Function creates a substring of a specific length. */
char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	substr = malloc(sizeof(char) * (len + 1));
	if (substr == NULL || !s)
		return (NULL);
	while (s[i] != '\0')
	{
		if (i >= start && j < len)
		{
			substr[j] = s[i];
			j++;
		}
		i++;
	}
	substr[j] = '\0';
	return (substr);
}
