struct Owner {
	char fio[100];
	int income;
	int expenses;
};
struct Owner createOwner(char name[100], int income, int expenses);
struct Owner enterOwner();
void printOwner(Owner owner);
int profitOwner(Owner owner);