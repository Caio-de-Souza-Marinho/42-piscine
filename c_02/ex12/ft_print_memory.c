#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_address(unsigned long addr)
{
	char	hex[16];
	int		i;

	i = 15;
	while (i >= 0)
	{
		hex[i] = "0123456789abcdef"[addr % 16];
		addr /= 16;
		i--;
	}
	i = 0;
	while (i < 16)
		ft_putchar(hex[i++]);
}

void	ft_print_byte_hex(unsigned char byte)
{
	char *hexa;

	hexa = "0123456789abcdef";
	ft_putchar(hexa[byte / 16]);
	ft_putchar(hexa[byte % 16]);
}

void	ft_print_content(unsigned char *ptr, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < 16)
	{
		if (i < size)
			ft_print_byte_hex(ptr[i]);
		else
			ft_putchar(' ');
		if (i % 2 == 1)
			ft_putchar(' ');
		i++;
	}
}

void	ft_print_memory(void *addr, unsigned int size)
{
	unsigned char *ptr;
	unsigned int i;
	unsigned int j;

	ptr = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		ft_print_address((unsigned long long)(ptr + i));
		ft_putchar(':');
		ft_putchar(' ');
		if (i + 16 <= size)
			ft_print_content(ptr + i, 16);
		else
			ft_print_content(ptr + i, size - i);
		j = 0;
		while (j < 16 && i + j < size)
		{
			if (ptr[i + j] >= 32 && ptr[i + j] <= 126)
				ft_putchar(ptr[i + j]);
			else
				ft_putchar('.');
			j++;
		}
		ft_putchar('\n');
		i += 16;
	}
}
/*
int	main(void)
{
	//char	string0[] = "Bonjour les amin";
	char	string1[] = "ches\t\n\tc\a est fo";
	char	string2[] = "u\ttout\tce qu on ";
	char	string3[] = "peut faire avec\t";
	char	string4[] = "\n\tprint_memory\n\n";
	char	string5[] = "\n\tlol.lol\n \0";

	//ft_print_memory(string0, 16);
	ft_print_memory(string1, 16);
	ft_print_memory(string2, 16);
	ft_print_memory(string3, 16);
	ft_print_memory(string4, 16);
	ft_print_memory(string5, 12);
	return (0);
}
*/
