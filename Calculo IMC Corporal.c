#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese-brazilian"); //Deixei por padrao o Pt-Br, porem pode ser modificado conforme a necessidade
	
	struct dadosPaciente {
	float peso;
	float altura;
	float imc;
	}; 
	struct dadosPaciente p;
	printf("================================================\n");
	printf("|    ****      CALCULE SEU IMC!      ****      |\n");
	printf("================================================\n");

			printf("Informe seu peso : ");
			scanf("%f", &p.peso);
				printf("Informe sua altura : ");
					scanf("%f", &p.altura);
								
	p.imc = p.peso / (p.altura * p.altura);
	
	if (p.imc < 18.5){
		printf("Seu IMC : %.1f\n", p.imc);
			printf("Abaixo do peso ideal ");
					}
		else if (p.imc > 19.0 && p.imc < 24.9){
			printf("Seu IMC : %.1f\n", p.imc);
				printf("Peso Ideal! Parabens! ");
						}
			else if (p.imc > 25.0 && p.imc < 29.9){
				printf("Seu IMC : %.1f\n", p.imc);
					printf("Levemento acima do peso - Sobrepeso ");
    						}
				else if (p.imc > 30.0 && p.imc < 34.9){
					printf("Seu IMC : %.1f\n", p.imc);
						printf("Obesidade (Grau I) ");
								}
					else if (p.imc > 35.0 && p.imc < 39.9){
						printf("Seu IMC : %.1f\n", p.imc);
							printf("Obesidade Severa (Grau II)");
									}
						else if (p.imc > 40.0) {
							printf("Seu IMC : %.1f\n", p.imc);
								printf("Obesidade Morbida (Grau III)");
										}
			}
