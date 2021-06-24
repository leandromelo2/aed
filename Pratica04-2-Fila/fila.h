#ifndef FILA_H_
#define FILA_H_

#include <iostream>

using namespace std;

template <class T>

class Fila {
private:
	T *itens;
	int cap_maxima;
	int tam_fila;
	int fila_inicio;
	int fila_final;
public:
	Fila(int cap) {
		this->cap_maxima = cap;
		this->tam_fila = 0;
		this->fila_final = 0;
		this->fila_inicio = 0;
		this->itens = new T[this->cap_maxima];
	}
	~Fila() {
		delete[]this->itens;
	}
	void enfileira(const T &item) {
		if(tam_fila < cap_maxima){
			itens[(fila_final)] = item;
			fila_final = (fila_final + 1) % >cap_maxima;
//			itens[(fila_inicio + tam_fila) % cap_maxima] = item;
			this->tam_fila++;
		}else{
			throw "Fila cheia";
		}
	}
	/*
	 *
	 * proc enfileira (dado v, fila F) {
			if tam_fila < cap_maxima {
				itens_fila [(fila_inicio + tam_fila) mod cap_maxima] <- v
				F.n <- F.n + 1
		}
	 *
	 * */


	T desenfileira() {
		T aux;
		if(tam_fila > 0){
			aux = this->itens[this->fila_inicio];
			this->fila_inicio = (this->fila_inicio + 1) % this->cap_maxima;
			this->tam_fila--;
			return aux;
		}else{
			throw"Fila vazia";
		}
	}
	int cheia() {
		if(this->tam_fila == this->cap_maxima){
			return 1;
		}else{
			return 0;
		}
	}
	int vazia() {
		if(this->tam_fila == 0){
			return 1;
		}else{
			return 0;
		}
	}
	int tamanho() {
		return this->tam_fila;
	}
};


#endif /* FILA_H_ */


/*
template <class T>
class Fila {
private:
// array de itens, capacidade, tamanho, posição inicial, etc.
public:
Fila(int cap) {
// inicializar array de items, capacidade, tamanho, posição inicial
}
~Fila() {
// destruir array de itens
}
void enfileira(const T & item) {
// adiciona um item ao final da fila; lança “Fila cheia” caso cheia
}
T desenfileira() {
// remove um item do inicio da fila; lança “Fila vazia” caso vazia
}
int cheia() {
// retorna 1 se cheia, 0 caso contrário
}
int vazia() {
// retorna 1 se vazia, 0 caso contrário
}
int tamanho() {
// retorna a quantidade de itens atualmente na fila
}
};
*/




/*
 	// Método "Enfileira" - outra forma de implementação

 	void enfileira(const T &item) {
		if(tam_fila < cap_maxima){
			this->itens[(this->fila_final)] = item;
			this->fila_final = (this->fila_final + 1) % this->cap_maxima;
			this->tam_fila++;
		}else{
			throw "Fila cheia";
		}
	}
 */



