#include <stdio.h>
#include <stdlib.h>
#define true 1
#define NOTICE printf("Press Ctrl+C to leave program\n");
#define PAUSE printf("Press Enter to continue.....\n"); fgetc(stdin);

int main(){
	NOTICE
	PAUSE
	while(true)
		printf("H");
}
