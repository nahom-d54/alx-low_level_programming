/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	unsigned int words = 0, count = 0, l, alloc = 0;
	char *space;

	if (str == 0 || str == "")
		return (NULL);

	while (str[words] != '\0')
	{
		if (str[words] != ' ')
		{
			count++;
		}
		words++;
	}
	space = malloc(sizeof(char) * count + 1);
	if (space == 0)
	{
		free(space);
		return (NULL);
	}
	for (words = 0; str[words] != '\0'; words++)
	{
		if (str[words] != ' ' && str[words - 1] == ' ')
		{
			for (l = words; str[l] != ' ' && str[l] != '\0'; l++)
			{
				space[alloc] = str[l];
				alloc++;
			}
			space[alloc] = '\0';
			alloc++;
		}
	}
	return (space);
}
