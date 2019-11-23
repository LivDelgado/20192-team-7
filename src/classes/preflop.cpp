#include "classes/preflop.hpp"
#include "classes/carta.hpp"

#include <vector>

using namespace poker;

PreFlop::PreFlop() : EstadoJogo(){
}

PreFlop::PreFlop(Baralho* baralho) : EstadoJogo(baralho){
}

void PreFlop::distribuirCartas(Mesa* mesa) {
    throw(PokerError("Método não deve ser chamado."));
}

void PreFlop::distribuirCartasJogadores(std::vector<Jogador> jogadores) {
    for(Jogador player : jogadores){
        Mao mao = Mao();
        mao.setCartas(this->baralho->distribuirCartas(2));
        player.setMao(&mao);
    }
}

bool PreFlop::validarApostas(int valorAposta, Jogador* jogador) {
    return (jogador->getNumeroFichas() >= valorAposta);
}

bool verificarCheck(Jogador* jogador, Pote* pote){
    return (pote->getValorApostaAnterior() == pote->getValorApostaAtual() && jogador->getNumeroFichas() >= pote->getValorApostaAtual());
}

bool verificarBet(Jogador* jogador, Pote* pote){
    return (pote->getValorTotal() != 0 && pote->getValorApostaAnterior() == pote->getValorApostaAtual() && jogador->getNumeroFichas() > pote->getValorApostaAtual());
}

bool verificarFold(Jogador* jogador, Pote* pote){
    return false;
}

bool verificarFold(JogadorHumano* jogador, Pote* pote){
    return true;
}

bool verificarCall(Jogador* jogador, Pote* pote){
    return (pote->getValorApostaAtual() > pote->getValorApostaAnterior() && jogador->getNumeroFichas() >= pote->getValorApostaAtual());
}

bool verificarRaise(Jogador* jogador, Pote* pote){
    return (pote->getValorApostaAtual() > pote->getValorApostaAnterior() && jogador->getNumeroFichas() > pote->getValorApostaAtual());
}

std::map<std::string, bool> PreFlop::verificarOpcoesJogador(Jogador* jogador, Pote* pote) {
    std::map<std::string, bool> mapaOpcoesJogador;

    mapaOpcoesJogador.insert(std::pair<std::string, bool>("check", verificarCheck(jogador, pote)));
    mapaOpcoesJogador.insert(std::pair<std::string, bool>("apostar", verificarBet(jogador, pote)));
    mapaOpcoesJogador.insert(std::pair<std::string, bool>("desistir", verificarFold(jogador, pote)));
    mapaOpcoesJogador.insert(std::pair<std::string, bool>("pagar", verificarCall(jogador, pote)));
    mapaOpcoesJogador.insert(std::pair<std::string, bool>("aumentar", verificarRaise(jogador, pote)));

    return mapaOpcoesJogador;
}