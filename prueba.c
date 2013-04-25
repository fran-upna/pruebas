#include <stdio.h>

int main(int argc, char *argv[]) {

	FILE *fd = fopen("/tmp/prueba.txt", "r");
	fclose(fd);

	return 0;
}

