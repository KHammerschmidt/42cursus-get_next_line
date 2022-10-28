#include "../header/get_next_line.h"

/* ft_calloc() allocates memory area and sets it to 0. */
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

/* Function to free static char. */
void	ft_free(char **char_stat)
{
	free(*char_stat);
	*char_stat = NULL;
}


/* Differentiates between: 
(1) bytes != 0: the end of the file is not reached yet which returns
ft_get_output(). 
(2) (*line == 0): nothing is saved into string 'line' and all variables
can be freed. 
(3) any other case:
(3a) if a newline character has been found in string 'line', the
remaining content of the string is saved in string 'print' for the next
call of gnl.
(3b) if no newline character is found in 'line', no remainings of 'line'
need to be saved and all variables are freed.
(4) Return value of NULL indicates that static variable is empty for the
next gnl call.  */
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

/* Iterates through initial portion of the string and returns a substring
of this portion until a newline or EOF is found. A substring of remaining
part of the read line is saved in static variable.
*/
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

/* Preliminary tests if fd is valid and call read() until newline or EOF is 
read, joining read buffer and line after each read() call. Calling 
ft_update_char_output() to print read line and save remaining content.
*/
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
