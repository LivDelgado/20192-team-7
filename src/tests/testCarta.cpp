#include <include/classes/carta.hpp>
#include <include/test/doctest.h>

using namespace poker;

TEST_CASE("Testando o Construtor de Carta"){
	CHECK_NOTHROW_MESSAGE(Carta(Copas, Q), "Construtos de Carta OK!");
}

TEST_CASE("Testando getNaipe"){
	Carta cartaTeste(Paus, K);
	CHECK_FALSE((cartaTeste.getNaipe() == 0));
	CHECK_EQ(cartaTeste.getNaipe(), Paus);
}

TEST_CASE("Testando getSimbolo"){
	Carta cartaTeste(Espadas, A);
	CHECK_FALSE((cartaTeste.getSimbolo()==0));
	CHECK_EQ(cartaTeste.getSimbolo(), A);	
}