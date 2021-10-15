/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khammers <khammers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 13:26:11 by khammers          #+#    #+#             */
/*   Updated: 2021/09/27 19:50:56 by khammers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (0);
	while (i < (count * size))
	{
		((char *)ptr)[i] = '\0';
		i++;
	}
	return (ptr);
}

void	ft_free(char **char_stat)
{
	free(*char_stat);
	*char_stat = NULL;
}

char	*ft_update_char_output(char **line, ssize_t bytes)
{
	char	*print;
	int		i;

	i = 0;
	print = NULL;
	if (bytes != 0)
		return (ft_get_output(&*line));
	if (*line == 0)
		ft_free(&*line);
	else
	{
		if (ft_strchr(*line, '\n') == NULL)
		{
			if (*line[i] != 0)
			{
				print = ft_strdup(*line);
				ft_free(&*line);
				return (print);
			}
			else
				ft_free(&*line);
		}
	}
	return (NULL);
}

char	*ft_get_output(char **line)
{
	int		i;
	char	*print;
	char	*temp;

	i = 0;
	while (((*line)[i] != '\n') && ((*line)[i]) != '\0')
		i++;
	print = ft_substr(*line, 0, i + 1);
	if (ft_strlen(print) == 0)
	{
		ft_free(&*line);
		return (NULL);
	}
	temp = ft_substr(*line, i + 1, ft_strlen(*line));
	ft_free(&*line);
	*line = ft_strdup(temp);
	free(temp);
	return (print);
}

char	*get_next_line(int fd)
{
	static char	*line;
	char		*buffer;
	ssize_t		bytes;

	if (fd < 0 || fd > 10240 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = (char *)ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if (buffer == NULL)
		return (NULL);
	bytes = 1;
	while (bytes > 0 && ft_strchr(line, '\n') == NULL)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes == 0 || bytes == -1)
			break ;
		buffer[bytes] = 0;
		line = ft_strnjoin(line, buffer, bytes);
	}
	free(buffer);
	if (bytes == -1)
		return (NULL);
	return (ft_update_char_output(&line, bytes));
}
