struct Shop {
	char name[100];
	char type[100];
	char street[100];
	char cloak[100];
};
struct Shop createShop(char name[100], char type[100], char street[100], char cloak[100]);
struct Shop enterShop();
void printShop(Shop shop);
void cloakShop(Shop shop);