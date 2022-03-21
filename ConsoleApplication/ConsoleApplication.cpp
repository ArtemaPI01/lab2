#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include "Shop.h"
#include "Owner.h"
#include "Security.h"
#include "Warehouse.h"

int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    Shop shop;
    Owner owner;
    Security security;
    Warehouse warehouse;
    char fio[] = "Евгений";
    shop = enterShop();
    printShop(shop);
    cloakShop(shop);
    owner = createOwner(fio, 1000000, 250000);
    printOwner(owner);
    security = enterSecurity();
    printSecurity(security);
    warehouse = enterWarehouse();
    printWarehouse(warehouse);
    cloakWarehouse(warehouse, 100);

    _getch();
}