struct Warehouse {
	int count;
	char products[100];
	char data[100];
};
struct Warehouse createWarehouse(int count, char products[100], char data[100]);
struct Warehouse enterWarehouse();
void printWarehouse(Warehouse warehouse);
void cloakWarehouse(Warehouse warehouse, int x);