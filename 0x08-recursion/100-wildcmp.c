#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int wildcmp(char *s1, char *s2)
{
      int i = 0;
      return(find_wildcmp(s1, s2, i));
}

int find_wildcmp(char *s1, char *s2, int i)
{
      if (s1[i] == s2[i] && s1[i] == '\0' && s2[i] == '\0')
            return (1);

      else if (s1[i] != s2[i])
            return (0);

      return(find_wildcmp(s1, s2 , i + 1));
}