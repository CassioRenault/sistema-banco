#include <stdio.h>
#include <string.h>
int main()
{
    char nome[20];
    char agencia[20] = "1234";
    char agenciainput[20];
    char conta[20] = "5678";
    char containput[20];
    char senha[20] = "123456";
    char senhainput[20];
    char repeat;
    int op;
    
    printf("\nDigite seu primeiro nome:\n");
    scanf("%s",nome);
    printf("\nNumero da agencia:\n");
    scanf("%s",agenciainput);
    if(strcmp(agencia,agenciainput) == 0)
    {
        printf("\nNumero da conta:\n");
        scanf("%s",containput);
        if(strcmp(conta,containput) == 0)
        {
            printf("\nSenha:\n");
            scanf("%s",senhainput);
            if(strcmp(senha,senhainput) == 0)
            {
               do{
                printf("\nBem vindo %s\n",nome);
                        
            printf("\nO que deseja fazer?\n");
            printf("\n\t1 - Saldo\n\t2 - Extrato\n\t3 - Sair\n:");
            scanf("%d", &op);           
            switch(op){
                case 1:
                printf("\nSaldo:");
                printf("\nR$1000.00\n");
                    break;
                case 2:
                    printf("\nExtrato:");
                printf("\n01/01 +R$500.00");
                printf("\n02/01 +R$500.00\n");
                    break;
                case 3:
                    printf("\nSair\n");
                        
                } 
                printf("\nDeseja realizar outra operacao? (s/n)\n:");
                    scanf(" %c", &repeat);
 
            }    while(repeat == 's');               
            



            }
            else{
        printf("\nSenha invalida!\n");
    }
        }
        else{
        printf("\nNumero da conta nao encontrado!\n");
    }
    }
    else{
        printf("\nNumero da agencia nao encontrado!\n");
    }

}