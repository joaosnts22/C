                                   //menu simples e calculo de média

#include<stdio.h>

int calcMedia(int av1,int av2){
	int media = (av1 + av2)/2;
	printf("Media: %d",media);
	if(media >=0 && media<7){
		printf("\n              Reprovado.");
	}else if(media >=7 && media<=10){
		printf("\n              Aprovado.");
	}else{
	printf("\nNota(s) invalida(s).");	
	}
}

main(){
	int x;
	int av1;
	int av2;
	while(x != 2){
	printf("\n----------------------------\n");
	printf("\nPROGRAMA PARA CALCULAR MEDIA\n");
	printf("\n----------------------------\n");
	printf("Digite 1 para comecar o calculo.\n");
	printf("Digite 2 para sair.\n");
	scanf("%d",&x);
	if(x == 2){
		return 0;
	}else if(x == 1){
		printf("Digite a nova da av1: \n");
		scanf("%d",&av1);
		printf("Digite a nota da av2: \n");
		scanf("%d",&av2);
		calcMedia(av1,av2);
	}
}
}
