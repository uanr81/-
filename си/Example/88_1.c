#include <stdio.h>
#include <stdlib.h> /* для atof() */
#define MAXOP 100 /* макс. размер операнда или оператора */
#define NUMBER '0' /* признак числа */
int getop (char []);
void push (double);
double pop (void);
/* калькулятор с обратной польской записью */
main()
{
  int type;
  double op2;
  char s[MAXOP];
  while ((type = getop (s)) != EOF) {
    switch (type) {
    case NUMBER:
      push (atof(s));
      break;
    case '+':
      push(pop() + pop());
      break;
    case '*':
      push(pop() * pop());
      break;
    case '-':
      op2 = pop();
      push(pop() - op2);
      break;
    case '/':
      pop2 = pop();
      if (op2 != 0.0)
	push(pop() / op2);
      else
	printf("ошибка: деление на нуль\n");
      break;
    case '\n':
      printf("\t%.8g\n", pop());
      break;
    default:
      printf("ошибка: неизвестная операция %s\n", s);
      break;
    }
  }
  return 0;
}

#define MAXVAL 100 /* максимальная глубина стека */
int sp = 0; /* следующая свободная позиция в стеке */
double val[MAXVAL]; /* стек */
/* push: положить значение f в стек */
void push(double f)
{
  if (sp < MAXVAL)
    val[sp++] = f;
  else
    printf("ошибка: стек полон, %g не помещается\n", f);
}
/* pop: взять с вершины стека и выдать в качестве результата */
double pop(void)
{
  if (sp > 0)
    return val[--sp];
  else {
    printf ("ошибка: стек пуст\n");
    return 0.0;
  }
}

#include <ctype.h>
int getch(void);
void ungetch(int);
/* getop: получает следующий оператор или операнд */
int getop(char s[])
{
  int i, с;
  while ((s[0] = с = getch()) == ' ' || с == '\t')
    ;
  s[1] = '\0';
  if (!isdigit(c) && с != '.')
    return c; /* не число */
  i = 0;
  if (isdigit(c)) /* накапливаем целую часть */
    while (isdigit(s[++i] - с = getch()))
      ;
  if (с == '.') /* накапливаем дробную часть */
    while (isdigit(s[++i] = с = getch()))
      ;
  s[i] = '\0';
  if (c != EOF)
    ungetch(c);
  return NUMBER;
}
#define BUFSIZE 100
char buf[BUFSIZE]; /* буфер для ungetch */
int bufp = 0; /* след. свободная позиция в буфере */
int getch(void) /* взять (возможно возвращенный) символ */
{
  return (bufp > 0) ? buf[--bufp]: getchar();
}
void ungetch(int c) /* вернуть символ на ввод */
{
  if (bufp >= BUFSIZE)
    printf("ungetch: слишком много символов\n");
  else
    buf[bufp++] = с;
}
