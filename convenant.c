#include <stdio.h>


//mostra  vida do jogador e do boss
void exibirstatus (float vidajogador, float vidaboss) {

    printf("\nStatus da Batalha\n");
    printf("\nSua vida: %.2f\n", vidajogador);
    printf("\nVida do Reinhard: %.2f\n", vidaboss);
}

//mostra os ataques disponiveis
void mostrarMenu() {

    printf("\n1- Sorcery (15 de dano)\n");
    printf("\n2- Yetzirah (10 de dano)\n");
    printf("\n3- Atziluth (20 de dano)\n");
    printf("\n4- Dura Lex Sed Lex (20 de dano)\n");
    printf("\n5- Se defender e se curar (0 de dano, 15 de HP restaurado )\n");
    printf("\nEscolha: \n");
}


//funcao recursiva que controla a batalha
void batalha(float vidaJogador, float vidaboss, int turno) {

    int escolha;
    int danoJogador = 0;
    int escudo = 0;
    int danoBoss = 15;


    //verifica se o jogador foi derrotado 
    if (vidaJogador <= 0) {
        printf("Derrota.");
        printf("Reinhard: Foi uma boa luta, meu amigo, mas você ainda não é páreo.");

        return;
    }

    //verifica se o boss foi derrotado 
    if (vidaboss <=0) {
        printf("Vitória.");
        printf("Mecurius:....");
    
        return;
    }

    printf("\nTurno %d:\n", turno);
    exibirstatus(vidaJogador, vidaboss);
    mostrarMenu();


    //escolhas dos turnos
    scanf("%d", &escolha);
    switch(escolha) {
        case 1:
        danoJogador = 15;
        printf("Mercurius: Usou Sorcery");
        break;

        case 2:
        danoJogador = 10;
        printf("Mercurius: Usou Yetzirah");
        break;

        case 3:
        danoJogador = 20;
        printf("Mercurius: Usou Atziluth");
        break;

        case 4:
        danoJogador = 20;
        printf("Mercurius: Usou Dura Lex Sed Lex");
        break;
        
        case 5:
        danoJogador = 0;
        vidaJogador = vidaJogador + 15;
        escudo = 1;
        printf("Mercurius: Usou defender e se curou");
        break;

        default:
        printf("\nEscolha inválida. Tente novamente.\n");

        batalha(vidaJogador, vidaboss, turno);
        return;
    }


 //aplica o dano no boss
    vidaboss = vidaboss - danoJogador;

    printf("\nVoce causou %d de dano!\n", danoJogador);

    if (vidaboss <=0)
    {
    printf("\nVITORIA!\n");
    printf("\nVoce derrotou o Boss!\n");
    printf("\nTurnos utilizados: %d\n", turno);
    return;
    }

    if (escudo == 1) {
    printf("\nVoce usou a defesa\n");
    printf("\nVoce recuperou 15 de HP!\n");
    printf("\nO ataque do Boss foi bloqueado!\n");

    batalha(vidaJogador, vidaboss, turno + 1);
    return;
    }

 //turno do boss
    printf("\nTURNO DO BOSS\n");
    printf("\nO Reinhard atacou voce!\n");
    printf("\nO Reinhard causou %d de dano!\n", danoBoss);

    vidaJogador = vidaJogador - danoBoss;

    //recursao, chama a propria funcao para comecar um novo turno
    batalha(vidaJogador, vidaboss, turno + 1);


}

int main()
{
    float vidaJogador = 100;
    float vidaboss = 200;
    
    printf("\nReinard apareceu!\n");
    printf("\nPrepare-se para a batalha!\n");

    printf("\nMercurius: Ah… finalmente, o homem que carrega o céu sobre os ombros. ");
    printf("\nReinhard: E você deve ser o homem que se esconde além dele. ");

    //inicia a batalha no turno 1
    batalha(vidaJogador, vidaboss, 1);

    printf("\nFim do jogo.\n");

    return 0;
}