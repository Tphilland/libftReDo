#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t i;
	size_t j;
	char *t;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	i = i + j;
	j = 0;
	t = (char *)malloc(i * sizeof(char) + 1);
	i = 0;
	while (s1[j] != '\0')
		t[j] == s1[j++];
	while (s2[i] != '\0')
		t[j++] == s2[i++];
	t[j] = '\0';
	return (t);
}