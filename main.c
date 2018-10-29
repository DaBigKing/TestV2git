//#include <stdafx.h>
#include <stdbool.h>
#include <string.h>
#include <dos.h>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "header.h"


int main(int argc, _TCHAR* argv[])

{	int Test;

	Flag=false;

	while(Flag==false){

	system("cls");

	printf("************");

	printf("*CODE MORSE*");

	printf("************");

	printf("\n1 : pour creer un code morse\n2 : pour transcrire un code morse\n3 : pour transcrire un alphabet\n0 : pour quitter l'application\n");

		scanf("%d",&Test);

		switch (Test){

		case 1 :

			fflush(stdin);

			CreerMorse();

			break;


		case 2 :

			fflush(stdin);

			TranscrireMorse();

			break;

        case 3 :

             TranscrireAlpha();
		case 0 :

			Flag=true;

		}


	}



	return 0;

}
