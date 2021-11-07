#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(){
	int fich = open("ej5", O_CREAT,0645);
	if(fich == -1) return -1;
	return 0;
}
