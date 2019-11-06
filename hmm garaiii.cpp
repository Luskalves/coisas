#include <stdlib.h>
#include <time.h>
#include <stdio.h>

//ASSINATURA DE FUNÇÕES
void bubbleSort(int v[],int tam);

void printaVetor(int vet[], int tam);

int main(){
	
	FILE *arquivo;
	int op;
	int *vet;
	
	do{
		printf("\nOrdenacao - SELECIONE AS OPCOES\n");
		printf("1- CRIAR ARQUIVO\n");
		printf("2- CARREGAR E ORDENAR\n");
		printf("3- SAIR\n");
		scanf("%d", &op);
	
		//GERAR E GRAVAR ARQUIVO
		if(op == 1){
			
			int qtdElem;
			
			printf("QUANTIDADE DE NUMEROS PSEUDOALEATOR4IOS: ");
			scanf("%d", &qtdElem);
			
			//ABRIR O ARQUIVO
			
			arquivo = fopen("numeros_aleatorios.txt","w");
			
			//VALIDAÇÃO
			
			if(arquivo == NULL){
				printf("ERRO! o arquivo nao foi aberto!");
				
			}
			
			//CRIAR OS VALORES ALEATORIOS
			srand(time(NULL));
			
			//GRAVAR NO ARQUIVO
			
			for(int i = 0; i< qtdElem; i++){
				fprintf(arquivo,"%d\t", rand() % 10000);
			}
			
			printf("ARQUIVO CRIADO E PREENCHIDO\n");
			
			//FECHAR O ARQUIVO
			
			fclose(arquivo);
			
			
		}
		
		
		//CARREGAR E ORDENAR O ARQUIVO
		if(op == 2){
			
			printf("CARREGANDO E ORDENANDO\n");
			
			//ABRIR O ARQUIVO
			
			arquivo = fopen("Numeros_aleatorios.txt","r");
			if (arquivo == 	NULL)
				printf("ERRO! - arquivo não encontrado!\n");
				
			int num;
			int qtdNum = 0;
			
			//CONTAR A QUANTIDADE DE NUMEROS NO ARQUIVO
			while(fscanf(arquivo , "%d", &num) == 1){
				qtdNum++;
			}
			
			//CRIAR UM VETOR DINAMICO
			vet = (int*)malloc(qtdNum*sizeof(int));
			
			//PREENCHER O VETER VET
			for(int i= 0;i< qtdNum;i++){
				fscanf(arquivo,"%d",&num);
				vet[i] = num;
				
			}
			
			printf("\n------- VETOR ANTES DA ORDENACAO -------\n");
			printaVetor(vet,qtdNum);
			
			//CHAMANDO METODO BOLHA DE ORDENAÇÃO
			bubbleSort(vet,qtdNum);
			
			printf("\n------- VETOR APOS A ORDENACAO -------\n");
			printaVetor(vet,qtdNum);
			
			fclose(arquivo);
			
		}
		
	}while(op != 3);
	
	free(vet);
	return(0);
	}
	
	void bubbleSort (int v[], int tam) {
    
    int k, j, aux;

    for (k = 1; k < tam; k++) {
        
        for (j = 0; j < tam - k; j++) {
           
            if (v[j] > v[j + 1]) {
                aux      = v[j];
                v[j]     = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}
	void printaVetor(int vet[], int tam){
    
    for (int k = 0; k < tam; k++) 
        printf("%d\t ", vet[k]); 
	
}
