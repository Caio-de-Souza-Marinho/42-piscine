#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	arg_index;

	arg_index = 1;
	i = 0;
	j = 0;
	while (arg_index < argc)
	{
		i = 0;
		while (argv[arg_index][i] != '\0')
		{
			write(1, &argv[arg_index][i], 1);
			i++;
		}
		arg_index++;
		write(1, "\n", 1);
	}
	return (0);
}
