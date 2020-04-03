#include <stdio.h>
#include <stdlib.h>
#include <math.h>


   int main (void){

        printf("Seu carro e' um cachaceiro, descubra aqui\n");

        float consumo, litro, km;

        printf("Digite a quilometragem\n");
        scanf("%f", &km);
        
        printf("Digite quantos litros\n");
        scanf("%f", litro);

        consumo = km/litro;

        printf("O consumo é de %f", consumo);

        return 0;


    }