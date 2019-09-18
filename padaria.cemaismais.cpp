#include <stdlib.h>
#include <stdio.h>

int main(){
	
	
	int pao, broa;
	float broaP, paoP, poupanca, vendasT;
	
	printf("Informe a quantidade de paes vendidos: ");
	scanf("%d", &pao);
	
	printf("Informe a quantidade de broas que voce vendeu: ");
	scanf("%d", &broa);
	
	paoP = pao * 0.12;
	broaP = broa * 1.5;
	
	vendasT = paoP + broaP;
	poupanca = vendasT * 0.1;
	
	printf("Voce vendeu um total de: %.2f \n",vendasT);
	printf("Sua poupanca deve receber : %.2f \n",poupanca);
	
	
	//printf("vc vendeu %.2f em paes \n",paoP);
	
	
	system("pause");
	return 0;
}
