/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeinan <ekeinan@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:02:03 by ekeinan           #+#    #+#             */
/*   Updated: 2024/11/28 14:50:13 by ekeinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main(void)
{
    int     fd = open("main.c", O_RDONLY);
    char    *line;
	size_t	l = 1;
	
	while (1)
    {
        line = get_next_line(fd);
     	if (!line)
		{
			free(line);
			printf("[NULL]");
			break;
		}
		printf(" %c%lu %s" , (l < 10 ? ' ' : '\0'), l, line);
		l++;
        free(line);
    }

    close(fd);

    return (0);
}
