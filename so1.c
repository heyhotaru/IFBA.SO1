#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	int n1, n2;
	
	system("cls");
	system("COLOR 0A");
	
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\nOlá, infomática\n");
	Sleep(2000);
	
	printf("\nINICIAR SISTEMA...\n");
	Sleep(2000);
	
	printf("\nChecagem de memoria RAM\n");
	Sleep(2000);
	
	printf("..........\n");
	
	Sleep(2000);
 
 
	Sleep(5000);
	system("cls");	
	printf("Carregando 1% ");Sleep(500);system("cls");
	printf("Carregando 2% ");Sleep(500);system("cls");
	printf("Carregando 3% ");Sleep(500);system("cls");
	printf("Carregando 4% ");Sleep(500);system("cls");
	printf("Carregando 5% ");Sleep(500);system("cls");
		
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
scanf("%i",&opcao);

if(opcao == 1){
	printf("Iniciando sistema via USB\n");Sleep(3000);
} 

else if(opcao == 2){
	printf("Iniciando sistema via Disco Rigido");Sleep(3000);	
}

else if(opcao == 3){
	printf("Iniciando sistema via CD-ROM");Sleep(3000);	
}

else{
	printf("OPÇÃO INVÁLIDA!!!");Sleep(3000);
}
 

 
                                            
	return 0;
	
}