#include <stdio.h>

int main(){
    float a;
    float b;
    float entrada;
    float saida;
    float soma;
    float somaA;
    float capacidade10 = 100;

    printf("Diga a quantidade a entrada\n");
    scanf(" %d", &entrada);
    printf("diga o nivel da agua do reservatorio A\n");
    scanf(" %f", &a);
    printf("Diga o nivel da agua do reservatorio B\n");
    scanf(" %f", &b);
    printf("Diga a quantidae da saida\n");
    scanf(" %f", &saida);

    float primeiroIfSaida = saida;
    float primeiroIfEntrada = entrada;
    float primeiroIfA = a;
    float primeiroIfB = b;









    soma = a * 0.25;
    somaA = a - soma;

    if (saida < entrada  && a >= b)
    {
        printf("Abrir valvula\n");
        printf("1");
    }
    else if (entrada > saida  &&  a > capacidade10)
    {
        printf("Abri valvula 10%%\n");
        printf("4");
    }
    else if (saida > entrada  && a >= b)
    {
        printf(" abrir 50%% da valvula\n");
        printf("2");
    }
    else if (saida = entrada && a > b)
    {
        printf("Valvula abre 10%%\n");
        printf("3");
    }
    else if (saida >= entrada &&  somaA < b)
    {
        printf("Abrir valvula 50%%\n");
        printf("3");
    }
    else if (a < b && saida < entrada )
    {
        printf("Ligar valvula\n");
        printf("Valor da saida %f \n", saida);
    }
    
    
    
    
    
    
    



}