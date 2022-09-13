#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "Lista.c"

int main()
{
    int i, pos, n;
    SList *PonteiroLista = (SList *)malloc(sizeof(SList));

    // Escolher Opção
    int EscolhaOpcao;
    while (EscolhaOpcao != 11)
    {
        printf("\nQual opção você quer:\n");
        Sleep(2000);
        printf("1-Criar Lista:\n");
        Sleep(500);
        printf("2-Adicionar Elementos na Lista/Definir seu Tamanho:\n");
        Sleep(500);
        printf("3-Buscar um Elemento na Lista:\n");
        Sleep(500);
        printf("4-Localizar Elemento na Lista Pela sua Posição:\n");
        Sleep(500);
        printf("5-Inserir Elemento na Lista:\n");
        Sleep(500);
        printf("6-Retirar um elemento de uma determinada posição:\n");
        Sleep(500);
        printf("7-Verificar se a Lista está Vazia:\n");
        Sleep(500);
        printf("8-Verificar se a Lista está Cheia:\n");
        Sleep(500);
        printf("9-Saber qual o Tamnho Atual da Lista:\n");
        Sleep(500);
        printf("10-Printar a Lista:\n");
        Sleep(500);
        printf("11-Sair do Programa:\n");
        Sleep(500);
        scanf("%d", &EscolhaOpcao);

        if (EscolhaOpcao == 1)
        {
            // Criar Lista
            CriarLista(PonteiroLista);
            Sleep(1000);
        }

        else if (EscolhaOpcao == 2)
        {
            // Adicionar Elementos na Lista
            AdicionarLista(PonteiroLista);
            Sleep(1000);
        }

        else if (EscolhaOpcao == 3)
        {
            // Procurar Elemento na Lista
            Sleep(1000);
            printf("Qual Elemento você quer buscar na lista:");
            scanf("%d", &pos);
            printf("\n");
            i = BuscarElemento(PonteiroLista, pos);
            if (i == -1)
            {
                printf("Posição na Lista não exite/Não possui Elemento!\n");
            }
            else
            {
                printf("O Elemento %d Pertence a Lista", i);
            }
            Sleep(1000);
        }

        else if (EscolhaOpcao == 4)
        {
            // Procurar Elemento Com Base Na Sua Posição
            Sleep(1000);
            printf("\nQual Elemento Esta na Posição:");
            scanf("%d", &n);
            printf("\n");
            if (-1 == (i = LocalizarElemento(PonteiroLista, n)))
            {
                printf("Posição Não Existe Nesta Lista!%d", i);
            }
            else
            {
                printf("Na Posição:%d,esta o Elemnto:%d", n, i);
                printf("\n");
            }
            Sleep(1000);
        }

        else if (EscolhaOpcao == 5)
        {
            // Adicionar Elemento na Lista
            Sleep(1000);
            printf("\nInserir Elemento um na Lista:");
            scanf("%d", &n);
            printf("\n");
            printf("Em qual Posição:");
            scanf("%d", &pos);
            printf("\n");
            InserirElementoList(PonteiroLista, n, pos);
            for (i = 0; i < PonteiroLista->TamnhoAtualList; i++)
            {
                printf("%d", PonteiroLista->Lista[i]);
                printf("\n");
            }
            Sleep(1000);
        }

        else if (EscolhaOpcao == 6)
        {
            // Deletar Elemento
            Sleep(1000);
            printf("\nDeletar elemento,Digite a Posição do mesmo:");
            scanf("%d", &pos);
            printf("\n");
            DeletarElementoLista(PonteiroLista, pos);

            for (i = 0; i < PonteiroLista->TamnhoAtualList; i++)
            {
                printf("%d", PonteiroLista->Lista[i]);
                printf("\n");
            }
            Sleep(1000);
        }

        else if (EscolhaOpcao == 7)
        {
            // Verificar se Alista Está Vazia
            VerificarListVazia(*PonteiroLista);
            Sleep(1000);
        }

        else if (EscolhaOpcao == 8)
        {
            VerificarListCheia(*PonteiroLista);
        }

        else if (EscolhaOpcao == 9)
        {
            TamanhoLista(PonteiroLista);
        }

        else if (EscolhaOpcao == 10)
        {
            PrintarLista(PonteiroLista);
        }
    }
    Sleep(1000);
    printf("Tchau Volte Sempre!!!");

    return 0;
};