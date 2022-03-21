#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include "Shop.h"

int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    Shop shop;
    char fio[] = "Евгений";
    shop = enterShop();
    printShop(shop);
    cloakShop(shop);
    _getch();
}