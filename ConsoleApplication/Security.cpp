#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include "Security.h"

using namespace std;

struct Security enterSecurity() {
	Security security;
	printf("������� �����������: ");
	scanf("%s", &security.org);
	printf("\n������� ���-�� �����������: ");
	scanf("%d", &security.count);
	printf("\n������� ������������: ");
	getchar();
	gets_s(security.items);
	return security;
}

void printSecurity(Security security) {
	printf("\n���������� �� ������:\n����������� - %s\n���-�� ���������� - %d\n������������ - %s\n", security.org, security.count , security.items);
}

struct Security createSecurity(char n[100], int a, char c[100]) {
	Security security;
	strcpy(security.org, n);
	security.count = a;
	strcpy(security.items, c);
	return security;
}

