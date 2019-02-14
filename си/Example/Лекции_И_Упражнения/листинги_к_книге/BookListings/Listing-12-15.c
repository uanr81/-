// where.c -- где что находится в памяти?
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int static_store = 30;
const char * pcg = "Строковый литерал";
int main()
{
    int auto_store = 40;
    char auto_string[] = "Автоматический массив char";
    int * pi;
    char * pcl;

    pi = (int *) malloc(sizeof(int));
    *pi = 35;
    pcl = (char *) malloc(strlen("Динамическая строка") + 1);
    strcpy(pcl, "Динамическая строка");

    printf("          static_store: %d по адресу %p\n", static_store, &static_store);
    printf("            auto_store: %d по адресу %p\n", auto_store, &auto_store);
    printf("                   *pi: %d по адресу %p\n", *pi, pi);
    printf("         %s по адресу %p\n", pcg, pcg);
    printf("%s по адресу %p\n", auto_string, auto_string);
    printf("       %s по адресу %p\n", pcl, pcl);
    printf("         %s по адресу %p\n", "Строка в кавычках", "Строка в кавычках");
    free(pi);
    free(pcl);

    return 0;
}

