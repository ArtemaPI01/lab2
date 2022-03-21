struct Boxoffice {
	int workers;
	int count;
	char fio[100];
};
struct Boxoffice createBoxoffice(int workers, int count, char fio[100]);
struct Boxoffice enterBoxoffice();
void printBoxoffice(Boxoffice boxoffice);
int cloakBoxoffice(Boxoffice boxoffice, int x);