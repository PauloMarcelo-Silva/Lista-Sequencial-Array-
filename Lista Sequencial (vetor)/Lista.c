#include "ListaSequencial.h"

void CriarLista(SList *PonteiroLista){
    PonteiroLista->TamnhoAtualList = 0;
};

void VerificarListVazia(SList PonteiroLista){
    if(PonteiroLista.TamnhoAtualList == 0){
		printf("\nA lista está Vazia!\n");
	}
	else{
		printf("\nLista não está Vazia!\n");
	}
};

void VerificarListCheia(SList PonteiroLista){
    if(PonteiroLista.TamnhoAtualList == MAX-1){
       printf("A Lista Ainda Possui Espaço");
    }
    else{
        printf("A sua Lista Está Cheia!");
    }
};

void AdicionarLista(SList *PonteiroLista)
{
    int i = 0;
    int TamanhoLista;
    printf("Qual Tamanho Que vc quer q a lista tenha:");
    scanf("%d",&TamanhoLista);
    printf("\n");

    printf("Adicione Valores Para a Lista:\n");
    for (i = 0; i < TamanhoLista; i++)
    {
        scanf("%d", &PonteiroLista->Lista[i]);
    }

    PonteiroLista -> TamnhoAtualList = TamanhoLista;
};

int BuscarElemento(SList *PonteiroLista, int pos)
{
    if (pos > PonteiroLista->TamnhoAtualList || pos <= 0)
    {
        return -1;
    }
    else
    {
        return PonteiroLista->Lista[pos - 1];
    }
};

int LocalizarElemento(SList *PonteiroLista, int elem)
{
    int i;

    for (i = 0; i < PonteiroLista->TamnhoAtualList; i++)
    {
        if (PonteiroLista->Lista[i] == elem)
        {
            return i + 1;
        }
    }
    return -1;
};

void InserirElementoList(SList *PonteiroLista, int elem, int pos)
{
    int i;
    if (pos <= 0)
    {
        printf("\nPosição não existe!\n");
    }
    else
    {
        for (i = PonteiroLista->TamnhoAtualList - 1; i >= pos - 1; i--)
        {
            PonteiroLista->Lista[i + 1] = PonteiroLista->Lista[i];
        }
        PonteiroLista->Lista[i + 1] = elem;
        PonteiroLista->TamnhoAtualList += 1;
    }
};

void DeletarElementoLista(SList *PonteiroLista, int pos)
{
    int i;
    if (pos <= 0 || PonteiroLista->TamnhoAtualList < pos)
    {
        printf("Posição na Lista não possui elemento!\n");
    }
    else
    {
        for (i = pos - 1; i < PonteiroLista->TamnhoAtualList - 1; i++)
        {
            PonteiroLista->Lista[i] = PonteiroLista->Lista[i + 1];
        }
        PonteiroLista->TamnhoAtualList -= 1;
    }
};

void TamanhoLista(SList *PonteiroLista){
    printf("A Lista Atual Possui Um Tamanho de %d Unidades!",PonteiroLista->TamnhoAtualList);
};

void PrintarLista(SList *PonteiroLista){
    int i;
    for (i = 0; i < PonteiroLista->TamnhoAtualList; i++)
        {
            printf("%d ", PonteiroLista->Lista[i]);
            Sleep(1000);
        }
};

