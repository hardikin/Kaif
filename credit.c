#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Запрос номера карты
    long number = get_long("Please, print a number of your card - ");
    long number2 = number;
    int sum = 0;
    int digit = 0;
    int counter = 1;
    int doubled = 0;
    int sum_of_doubled = 0;

    //Проверка на количество разрядов в числе
    int divides = 0;
    while (number > 0)
    {
        number = number / 10;
        divides++;
    }
    printf("Divides: %i\n", divides);

    if 

    //Условие, при котором начинаем вычисления
    if (divides == 5 || divides == 13 || divides == 15 || divides == 16)
    {
        while (number2 > 0)
        {
            //Для чётных с конца разрядов
            if (counter % 2 == 0)
            {
                printf("Number: %li\n", number2);
                digit = number2 % 10;
                printf("Last digit of it: %i\n", digit);
                number2 = number2 / 10;
                doubled = digit * 2;
                printf("Multiplied by 2: %i\n", doubled);
                    if (doubled > 9)
                    {
                        sum_of_doubled = doubled % 10 + doubled / 10;
                        sum = sum + sum_of_doubled;
                    }
                    else
                    {
                        sum = sum + doubled;
                    }
            }

            //Для нечётных с конца разрядов
            else
            {
                printf ("Number: %li\n", number2);
                digit = number2 % 10;
                number2 = number2 / 10;
                printf("DLast digit of it: %i\n", digit);
                sum = sum + digit;
            }
            printf("Sum: %i\n", sum);
            counter++;
            printf("Counter: %i\n\n", counter);
        }
        //Вывод суммы
        printf ("%i\n", sum);
    }
    else
    {
        printf("INVALID\n");
    }
}
