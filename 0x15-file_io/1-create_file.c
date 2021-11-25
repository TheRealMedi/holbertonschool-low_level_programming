#include "main.h"
/**
 * create_file - Create a file.
 * @filename: File to create
 * @text_content: Content to add in a new file
 * Return: 1 to success or -1 to fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, aux;
	
	if (!filename)
		return (0);
	
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (0);
	
	if (text_content)
	{
		aux = write(fd, text_content, strlen(text_content));
			if (aux == -1)
			{
				close(fd);
				return (-1);
			}
	}
	close(fd);
	return(1);
}
