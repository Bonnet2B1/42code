#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

char *get_next_line(int fd)
{
    static char buffer[BUFFER_SIZE];
    static int pos = 0;
    static int end = 0;
    int i = 0;
    char *line = NULL;

    if (pos == end)
    {
        end = read(fd, buffer, BUFFER_SIZE);
        if (end == -1)
        {
            perror("read");
            return NULL;
        }
        pos = 0;
    }

    while (pos + i < end && buffer[pos + i] != '\n')
        i++;
    if (pos + i == end)
    {
        if (line)
            free(line);
        return NULL;
    }

    line = malloc((i + 1) * sizeof(char));
    if (!line)
    {
        perror("malloc");
        return NULL;
    }

    for (int j = 0; j < i; j++)
        line[j] = buffer[pos + j];
    line[i] = '\0';

    pos += i + 1;
    return line;
}
