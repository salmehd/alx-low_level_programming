#include "main.h"
/**
 * cap_string - function that capitalize
 * @s: pointer to string
 *
 * Return: to s
 */
char *cap_string(char *s)
{
	int st_cnt;

/* scan through string */
	st_cnt = 0;
	while (s[st_cnt] != '\0')
	{/* if next character after count is a char , capitalise it */
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[st_cnt] == ' ' || s[st_cnt] == '\t' || s[st_cnt] == '\n'
			|| s[st_cnt] == ',' || s[st_cnt] == ';' || s[st_cnt] == ','
			|| s[st_cnt] == ',' || s[st_cnt] == '!' || s[st_cnt] == '?'
			|| s[st_cnt] == '"' || s[st_cnt] == '(' || s[st_cnt] == ')'
			|| s[st_cnt] == '{' || s[st_cnt] == '}')
		{
			if (s[st_cnt + 1] >= 97 && s[st_cnt + 1] <= 122)
			{
				s[st_cnt + 1] = s[st_cnt + 1] - 32;
			}
		}
		st_cnt++;
	}
	return (s);
}
