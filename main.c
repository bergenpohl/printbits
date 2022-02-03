#include "printbits.c"

int main(int argc, char *argv[]) {
	if (argc == 2 && argv[1][1] == '\0') printbits(argv[1][0]);
	return 0;
}
