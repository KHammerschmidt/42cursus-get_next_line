/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katharinahammerschmidt <katharinahammer    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 12:01:47 by khammers          #+#    #+#             */
/*   Updated: 2021/10/17 21:25:31 by katharinaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>

char	*get_next_line(int fd);
char	*ft_update_char_output(char **line, ssize_t bytes);
char	*ft_get_output(char **line);
void	ft_free(char **char_stat);

/* Util functions */
void	*ft_calloc(size_t count, size_t size);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strnjoin(char *s1, char *s2, ssize_t bytes);
char	*ft_strdup(char *s1);
char	*ft_substr(char *s, unsigned int start, size_t len);

#endif