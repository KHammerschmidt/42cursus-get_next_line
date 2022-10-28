#include "../header/get_next_line.h"

int	main(void)
{
	int	fd;

	fd = open("test.txt", O_RDONLY);
	printf("main function is: %s\n", get_next_line(fd));
	printf("main function is: %s\n", get_next_line(fd));
	printf("main function is: %s\n", get_next_line(fd));
	printf("main function is: %s\n", get_next_line(fd));
	printf("main function is: %s\n", get_next_line(fd));
	printf("main function is: %s\n", get_next_line(fd));
	printf("main function is: %s\n", get_next_line(fd));
	printf("main function is: %s\n", get_next_line(fd));
	printf("main function is: %s\n", get_next_line(fd));
	return (0);
}