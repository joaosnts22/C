                   //ideia do exercicio era receber 10 numeros, filtrar eles em 2 vetores, pares e impares
                   //e logo após calcular suas devidas médias e variância de cada vetor.

#include <stdio.h>
                  //ALUNO JOAO PEDRO DOS SANTOS FONSECA - TRABALHO FEITO SOZINHO
main()
 {
	//criando variaveis para os numeros recebidos (dados), numeros pares (x) e numeros impares (y)
    int dados[10],x[10],y[10];
	//quadrado da diferenca de X e Y
    int quadradox,quadradoy;
	//s(variancia) de x e de y
    int sx,sy;
	//medias e somas de x e y
    int mediax,somax;
    int mediay,somay;
	//variaveis usadas apenas para somar no for
    int j,k = 0;
    int i,n;
    
    printf("ALUNO JOAO PEDRO DOS SANTOS FONSECA - TRABALHO FEITO SOZINHO\n");
    
    printf("Digite 10 numeros :\n",n);
    //repetir scanf 10 vezes
    for(i=0;i<10;i++){
	    scanf("%d",&dados[i]);
	}
	//procurar numeros pares
    for(i=0;i<10;i++){
	if (dados[i]%2 == 0){
	   x[j] = dados[i];
	   j++;
	}
	//ignorar numeros impares
	else{
	   y[k] = dados[i];
	   k++;
	}
    }
    printf("\nNumeros do vetor X(pares): \n");
    for(i=0;i<j;i++){
	printf("%d ",x[i]);
    }
    printf("\n----------------------");

    printf("\nNumeros do vetor Y(impares):\n");
    for(i=0;i<k;i++){
	printf("%d ", y[i]);
    }
    printf("\n----------------------");
    //for para calcular soma do vetor X
	for(i=0;i<j;i++){
    somax = somax + x[i];
	}
	mediax = somax/j;
	printf("\nMedia do vetor x: %d",mediax);
	printf("\n----------------------");
	
    //for para calcular soma do vetor Y
	for(i=0;i<k;i++){
    somay = somay + y[i];
	}
	mediay = somay/k;
	printf("\nMedia do vetor y: %d",mediay);
	printf("\n----------------------");
	//calculando variancia do vetor X
	for(i=0;i<j;i++){
		//calculando primeiro (Xi - MediaX)^2 pra depois dividir
		quadradox = quadradox + (x[i] - mediax) * (x[i] - mediax);
	}
	sx = quadradox / j;
	printf("\nVariancia do vetor X: %d",sx);
	printf("\n----------------------");
	//calculando variancia do vetor Y
	for(i=0;i<k;i++){
		quadradoy = quadradoy + (y[i] - mediay) * (y[i] - mediay);
	}
	sy = quadradoy / k;
	printf("\nVariancia do vetor Y: %d",sy);
    
 }
