#include <classes/mao.hpp>
#include <test/doctest.h>

using namespace poker;

TEST_CASE("Testando os construtores de Mao"){
	CHECK_NOTHROW_MESSAGE(new Mao(new Carta(Copas, Q), new Carta(Espadas, A)), "Construtor nº1 de Mão OK!");
	CHECK_NOTHROW_MESSAGE(new Mao(), "Construtor nº 2 de Mão OK!");
}

TEST_CASE("Testando setters e getters"){
	Mao mao;
	std::vector<Carta*> cartas = {new Carta(Copas,Q),new  Carta(Paus, QUATRO)};
	CHECK_NOTHROW_MESSAGE(mao.setCartas(cartas), "Set cartas OK!");
	CHECK_EQ(mao.getCartas(), cartas);
}