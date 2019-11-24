#include "classes/carta.hpp"
#include "enums/ordemSequencia.hpp"
#include "enums/simbolo.hpp"
#include <vector>

#ifndef UTIL_H
#define UTIL_H

namespace poker {

    class Util {
    
        public:
            std::vector<Carta> OrdenaCartas(std::vector<Carta> cartas);
            std::string ObterStringSimbolo(Simbolo simbolo);
            std::string ObterStringSequencia(OrdemSequencia sequencia);
    };

}

#endif