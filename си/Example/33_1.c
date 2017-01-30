#include <stdio.h>
#define MAXLINE 1000 /* максимальный размер вводимой строки */
int getline(char line[], int MAXLINE);
void copy(char to[], char from[]);
/* печать самой длинной строки */
main()
{
  int len; /* длина текущей строки */
  int max; /* длина максимальной из просмотренных строк */
  char line[MAXLINE]; /* текущая строка */
  char longest[MAXLINE]; /* самая длинная строка */
  max = 0;
  while (len = getline(line, MAXLINE)) > 0)
  if (len > max) {
    max = len;
    copy(longest, line);
  }
if (max > 0) /* была ли хоть одна строка? */
  printf("%s", longest);
return 0;
}
/* getline: читает строку в s, возвращает длину */
int getline(char s[], int lim)
{
  int c, i;
  for (i = 0; i < lim-1 && (c = getchar()) != EOF && с != '\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}
/* copy: копирует из 'from' в 'to'; to достаточно большой */
void copy(char to[], char from[])
{
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
