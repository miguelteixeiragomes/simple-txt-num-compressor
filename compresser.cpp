#include <stdio.h>
#include <stdlib.h>


unsigned char comp(char in) {
	switch (in) {
	case '0':
		return 0;
	case '1':
		return 1;
	case '2':
		return 2;
	case '3':
		return 3;
	case '4':
		return 4;
	case '5':
		return 5;
	case '6':
		return 6;
	case '7':
		return 7;
	case '8':
		return 8;
	case '9':
		return 9;
	case ' ':
		return 10;
	case '.':
		return 11;
	case ',':
		return 12;
	case 'e':
		return 13;
	case '-':
		return 14;
	case '+':
		return 15;
	default:
		printf("Invalid character used in input: %c", in);
		exit(1);
	}
}


int main(int argc, char* argv[]) {
	char c1, c2;
	while (true) {
		c1 = getchar();
		if (c1 == EOF)
			break;

		c2 = getchar();
		if (c2 == EOF) {
			putchar( (char)((comp(c1) << 4) | comp(' ')) );
			break;
		}

		putchar( (char)((comp(c1) << 4) | comp(c2)) );
	}
	
	return 0;
}