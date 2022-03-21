#include "Owner.h"
#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <conio.h>
#include <Windows.h>

using namespace std;

struct Owner enterOwner() {
	Owner owner;
	printf("Введите ФИО владельца: ");
	scanf("%s", &owner.fio);
	printf("\nВведите доходы: ");
	scanf("%s", &owner.income);
	printf("\nВведите расходы: ");
	scanf("%s", &owner.expenses);
	return owner;
}

void printOwner(Owner owner) {
	printf("\nИнформация о владельце:\nФИО - %s\nДоходы - %d\nРасходы - %d\nПрибыль - %d\n", owner.fio, owner.income, owner.expenses, profitOwner(owner));
}

struct Owner createOwner(char n[100], int a, int b) {
	Owner owner;
	strcpy(owner.fio, n);
	owner.income = a;
	owner.expenses = b;
	return owner;
}

int profitOwner(Owner owner) {
	return owner.income - owner.expenses;
}

