#include "../header/get_next_line.h"

/* Differentiates between 
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

/* (1) The function iterates through the static char 'line' until it's
end or a newline character. 
(2) A substring of the initial part of 'line' is created which will 
be returned at the function's end.
(3) Another substring 'temp' is created for the remains of 'line'.
(4) Via a string duplication, content of 'temp' is saved in 'line'. 
(5) Line is freed and then the previous remains are saved in it. 
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

/* (1) Testing if file descriptor is readable and allocating memory space for the
string buffer, depending on the BUFFER_SIZE which can manually be set. 
(2) To enter the while loop, set bytes to 1 and continue in the loop until the 
string line consists of a newline character. 
(2a) The function read, saves the read content automatically in buffer, which is 
set to 0 at it's end. 
(2b) The read content is saved in the string 'line' by joining line and buffer, 
appending every newly read byte whenever the while loop restarts.
(3) When a newline character is found, the function breaks out of the while loop,
frees the buffer and returns the read output. */
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
