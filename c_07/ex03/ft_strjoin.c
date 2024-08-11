#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	sep_len;
	int	total_len;

	i = 0;
	sep_len = ft_strlen(sep);
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i < size - 1)
			total_len += sep_len;
		i++;
	}
	return (total_len);
}

void	ft_copy(int size, char **strs, char *sep, char *res)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			res[k++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
		{	
			res[k++] = sep[j++];
		}
		i++;
	}
	res[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		total_len;

	if (size == 0)
	{
		res = (char *)malloc(1 * sizeof(char));
		if (!res)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	total_len = ft_total_len(size, strs, sep);
	res = (char *)malloc((total_len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	ft_copy(size, strs, sep, res);
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	char *teste[4];
	char sep[] = " ";

	teste[0] = "caio";
	teste[1] = "muito";
	teste[2] = "legal";
	teste[3] = "foda";
	printf("%s", ft_strjoin(4, teste, sep));
	return (0);
}
*/
