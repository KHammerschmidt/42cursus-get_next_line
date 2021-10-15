/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khammers <khammers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 14:49:33 by khammers          #+#    #+#             */
/*   Updated: 2021/08/26 16:05:43 by khammers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*ft_update_char_output(char **line, ssize_t bytes);
char	*ft_get_output(char **line);
void	ft_free(char **char_stat);
void	*ft_calloc(size_t count, size_t size);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strnjoin(char *s1, char *s2, ssize_t bytes);
char	*ft_strdup(char *s1);
char	*ft_substr(char *s, unsigned int start, size_t len);

#endif