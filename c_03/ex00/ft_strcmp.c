int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else
		{
			i++;
		}
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char s1[] = "This is the way.";
	char s2[] = "This is the way.";
	int ret = ft_strcmp(s1, s2);
	printf("%d", ret);
	return (0);
}
*/
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "This is the way.";
	char s2[] = "Thia is the way.";

	int ret = strcmp(s1, s2);
	if (strcmp(s1, s2) == 0)
		printf("Strings are equal\n");
	else if (strcmp(s1, s2) < 0)
	{
		printf("s1 < s2\n");
		printf("%d", ret);
	}
	else if (strcmp(s1, s2) > 0)
	{
		printf("s1 > s2\n");
		printf("%d", ret);
	}
	return 0;
}
*/
