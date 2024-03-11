// WECTON DA SILVA SANTOS


#include <stdio.h>
#include <stdlib.h>


	float acimaMedia(int tamanho, float *vetor, float media){
			for(int i = 0; i < tamanho; i++){
				if(vetor[i]>=media){
					printf("%.0f ", vetor[i]);
				}
			}
	}
	
	float calcMedia (int tamanho, float *vetor1){
		float soma = 0;
		float media;
			for(int i = 0; i < tamanho; i++){
				soma = soma + vetor1[i];
			}
		media = soma/tamanho;
		return media;
	}
	
	
	int main(){
		float media1;
		float media2;
		float vetor1[12] = {23,11,34,18,9,10,14,17,21,3,37,53};
		float vetor2[8] = {45, 8, 12, 123, 54, 28, 75, 2};
	
		
		printf("Media do Vetor 1 = %.2f\n",calcMedia(12,vetor1));
		media1 = calcMedia(12,vetor1);
		printf("%f\n",acimaMedia(12,vetor1, media1));

				

		
		printf("\n\nMedia do Vetor 2 = %.2f\n",calcMedia(8,vetor2));	
		media2 = calcMedia(8,vetor2);
		printf("%f\n",acimaMedia(8,vetor2, media2));

		
		
		
	}
