#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <sys/utsname.h>
#include <sys/types.h>

int main(){
	printf("Longitud máxima de los argumentos: %ld\n", sysconf(_SC_ARG_MAX));
	printf("Número máximo de hijos: %ld\n", sysconf(_SC_CHILD_MAX));
	printf("Número máximo de ficheros: %ld\n", sysconf(_SC_OPEN_MAX));
	return 1;
}
