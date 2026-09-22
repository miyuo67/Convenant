# Luta em turnos

Equipe:
Mikael André Ortiz Pelegrino

Daniel Henrique Delmonico Cintra

João Gabriel Marques de Miranda

Matheus de Oliveira

Decidimos desenvolver um jogo de batalha por turnos no qual o jogador enfrenta um Boss em um combate que continua até que um dos dois seja derrotado.
Durante cada turno, o jogador realiza sua ação primeiro, podendo escolher entre diferentes ataques ou utilizar o Escudo da Guarda Áurea, que permite recuperar pontos de vida e bloquear o ataque do Boss. Em seguida, caso o Boss ainda esteja vivo e o escudo não tenha sido utilizado, ele realiza seu ataque contra o jogador. Esse ciclo se repete até que uma das condições de vitória ou derrota seja atingida.

Sistema de batalha

Buscamos criar um sistema que mantenha o combate desafiador e evite que a batalha se torne excessivamente fácil ou difícil.
Para isso, o dano causado pelo Boss aumenta progressivamente ao longo dos turnos, utilizando um sistema de crescimento baseado no dano inicial:
Dano do Boss × 0,25
Dessa forma, conforme a batalha avança, o jogador precisa tomar decisões cada vez mais cuidadosas para conseguir sobreviver.
O dano causado pelo jogador também foi planejado para manter o equilíbrio do combate. Cada ataque possui uma quantidade de dano específica, permitindo que o jogador escolha entre diferentes estratégias durante a batalha.
Além dos ataques, o jogador possui a opção de utilizar o Escudo da Guarda Áurea, que não causa dano, mas recupera pontos de vida e impede o ataque do Boss naquele turno. Essa mecânica adiciona uma escolha defensiva ao combate, permitindo que o jogador decida entre causar dano ou priorizar sua sobrevivência.

Inspirações

O projeto possui inspiração em Dies Irae ~Amantes Amentes~, uma visual novel que serviu como referência para alguns dos nomes dos personagens, ataques e elementos utilizados na ambientação do jogo.
As referências foram utilizadas como inspiração para construir a identidade do projeto, enquanto o sistema de batalha e a implementação foram desenvolvidos para o nosso próprio jogo.

Recursividade

Um dos principais conceitos de programação utilizados no projeto é a recursividade.
A função responsável pela batalha chama a si mesma para iniciar o próximo turno, permitindo representar o ciclo do combate por meio de chamadas recursivas.
A recursividade é encerrada quando uma das condições de término é atingida:

Vida do jogador =< 0: o jogador é derrotado.

Vida do Boss =< 0: o jogador vence a batalha.

Dessa forma, o projeto utiliza a batalha como uma aplicação prática do conceito de recursividade direta, além de trabalhar com funções, estruturas condicionais, switch/case, entrada de dados e gerenciamento de variáveis em C.
