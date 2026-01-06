char *get_next_line(int fd)
{
	static t_list	*stash = NULL;
	char			*line;
	int				readed;

	if (fd < 0 || BUFFER_SIZE < 0 || read (fd, &line, 0) < 0)
		return (NULL):
	readed = 1;
	line = NULL;
	read_and_stash (&stash, &readed);
	if (stash == NULL)
		return (NULL);
	return (line);
}

void	read_and_stash (t_list **stash, int *readed_ptr)
{
	char	*buff;

	buff = malloc (sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	while (!found_newline(*stash) && *readed_ptr != 0)
	{
		*readed_ptr = (int)read(fd, buff, BUFFER_SIZE);
		if ((*stash == NULL && *readed_ptr = 0) || *readed_ptr = -1)
		{
			free(buff);
		}
		buff[*readed_ptr] = '\0';
	}
}