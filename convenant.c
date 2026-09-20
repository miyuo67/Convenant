#include <stdio.h>


/*MOSTRA A VIDA DO JOGADOR E DO BOSS*/
void exibirstatus (float vidajogador, int vidaboss) {

    printf("\nStatus da Batalha\n");
    printf("\nSua vida: %.2f\n", vidajogador);
    printf("\nVida do Boss: %.2f\n", vidaboss);
}

/* Mostra os ataques disponiveis */
void mostrarMenu() {

    printf("\n1- Sorcery (15 de dano)\n");
    printf("\n2- Yetzirah (10 de dano)\n");
    printf("\n3- Atziluth (20 de dano)\n");
    printf("\n4- Dura Lex Sed Lex (20 de dano)\n");
    printf("\nEscolha: \n");
}


/* Funcao recursiva que controla a batalha */
void batalha(int vidaJogador, int vidaboss, int turno) {

    int escolha;
    int danoJogador = 0;
    int danoBoss = 15;


    /* CASO BASE: jogador foi derrotado */
    if (vidaJogador <= 0) {
        printf("Derrota.");
        printf("Reinhard: Foi uma boa luta, meu amigo, mas você ainda não é páreo.");

        return;
    }

    /* CASO BASE: Boss foi derrotado */
    if (vidaboss <=0) {
        printf("Vitória.");
        printf("Mecurius:....");
    
        return;
    }

    printf("\nTurno %d:\n,", turno);
    exibirstatus(vidaJogador, vidaboss);
    mostrarMenu();


    /* JOGADOR PODE ESCOLHER ENTRE ATACAR E DEFENDER */
    scanf("%d", &escolha);
    switch(escolha) {
        case 1:
        danoJogador = 15;
        printf("");
        break;

        case 2:
        danoJogador = 10;
        printf("");
        break;

        case 3:
        danoJogador = 20;
        printf("");
        break;

        case 4:
        danoJogador = 20;
        printf("");
        break;
        
        default:
        printf("\nEscolha inválida. Tente novamente.\n");

        batalha(vidaJogador, vidaboss, turno);
        return;
    }



    vidaboss = vidaboss - danoJogador;

    printf("\nVoce causou %d de dano!\n", danoJogador);

    if (vidaboss <=0)
    {



    }


}

int main()
{
    float vidaJogador = 100;
    float vidaboss = 200;
    float dano_boss = 15.0;

    //Fala dos personagens
    printf("Mercurius: Ah… finalmente, o homem que carrega o céu sobre os ombros. ");
    printf("Reinhard: E você deve ser o homem que se esconde além dele. ");
    printf("Daniel entrou no codigo");
    printf("João entrou no codigo");

    return 0;
}