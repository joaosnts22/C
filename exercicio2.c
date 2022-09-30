#include<stdio.h>

int calcFatorial(n){
	int fatorial =1;
	while(n>1){
		fatorial*=n--;
	}
	return fatorial;
}

main(){
	int x;
	int n;
	while(x != 2){
	printf("\n----------------------------\n");
	printf("\nPROGRAMA PARA CALCULAR FATORIAL\n");
	printf("\n----------------------------\n");
	printf("Digite 1 para comecar o calculo.\n");
	printf("Digite 2 para sair.\n");
	scanf("%d",&x);
	if(x == 2){
		return 0;
	}else if(x == 1){
		printf("Digite um numero entre 1 e 10: ");
		scanf("%d",&n);
		if(n<1 || n>10){
			printf("Numero nao esta entre 1 e 10");
		}
		else{
			printf("%d",calcFatorial(n));
		}
	}
}
}

