/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:43:35 by gpallare          #+#    #+#             */
/*   Updated: 2023/12/27 12:24:43 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_free(char	**str_free)
{
	if (*str_free)
	{
		free(*str_free);
		*str_free = NULL;
	}
	return (NULL);
}

char	*ft_next(char	*buf)
{
	int		i;
	int		j;
	char	*line;

	i = 0;
	j = 0;
	while (buf[i] && buf[i] != '\n')
		i++;
	if (!buf[i])
		return (ft_free(&buf));
	line = ft_calloc((ft_strlen(buf) - i + 1), sizeof(char *));
	if (!line)
		return (ft_free(&buf));
	i++;
	while (buf[i])
		line[j++] = buf[i++];
	ft_free(&buf);
	return (line);
}

char	*ft_line(char	*buf)
{
	int		i;
	char	*line;

	i = 0;
	if (!buf || !buf[i])
		return (NULL);
	while (buf[i] && buf[i] != '\n')
		i++;
	if (buf[i] == '\n')
		i++;
	line = ft_calloc((i + 1), sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (buf[i] && buf[i] != '\n')
	{
		line[i] = buf[i];
		i++;
	}
	if (buf[i] && buf[i] == '\n')
		line[i++] = '\n';
	return (line);
}

char	*ft_read_fd(int fd, char *buf)
{
	char	*buffer;
	int		num_byte;

	num_byte = 1;
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (ft_free(&buf));
	while (num_byte > 0)
	{
		num_byte = read(fd, buffer, BUFFER_SIZE);
		if (num_byte == -1)
		{
			ft_free(&buf);
			return (free(buffer), NULL);
		}
		buffer[num_byte] = 0;
		buf = ft_strjoin(buf, buffer);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	free(buffer);
	return (buf);
}

char	*get_next_line(int fd)
{
	static char		*buf = NULL;
	char			*line;

	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	if (!buf || (buf && !ft_strchr(buf, '\n')))
		buf = ft_read_fd(fd, buf);
	if (!buf)
		return (NULL);
	line = ft_line(buf);
	if (!line)
		return (ft_free(&buf));
	buf = ft_next(buf);
	return (line);
}
