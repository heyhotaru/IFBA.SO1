#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main()
{

	system("cls");
	system("COLOR 0A");


	setlocale(LC_ALL, "Portuguese");

	printf("\tOlá, infomática\n");
	Sleep(2000);
	printf("\tINICIAR SISTEMA...\n");
	Sleep(2000);
	printf("\tChecagem de memoria RAM\n");
	Sleep(2000);
	printf("\t..........\n");
	Sleep(2000);


	Sleep(5000);
	system("cls");
	printf("Carregando 1% ");
	Sleep(500);
	system("cls");
	printf("Carregando 2% ");
	Sleep(500);
	system("cls");
	printf("Carregando 3% ");
	Sleep(500);
	system("cls");
	printf("Carregando 4% ");
	Sleep(500);
	system("cls");
	printf("Carregando 5% ");
	Sleep(500);
	system("cls");

	printf("#     #\n");
	printf("#     #  ####  #####   ##   #####  #    #\n");
	printf("#     # #    #   #    #  #  #    # #    #\n");
	printf("####### #    #   #   #    # #    # #    #\n");
	printf("#     # #    #   #   ###### #####  #    #\n");
	printf("#     # #    #   #   #    # #   #  #    #\n");
	printf("#     #  ####    #   #    # #    #  ####  \n");


	system("COLOR 2F");
	printf("DIGITE UMA OPÇÃO DE BOOT: \n");
	printf("\n \t1 - USB\n \t2 - HDD\n \t3 - CD-ROM\n");
	int opcao;
	scanf("%i", &opcao);

	switch(opcao)
	{


	case 1:
		printf("\tIniciando sistema via USB\n");
		Sleep(3000);
		break;

	case 2:
		printf("\tIniciando sistema via Disco Rigido\n");
		Sleep(3000);
		break;


	case 3:
		printf("\tIniciando sistema via CD-ROM\n");
		Sleep(3000);
		break;


	default:
		printf("\tOpção invalida\n");
		printf("\tReniciando o sistema\n");
		break;


	}




	return 0;

}
