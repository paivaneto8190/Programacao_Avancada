#ifndef _NOH_H_
#define _NOH_H_

/*
Essa classe foi criada apenas para motivos de podermos deixar o programa mais explícito quanto
a explicacao das partes que o compõem, ja que fazendo o uso de structs ficava um pouco inviavel
a implementacao correta.
*/

#include <iomanip>
#include <fstream>
#include <list>
#include <algorithm>

//BIBLIOTECAS E CLASSES ADICIONADAS DEPOIS
#include<cmath>
//==============================

#include "coord.h"

using namespace std;

class NoH {
    private:
        ///Esses dados sao privados para evitar que o usuario os altere, visto que sao importantes pra execucao do programa
        Coord pos;
        Coord ant;
        double g; //Custo passado
        double h; //Custo futuro
    public:
        ///Calcula heuristica
        void heuristica(const Coord& destino);

        ///METODOS DE CONSULTA (TENTEI COLOCAR A IMPLEMENTACAO NO ARQUIVO LABIRINTO.CPP MAS DEU ERRO, POR ISSO ESTAO AQUI)
        Coord get_pos() const;
        Coord get_ant() const;
        double get_H(); //Seria o f descrito no pseudocodigo
        double get_g() const;
        void set_pos(const Coord& dest1);
        void set_ant(const NoH& dest2);
        void set_ant(const Coord& dest3); ///Necessaria ja que em parte do codigo o coord recebe outro coord, e não pegando o pos do NoH
        double set_g(const double& cust_pass);

        ///Sobrecarga do operador < para fazer a comparacao entre suc, oldF e oldA
        bool operator<( NoH& old_A_F);
        bool operator == (const NoH& compara1);
        bool operator == (const Coord& compara2);
        bool operator != (const Coord& dest);
        Coord operator + (const Coord& parametro);

};
#endif
