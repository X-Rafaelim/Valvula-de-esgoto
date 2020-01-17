#include <stdio.h>

int main(){
    float a;
    float b;
    float entrada;
    float saida;
    float soma;
    float soma2;

    float capacidade10 = 100;

    printf("Diga a quantidade a entrada\n");
    scanf(" %f", &entrada);
    printf("diga o nivel da agua do reservatorio A\n");
    scanf(" %f", &a);
    printf("Diga o nivel da agua do reservatorio B\n");
    scanf(" %f", &b);
    printf("Diga a quantidae da saida\n");
    scanf(" %f", &saida);

    if (entrada >= 50 || entrada < 0 && saida >=30 || entrada < 0 && a >= 1000 || entrada < 0 && b >= 1000 || entrada < 0)
    {
        main();
    }
    

    soma = b * 0.25;
    soma2 = a - soma;





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
    else if (saida >= entrada &&  soma2 < b)
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