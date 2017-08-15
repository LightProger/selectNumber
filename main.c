#include <stdio.h>

/*
 * 2) Условия.
Запросить у пользователя любое целое число. Написать программу которая проверит,
входит ли введённое число в диапазон (например, от 0 до 100, включительно) и выведет на экран сообщение
о результате проверки.
 */

int main ()
{
  int number = 0;
  int min = 0, max = 100;

  printf("Введите число:\n");
  scanf("%i", &number);
  getchar();

  /* Применение тернарного оператораю Если введеное число входит в диапазон чисел от 0 до 100, то распечатываем строку,
   * если не входит,то встраиваем в строку частицу "не"*/
  printf("Ваше число %i, %s входит в диапазон чисел от %i до %i", number, (number >= min && number <= max) ? "" : "не",
  min, max);

  printf("\n");
  return 0;
}