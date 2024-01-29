#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	int		fd = open("example.txt", O_RDONLY);
	char	*line;
    int i  = 1;

    /*if (fd == -1)
    {
        printf("Error al abrir el archivo");
        return (1);
    }*/

    line = get_next_line(fd);
    //printf("%s", line);
    while (line != NULL)
    {
        printf(" %s\n", line);
        free(line);
        i++;
        line = get_next_line(fd);
    }
    close(fd);
    return (0);
}