#ifndef _HOLBERTON_H
#define _HOLBERTON_H

/*
 * Structs, enums and unions definitions
 * Typedefs
 * Function prototypes
 */

int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
char *_strpbrk(char *s, char*accept);
int _isupper(int c);
char *_strcat(char *dest, char *src);
int _isdigit(int c);
char *_strncat(char *dest, char *src, int n);
int _strlen(char *str);
char *_strncpy(char *dest, char *src, int n);
int _islower(int c);
int _atoi(char *s);
void _puts(char *str);
int _strcmp(char *s1, char *s2);
int _isalpha(int c);
int _abs(int i);
char *_strcpy(char *dest, char *src);

#endif