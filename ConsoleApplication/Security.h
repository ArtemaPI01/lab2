struct Security {
	char org[100];
	int count;
	char items[100];
};
struct Security createSecurity(char org[100], int count, char items[100]);
struct Security enterSecurity();
void printSecurity(Security security);