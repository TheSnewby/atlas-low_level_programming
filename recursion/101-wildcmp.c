/* #include <main.h> */

/**
 * wildcmp - recursively compares two strings
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: 1 if identical, 0 otherwise
 */
int wildcmp_helper(char *s1, char *s2, int i)
{
  if (*s1 == '\0' && *s2 == '\0')
  	return (i);
  else if (*s1 == '\0')
  	return (-1);
  if (*s2 == '*')
	return (wildcmp_helper(s1, s2 + 1, i));
  else if (*s1 == *s2)
	return(i);
  else
  {
	i++;
    return(wildcmp_helper(s1 + 1, s2, i));
  }
}

int wildcmp(char *s1, char *s2)
{
    int i = 0;
    
     if (*s2 == '*')
    {
        i = wildcmp_helper(s1, s2 + 1, i);
        if (i < 0)
        	return(0);
        else
            s1 += i;
        return (wildcmp(s1, s2 + 1));
    }
    if (*s1 == '\0' && *s2 == '\0')
        return (1);
    else if (*s1 == '\0' || *s2 == '\0')
        return (0);
    else if (*s1 == *s2)
        return (wildcmp(s1 + 1, s2 + 1));
    else
        return (0);
}
