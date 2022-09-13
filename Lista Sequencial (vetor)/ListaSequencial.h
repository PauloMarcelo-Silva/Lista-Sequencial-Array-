#ifndef LISTASEQUENCIAL_H_DEFINE
#define LISTASEQUENCIAL_H_DEFINE

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct
{   
    int Lista[MAX]; //Vetor da Lista
    int TamnhoAtualList; //Contador do Tamanho da Lista

} SList;

void CriarLista(SList *PonteiroLista);
void VerificarListVazia(SList PonteiroLista);
void VerificarListCheia(SList PonteiroLista);
void PrintarLista(SList *PonteiroLista);
void AdicionarLista(SList *PonteiroLista);
int BuscarElemento(SList *PonteiroLista, int pos);
int LocalizarElemento(SList *PonteiroLista, int elem);
void InserirElementoList(SList *PonteiroLista, int elem, int pos);
void DeletarElementoLista(SList *PonteiroLista, int pos);
#endif