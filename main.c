/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katharinahammerschmidt <katharinahammer    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 21:10:50 by katharinaha       #+#    #+#             */
/*   Updated: 2021/10/17 21:25:24 by katharinaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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