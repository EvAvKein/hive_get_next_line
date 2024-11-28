/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeinan <ekeinan@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 09:52:30 by ekeinan           #+#    #+#             */
/*   Updated: 2024/11/27 19:32:18 by ekeinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

size_t	ft_strlen(char *s);
size_t	ft_strlen_until_nl(char *s, ssize_t *nl_i);
void	*ft_bzero(void *s, size_t n);
char	*ft_strdup_until_nl(char *src, ssize_t *nl_i);
char	*get_next_line(int fd);

#endif
