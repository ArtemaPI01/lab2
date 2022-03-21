#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include "Security.h"

using namespace std;

struct Security enterSecurity() {
	Security security;
	printf("Введите организацию: ");
	scanf("%s", &security.org);
	printf("\nВведите кол-во сотрудников: ");
	scanf("%d", &security.count);
	printf("\nВведите оборудование: ");
	getchar();
	gets_s(security.items);
	return security;
}

void printSecurity(Security security) {
	printf("\nИнформация об охране:\nОрганизация - %s\nКол-во охранников - %d\nОборудование - %s\n", security.org, security.count , security.items);
}

struct Security createSecurity(char n[100], int a, char c[100]) {
	Security security;
	strcpy(security.org, n);
	security.count = a;
	strcpy(security.items, c);
	return security;
}

