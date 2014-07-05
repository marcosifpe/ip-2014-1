#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

struct {
    int x, y, z;
    char op;
    bool erro;
} typedef aritmetica;

void soma (aritmetica * calc);
void subtracao (aritmetica * calc);
void multiplicacao (aritmetica * calc);
void divisao (aritmetica * calc);
void iniciarv (void (*v[4])(aritmetica *));

int main(void) {
    //variaveis
    int n, op, x, y, i;
    void (*vfuncoes[4])(aritmetica *);
    aritmetica *varitmetica; 

    //abertura dos arquivos
    freopen("e13.txt", "r", stdin);
    freopen("s13.txt", "w", stdout);
    
    iniciarv(vfuncoes);
    scanf("%d", &n);
    
    //vetor para armazenar os enderecos das estruturas de aritmetica - VETORdePonteiro
    varitmetica = (aritmetica *)malloc((n)*sizeof(aritmetica));
    
    for(i=0; i<n; i++)
    {
        scanf("%d %d %d", &op, &x, &y);
        aritmetica v = {x, y, 0, '.', false};
        
        varitmetica[i] = v;
        
        vfuncoes[op](&varitmetica[i]);
        
        if(varitmetica[i].erro == false)
            printf("%d %c %d = %d\n", varitmetica[i].x, varitmetica[i].op, varitmetica[i].y, varitmetica[i].z);
        else
            printf("%d %c %d = erro\n", varitmetica[i].x, varitmetica[i].op, varitmetica[i].y);
    }
    
    free(varitmetica);
    
    //fechando os arquivos
    fclose(stdin);
    fclose(stdout);
    return 0;
}

void soma (aritmetica *calc) {
    calc->z = calc->x + calc->y;
    calc->op = '+';
    calc->erro = false;
}

void subtracao (aritmetica * calc) {
    calc->z = calc->x - calc->y;
    calc->op = '-';
    calc->erro = false;
}

void multiplicacao (aritmetica * calc){
    calc->z = calc->x * calc->y;
    calc->op = '*';
    calc->erro = false;
}

void divisao (aritmetica * calc){
    if(calc->y != 0)
    {
        calc->z = calc->x / calc->y;
        calc->op = '/';
        calc->erro=false;
    }
    else
    {
        calc->op='/';
        calc->erro = true;
    }
}

void iniciarv(void (*v[4])(aritmetica *))
{
    v[0] = soma;
    v[1] = subtracao;
    v[2] = multiplicacao;
    v[3] = divisao;
}
