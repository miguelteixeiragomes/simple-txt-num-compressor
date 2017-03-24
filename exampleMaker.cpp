#include <stdio.h>


int main() {
	char list[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ' ', '.', '\n', 'e', '-', '+' };

	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 16; j++) {
			putchar( list[i] );
			putchar( list[j] );
		}
	}
	
	return 0;
}