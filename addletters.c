#include <stdio.h>

int value(char ch)
{
	if (ch >= 'A' && ch <= 'Z') {
		return (int)(ch - 'A' + 1);
	} else if (ch >= 'a' && ch <= 'z') {
		return (int)(ch - 'a' + 1);
	} else if (ch >= '0' && ch <= '9') {
		return (int)(ch - '0');
	} else {
		return 0;
	}
}

int main(int argc, char *argv[])
{
	int total = 0;
	printf("\"");

	int i; for (i=1; i<argc; i++) {
		const char *ptr = argv[i];
		while (*ptr) {
			total += value(*ptr);
			ptr++;
		}
		printf("%s", argv[i]);
		if (i < argc-1) printf(" ");
	}

	printf("\" = %d\n", total);
	return 0;
}
