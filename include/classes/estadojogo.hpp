#include "classes/mesa.hpp"
#include "classes/jogadorHumano.hpp"
#include "classes/baralho.hpp"
#include "classes/pote.hpp"

#include <map>
#include <string>

#ifndef ESTADO_JOGO_H
#define ESTADO_JOGO_H

namespace poker {
	
    class EstadoJogo {
        protected:
            Baralho* baralho;

        public:
            EstadoJogo();

            EstadoJogo(Baralho* baralho) {
                this->baralho = baralho;
            }

            virtual void distribuirCartas(Mesa* mesa);
            virtual bool validarApostas(int valorAposta, Jogador* jogador);
            virtual std::map<std::string, bool> verificarOpcoesJogador(Jogador* jogador, Pote* pote);
    };
}

#endif