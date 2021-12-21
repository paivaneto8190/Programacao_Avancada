#ifndef _ACHA_MAIOR_H_
#define _ACHA_MAIOR_H_

/*Classe criada para implementar um functor para a funcao acha_maior*/

#include "NoH.h"

class acha_maior {
private:
    double c_custo; //variavel referente ao custo do elemento de NoH (privada para evitar erros ou alteracoes de valor)
public:
    //Como criamos a classe apenas para usar functor pra funcao acha_maior, criaremos apenas o construtor
    // específico, ignorando os contrutores por cópia e default que serão criados pelo compilador
    acha_maior (NoH& elem_noh): c_custo (elem_noh.get_H()) {}

    //Funcao que retorna a informacao do elemento com custo maior do que o do valor do construtor
    bool operator() (NoH& elem_noh) const {
       return (c_custo < elem_noh.get_H());
    }
};
#endif
