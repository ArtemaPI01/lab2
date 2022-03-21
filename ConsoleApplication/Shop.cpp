#define _CRT_SECURE_NO_WARNINGS
#include "Shop.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

struct Shop enterShop() { 
	Shop shop;
	printf("Введите название: ");
	scanf("%s", &shop.name);
	printf("\nВведите тип: ");
	scanf("%s", &shop.type);
	printf("\nВведите улицу: ");
	scanf("%s", &shop.street);
	printf("\nВведите часы работы: ");
	scanf("%s", &shop.cloak);
	return shop;
}

void printShop(Shop shop) { 
	printf("\nИнформация о магазине:\nНазвание - %s\nТип - %s\nУлица - %s\nЧасы работы - %s\n", shop.name, shop.type, shop.street, shop.cloak);
}

struct Shop createShop(char n[100], char t[100], char s[100], char c[100]) {
	Shop shop;
	strcpy(shop.name, n);
	strcpy(shop.type, t);
	strcpy(shop.street, s);
	strcpy(shop.cloak, c);
	return shop;
}

void cloakShop(Shop shop) {
	char str1[5];
	char str2[5];
	int k=0;
	for (int i = 0; i < 5; i++)
	{
		if (i == 2) i++;
		str1[k] = shop.cloak[i];
		str2[k] = shop.cloak[i + 6];
		k++;
	}
	int a = atoi(str2) / 100 - atoi(str1) / 100;
	int b = atoi(str2) % 100 - atoi(str1) % 100;
	if (b < 0) {
		b += 60;
		a--;
	}
	printf("\nЧасы работы - %s\nЧасы - %d\nМинуты - %d\n", shop.cloak, a,b);
}