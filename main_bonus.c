#include "get_next_line_bonus.h"
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	char	*line;

	int fd, fd2, fd3;
	fd = open("test.txt", O_RDONLY);
	fd2 = open("test2.txt", O_RDONLY);
	fd3 = open("test3.txt", O_RDONLY);
	if (fd < 0 || fd2 < 0 || fd3 < 0)
	{
		perror("open");
		return (1);
	}
	while ((line = get_next_line(fd)) || (line = get_next_line(fd2))
		|| (line = get_next_line(fd3)))
	{
		if (line)
		{
			printf("%s", line);
			free(line);
		}
	}
	close(fd);
	close(fd2);
	close(fd3);
	return (0);
}
