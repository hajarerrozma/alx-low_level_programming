#include "main.h"


char *create_array(unsigned int size, char c);
{
	char *buffer;
	unsigned int size;

	size = 72;
	buffer = create_array(size, 'S');
	if (buffer == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	simple_print_buffer(buffer, size);
	free(buffer);
	return (0);
}
