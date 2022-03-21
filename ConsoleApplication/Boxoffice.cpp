#include "Boxoffice.h"
#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <conio.h>
#include <Windows.h>

using namespace std;

struct Boxoffice enterBoxoffice() {
	Boxoffice boxoffice;
	printf("������� ���-�� ���� �������: ");
	scanf("%d", &boxoffice.workers);
	printf("\n������� ���-�� ����: ");
	scanf("%d", &boxoffice.count);
	printf("\n������� ��� �������� �������: ");
	scanf("%s", &boxoffice.fio);
	return boxoffice;
}

void printBoxoffice(Boxoffice boxoffice) {
	printf("\n�����:\n���-�� ������� - %d\n���-�� ���� - %d\n��� �������� ������� - %s\n", boxoffice.workers, boxoffice.count, boxoffice.fio);
}

struct Boxoffice createBoxoffice(int a, int b, char n[100]) {
	Boxoffice boxoffice;
	boxoffice.workers = a;
	boxoffice.count = b;
	strcpy(boxoffice.fio, n);
	return boxoffice;
}

int cloakBoxoffice(Boxoffice boxoffice, int x) {
	if (boxoffice.count - boxoffice.workers < 0)
		return (x/ boxoffice.count)*2;
	return (x / boxoffice.workers) * 2;
}

