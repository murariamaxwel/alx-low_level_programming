/**
 * wildcmp - uses a wildcard to compare if strings match
 * @s1: one of the strings to be compared
 * @s2: the second string
 * Return: 1 if matched, 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i] != '\0' && s2[j] != '\0')
	{
		if (s1[i] == s2[j])
			i++;
			j++;
		if (s2[j] == "*")
		{
			j++;
			while ((s1[i] != s2[j]) && s1[i] != '\0')
				i++;
		}
		if (s1[i] != s2[j])
			return (0);
	}
	return (1);
}
