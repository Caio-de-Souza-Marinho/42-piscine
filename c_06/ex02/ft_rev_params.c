#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	arg_len;

	arg_len = argc - 1;
	while (arg_len > 0)
	{
		i = 0;
		while (argv[arg_len][i] != '\0')
		{
			write(1, &argv[arg_len][i], 1);
			i++;
		}
		arg_len--;
		write(1, "\n", 1);
	}
	return (0);
}
