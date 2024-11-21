#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int valor;
	struct no * prox;
}lista;

lista *inserir(lista *list,int chave){
	lista *no=(lista*)malloc(sizeof(lista));
	if(no){
		no->valor=chave;
		if(list==NULL){
           no->prox=no;
           list=no;
           return list;
		}
		lista *aux=list,*ante=NULL;
		while(aux->prox!=list){
			aux = aux->prox;
		}
		no->prox=list;
		aux->prox=no;
		
	}
	return list;
}

void mostrar(lista *l){
	lista* aux = l;
	
	do{
		printf("%d ",aux->valor);
		aux = aux->prox;	
	}while(aux!=l);
}

lista * remover(lista *l, int chave){
	lista *aux = l, *anterior;
	if(aux->valor==chave){
		lista *t = aux->prox;
		free(aux);
		return t;
	}
	
	do{
		anterior = aux;
		aux = aux->prox;
	}while(aux!=l && aux->valor!=chave);
	
	anterior->prox = aux->prox;
	free(aux);
	return l;
	
}

void apagarLista(lista *l){
	lista *aux =l,*temp;

	do{
		temp = aux->prox;
		free(aux);
		aux = temp;
	}while(aux!=l);

	free(aux);
}
int size(lista *l){
	int n=0;
	lista *aux = l;
	
	if(l==NULL)
       return 0;
       
	do{
		aux = aux->prox;
		n++;
	}while(aux!=l);
	
	return n;
}


int main(int argc, char *argv[]) {
	
	lista *list = NULL;
	
	int n,i;
	scanf("%d",&n);
	
	i=1;
	while(i<=n){
		list = inserir(list,i);
		i++; 
	}
	
	
	
	printf("tamanho=%d\n",size(list));
	
	///////

	int idx =1;
	int salto = 5,tamanho=n;
	i = 0;
	list = remover(list,1);
	
		printf("Salto: %d\n",salto);
		while(size(list)>1){
			idx = (idx+salto)%size(list);
			printf("%d\n",idx);
			list = remover(list,idx);
			tamanho--;

		}
	printf("\n");

	
	apagarLista(list);
	
	return 0;
}