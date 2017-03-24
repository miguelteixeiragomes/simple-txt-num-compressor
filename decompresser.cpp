#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]) {
	char list[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ' ', '.', '\n', 'e', '-', '+' };
	char c;
	while (true) {
		c = getchar();
		if (c == EOF)
			break;

		putchar( list[c >> 4] );
		putchar( list[c & 0b1111] );
	}
	
	return 0;
}