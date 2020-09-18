// Spy's functions

// spy struct
struct spy{
	char name_1[10]; 
	char name_2[10];
	char age[2];
	char nationality[10];
	char id[3];
}e[6];

// 2nd function to see if the 1st name and the 2nd is in the right form
void namesSpy(char *s, int size){
    char name_1[10], name_2[10]
}

// 1st function to search the Key's code
void searchSpy(){
    FILE *f1;
    int size = 0, i = 0, total = 0;
    char *c = NULL, *n;
    char s[272];    // Possible Spy data
    char keys[6][9] = { // Matrix with the Binary Keys
        "00010001",	// empty key
		"00011001",	// Cristiano Ronaldo
		"00011101",	// Messi, Cabeço
		"00011111",	// Ze Socras
		"00010111",	// Ricardo Doce
		"00010011"	// Pablo Escovar
    };

    f1 = fopen("espiao.txt", "rb");
    
    // Memory allocation of the file
    while(!feof(f1)){
        c = (char *)realloc(c, ++tam*sizeof(char));
        fscanf(f1, "%c", &c[tam-1]);
    }

    // Searching the binary keys in the file
    for(i = 0; i < 6; i++){
        n = c;
        printf("Key: %s\n", keys[i]);
        while((n = strstr(n, keys[i])) != NULL){
				n += strlen(keys[i]);
			    strncpy(s, n, 272);
			    namesSpy(s, 272);
		}
    }

    free(c);
    printf("Done\n");
}