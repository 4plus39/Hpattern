#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define PAUSE printf(" Press \'Ctrl-C\' to leave program\n");
#define START printf(" Press \'Enter\' to continue ......\n"); fgetc(stdin);
#define PRINT while(TRUE){ printf("H"); }

int main(){
    PAUSE
    START
    PRINT
}

