#include "Owner.h"
#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <conio.h>
#include <Windows.h>

using namespace std;

struct Owner enterOwner() {
	Owner owner;
	printf("������� ��� ���������: ");
	scanf("%s", &owner.fio);
	printf("\n������� ������: ");
	scanf("%s", &owner.income);
	printf("\n������� �������: ");
	scanf("%s", &owner.expenses);
	return owner;
}

void printOwner(Owner owner) {
	printf("\n���������� � ���������:\n��� - %s\n������ - %d\n������� - %d\n������� - %d\n", owner.fio, owner.income, owner.expenses, profitOwner(owner));
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

