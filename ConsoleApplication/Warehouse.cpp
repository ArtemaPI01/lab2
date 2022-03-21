#define _CRT_SECURE_NO_WARNINGS
#include "Warehouse.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

struct Warehouse enterWarehouse() {
	Warehouse warehouse;
	printf("Кол-во рабочих на складе: ");
	scanf("%d", &warehouse.count);
	printf("\nПродукты: ");
	getchar();
	gets_s(warehouse.products);
	printf("\nДата поставок: ");
	scanf("%s", &warehouse.data);
	return warehouse;
}

void printWarehouse(Warehouse warehouse) {
	printf("\nСклад\nКол-во рабочих - %d\nПродукты - %s\nДата - %s\n", warehouse.count, warehouse.products, warehouse.data);
}

struct Warehouse createWarehouse(int n, char t[100], char s[100]) {
	Warehouse warehouse;
	warehouse.count = n;
	strcpy(warehouse.products, t);
	strcpy(warehouse.data, s);
	return warehouse;
}

void cloakWarehouse(Warehouse warehouse, int x) {
	printf("\nВремя разгрузки %d (тонн) - %d минут", x, (x*10/warehouse.count)*10);
}