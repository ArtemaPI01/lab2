#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include "Shop.h"
#include "Owner.h"

int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    Shop shop;
    Owner owner;
    char fio[] = "Евгений";
    shop = enterShop();
    printShop(shop);
    cloakShop(shop);
    owner = createOwner(fio, 1000000, 250000);
    printOwner(owner);
    _getch();
}