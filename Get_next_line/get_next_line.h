/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynejmi <ynejmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 05:11:49 by ynejmi            #+#    #+#             */
/*   Updated: 2019/12/03 18:49:47 by ynejmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

ssize_t nx(char *str);
char	*ft_strdup(char *src);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char *s, unsigned int start, size_t len);
int		ft_split(char *src, char **d1, char **d2, int spx);
int		get_next_line(int fd, char **line);

#endif
