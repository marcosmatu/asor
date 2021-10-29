#include <stdio.h>
#include <string.h>

int main(){
	for(int i = 1; i <= 255; i++){
		printf("Error %i: %s\n",i,strerror(i));
	}
	return 1;
}
