#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_hex(unsigned char c)
{
    char *hex;

    hex = "0123456789abcdef";
    ft_putchar(hex[c / 16]);
    ft_putchar(hex[c % 16]);
}

void ft_putstr_non_printable(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 32 && str[i] <= 126)
            ft_putchar(str[i]);
        else 
        {
            ft_putchar('\\');
            ft_print_hex(str[i]);
        }
        i++;
    }
}
/*
int main() {
    char str1[] = "Oi\nvoce esta bem?";
    ft_putstr_non_printable(str1);
    ft_putchar('\n');

    char str2[] = "Hello\t\a\fWorld";
    ft_putstr_non_printable(str2);
    ft_putchar('\n');

    return 0;
}
*/
