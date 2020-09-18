// Main lib
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "spy.h"
#include "mis.h"

// User Menu
int menu(){
    int option;
	printf("-------------------------E.S.C.U.D.O-------------------------\n"
	        "-------------------------------------------------------------\n"
	        "1 - Decrypt binary files\n"
	        "2 - Access the decrypted spy file\n"
	        "3 - Access the decrypted missons file\n"
	        "4 - Exit\n"
	        "-------------------------------------------------------------\n"
	        "-------------------------E.S.C.U.D.O-------------------------\n");
	do{
        // Only accepts integers, see https://stackoverflow.com/questions/28917175/accepting-only-integer-in-c
        printf("Option: ");
        scanf("%d", &option);
	}while( option < 1 || option > 4);
	switch(option){
		case 1:
			printf("-------------------------------------------------------------\n"
			        "-------------------------------------------------------------\n"
			        "Decrypting binary spy file--------------------------------------\n");
			//pesquisaE();
			printf("Decrypting binary mission file----------------------------------\n");
			//pesquisaO();
        // Se não existe o ficheiro dá erro
		case 2:
			//espioesd.txt
			printf("2\n");
			break;
		// Se não existe o ficheiro dá erro
        case 3:
			//opsd.txt
			printf("3\n");
			break;
		case 4:
			printf("Exit....\n");
			break;
	}
}