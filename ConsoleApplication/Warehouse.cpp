#define _CRT_SECURE_NO_WARNINGS
#include "Warehouse.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

struct Warehouse enterWarehouse() {
	Warehouse warehouse;
	printf("���-�� ������� �� ������: ");
	scanf("%d", &warehouse.count);
	printf("\n��������: ");
	getchar();
	gets_s(warehouse.products);
	printf("\n���� ��������: ");
	scanf("%s", &warehouse.data);
	return warehouse;
}

void printWarehouse(Warehouse warehouse) {
	printf("\n�����\n���-�� ������� - %d\n�������� - %s\n���� - %s\n", warehouse.count, warehouse.products, warehouse.data);
}

struct Warehouse createWarehouse(int n, char t[100], char s[100]) {
	Warehouse warehouse;
	warehouse.count = n;
	strcpy(warehouse.products, t);
	strcpy(warehouse.data, s);
	return warehouse;
}

void cloakWarehouse(Warehouse warehouse, int x) {
	printf("\n����� ��������� %d (����) - %d �����", x, (x*10/warehouse.count)*10);
}