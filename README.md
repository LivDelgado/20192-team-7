# 20192-team-7

Projeto da disciplina deProgramação e Desenvolvimento de Software 2 do curso de Sistemas de Informação da UFMG.

## Descrição

Jogo de Poker Texas Hold'em desenvolvido em C++

## User stories

* Como jogador eu quero aumentar a aposta para aumentar o valor do pote e ganhar mais (raise)
* Critérios de aceitação:
  * O jogador deve estar participando da jogada
  * O valor do pote deve ser acrescido
  * O jogador deve ter o valor para aumentar a aposta
  * O valor deve ser descontado do valor das fichas do jogador


* Como jogador eu quero seguir o jogo para continuar na rodada e manter o valor do pote (check)
* Critérios de aceitação:
  * O jogador deve estar participando da jogada
  * O valor da aposta não deve ter sido alterado na rodada
  * O jogador deve se manter no jogo
  * As fichas do jogador devem ser mantidas


* Como jogador eu quero aceitar a aposta para continuar na rodada e aumentar o valor do pote (call)
* Critérios de aceitação:
  * O jogador deve estar participando da jogada
  * O valor da aposta deve ter sido alterado na rodada
  * O jogador deve se manter no jogo
  * O valor deve ser descontado do valor das fichas do jogador


* Como jogador eu quero desistir da jogada para sair da mesa (fold)
* Critérios de aceitação:
  * O jogador deve estar participando da jogada
  * O jogador deve ser retirado da mesa
  * Se for o pré-flop, as fichas não são descontadas
  * O valor deve ser descontado do valor das fichas do jogador se tiver passado do flop


* Como jogador eu quero iniciar o jogo para poder jogar
* Critérios de aceitação:
  * O jogador deve informar o número de bots a jogar contra
  * O jogador deve ser inserido no jogo
  * Os bots devem ser inseridos no jogo
  * O jogador deve receber 2 cartas
  * Os bots devem receber 2 cartas
  * O jogador deve receber um valor inicial em fichas
  * Os bots devem receber um valor inicial em fichas


* Como jogador eu quero finalizar o jogo para poder sair do jogo
* Critérios de aceitação:
  * O jogador deve estar jogando anteriormente
  * O jogador deve confirmar que deseja sair
  * O jogo deve ser encerrado


* Como jogador eu quero saber o que tenho na mão para poder tomar decisões na jogada
* Critérios de aceitação:
  * O jogador deve estar participando da jogada
  * O sistema deve informar a sequência que o jogador tem na mão
  * O sistema deve informar a hierarquia das sequências e onde a mão do jogador se encontra nessa hierarquia




## CRCs


Classe | Dealer
-------|--------
Responsabilidades | Colaborações
Atributos: | Baralho
Momento do jogo | Jogador
Número de jogadores | Mão
Métodos: | Mesa
Iniciar partida | Pote
Distribuir fichas | Bot
Incluir jogadores
Iniciar pré-flop
Iniciar flop
Iniciar turn
Iniciar river
Calcular apostas
Verificar opções de ação do jogador
Mostrar mão atual do jogador
Verificar resultado da partida
Entregar prêmio