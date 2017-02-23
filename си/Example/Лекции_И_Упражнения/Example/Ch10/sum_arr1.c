// sum_arr1.c -- сумма элементов массива      
// используйте спецификаторы %u или %lu, если %zd не работает
#include <stdio.h>
#define SIZE 10
int sum(int ar[], int n);
int main(void)
{
    int marbles[SIZE] = {20,10,5,39,4,16,19,26,31,20};
    long answer;
    
    answer = sum(marbles, SIZE);
    printf("Общая сумма элементов массива marbles равна %ld.\n", answer);
    printf("Объем памяти, отведенный под массив marbles, составляет %zd байтов.\n",
           sizeof marbles);
    
    return 0;
}

int sum(int ar[], int n)     // насколько велик массив?
{
    int i;
    int total = 0;
    
    for( i = 0; i < n; i++)
        total += ar[i];
    printf("Размер ar составляет %zd байтов.\n", sizeof ar);
    
    return total;
}
