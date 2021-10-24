#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <sys/utsname.h>
#include <sys/types.h>

int main(){
	printf("Número máximo de enlaces: %ld\n", pathconf("/", _PC_LINK_MAX));
	printf("Tamaño máximo de una ruta: %ld\n", pathconf("/",_PC_PATH_MAX));
	printf("Tamaño máximo de un nombre de fichero: %ld\n", pathconf("/",_PC_NAME_MAX));
	return 1;
}