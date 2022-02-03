#include <unistd.h>

void printbits(unsigned char octet) {
	unsigned char i;
	char cs[9];
	
	i = 0;
	while (i < 8) {
		cs[i] = '0' + (octet & 128 ? 1 : 0);
		octet = octet << 1;
		i++;
	}
	cs[8] = '\n';
	write(1, cs, 9);
}
