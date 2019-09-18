#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
	printf("------------\n");
	printf("banco foda\n");
	printf("------------\n");
	
	int numero;
	float saldo, acao,retirada,deposito;
	
	printf("Informe o numero da sua conta: ");
	scanf("%d", &numero);
		
	while(true){
				
		printf("O seu numero : %d \n",numero);
		printf("Seu saldo e igua a: %.2f \n",saldo);
		printf("Digite 1 para deposito e 2 para retirada! \n");
		printf("Que operacao voce gostaria de fazer: ");
		scanf("%f", &acao);
		printf("\n");
		
		if (acao == 1){
			printf("\ninforme o quanto voce gostaria de depositar: ");
			scanf("%f",&deposito);
			saldo = saldo + deposito;
		}
		
		if(acao == 2){
			printf("\ninforme o quanto voce gostaria de retirar: ");
			scanf("%f",&retirada);
			saldo = saldo - retirada;
			if(saldo <= -1){
				printf("Conta estourada!\n");
				break;
			}	
		}
		
		if (acao == 3){
			printf("Obrigado por usar o banco foda! \n");
			break;
		}
		if (acao >= 4 or acao <=0){
			printf("seu burro \n");
		}
	}
	
	system("pause");
	return 0;
}
