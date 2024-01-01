#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int flat = 0;

    printf("Введите номер квартиры: ");
    scanf_s("%d", &flat);
    if (flat > 0 && flat < 145) {
        int entrance = (flat - 1) / 36 + 1;
        int floor = (flat - 1) % 36 / 4 + 1;
        
        printf("Подъезд: %d", entrance);
        printf("\nЭтаж: %d", floor);
        printf("\nКвартира %d", flat);
    }
    else {
        printf("Ошибка");
    }
}