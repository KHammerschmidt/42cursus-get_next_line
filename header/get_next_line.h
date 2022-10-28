/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katharinahammerschmidt <katharinahammer    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 12:01:47 by khammers          #+#    #+#             */
/*   Updated: 2022/10/03 16:11:41 by katharinaha      ###   ########.fr       */
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

/* Util functions located in ../libft/src/ */
void	*ft_calloc(size_t count, size_t size);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strnjoin(char *s1, char *s2, ssize_t bytes);
char	*ft_strdup(char *s1);
char	*ft_substr(char *s, unsigned int start, size_t len);
void	ft_free(char **char_stat);

#endif