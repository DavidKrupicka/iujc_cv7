#include <stdlib.h>
#include <stdio.h>
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#include <string.h>


int pocetZaz(char *str){
	int delka = strlen(str);
	int pocet = 0;

	for (size_t i = 0; i < delka; i++)
	{
		if (str[i] == ';'){
			pocet++;
		}
	}
	pocet++;
	return pocet;
}

int main(int argc, char *argv[]){
	FILE *f;
	char **poleStr, radek[100], *token;

	f = fopen("data.csv", "r");
	fgets(radek, 100, f);
	int pocet = pocetZaz(radek);
	poleStr = calloc(pocet, sizeof(char*));

	while (feof(f) == 0){
		fgets(radek, 100, f);
		token = strtok(radek, ";"); //v uvozovkach protoze jich budu mozna hledat vic (vic oddelovacu)

		for (size_t i = 0; i < pocet; i++){
			if (poleStr[i] != NULL){
				free(poleStr[i]);
			}
			poleStr[i] = calloc(strlen(token) + 1, sizeof(char));
			strcpy(poleStr[i], token);
			token = strtok(NULL, ";");
		}
		for (size_t i = 0; i < pocet; i++){
			puts(poleStr[i]);
		}
	}
	for (size_t i = 0; i < pocet; i++){
		free(poleStr[i]);
	}
	free(poleStr);

	_CrtDumpMemoryLeaks(); //zkus zakomentovat vsechny free a uvidis co zbyva v pameti bez dealokace

	system("pause");

	return 0;
}
