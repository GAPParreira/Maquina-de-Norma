#include<stdio.h>
#include<stdlib.h>

//Prototipacao


//Macros Criadas
#define ADC(n) n=n+1
#define SUB(n) n=n-1
#define ZERO(n) n==0 ? 1 : 0


int main()
{
    int A=0,B=0,C=0,D=0;
    char OP;
    printf("Digite o operador: ");
    scanf("%s",&OP);
    printf("Digite o 1 numero: ");
    scanf("%d",&A);
    printf("Digite o 2 numero: ");
    scanf("%d",&B);
    printf("-------Registrador A:%d -------Registrador B:%d -------Registrador C:%d -------Registrador D:%d\n",A,B,C,D);
    system("pause");
    switch(OP)
    {
        case '+':
            while(B>0)
            {
                    ADC(A);
                    SUB(B);
                    printf("-------Registrador A:%d -------Registrador B:%d -------Registrador C:%d -------Registrador D:%d\n",A,B,C,D);
                    system("pause");
            }
            printf("\nO Resultado e %d\n",A);
            break;
        case '-':
            while(B>0)
            {
                    SUB(A);
                    SUB(B);
                    printf("-------Registrador A:%d -------Registrador B:%d -------Registrador C:%d -------Registrador D:%d\n",A,B,C,D);
                    system("pause");
            }
            printf("\nO Resultado e %d\n",A);
            break;
        case '*':
            while(A>0)
            {
                    ADC(C);
                    SUB(A);
                    printf("-------Registrador A:%d -------Registrador B:%d -------Registrador C:%d -------Registrador D:%d\n",A,B,C,D);
                    system("pause");
            }
            while(C>0)
            {
                while(B>0)
                {
                    ADC(A);
                    ADC(D);
                    SUB(B);
                    printf("-------Registrador A:%d -------Registrador B:%d -------Registrador C:%d -------Registrador D:%d\n",A,B,C,D);
                     system("pause");
                }
                while(D>0)
                {
                    ADC(B);
                    SUB(D);
                    printf("-------Registrador A:%d -------Registrador B:%d -------Registrador C:%d -------Registrador D:%d\n",A,B,C,D);
                     system("pause");
                }
                SUB(C);
                printf("-------Registrador A:%d -------Registrador B:%d -------Registrador C:%d -------Registrador D:%d\n",A,B,C,D);
                 system("pause");
            }
            printf("\nO Resultado e %d\n",A);
            break;
    }
}

