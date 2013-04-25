#include <stdio.h>

int main(int argc, char *argv[]) {

	FILE *fd = fopen("/tmp/prueba.txt", "r");
	fprintf(fd, "Hola2\n");
	fclose(fd);

	return 0;
}

