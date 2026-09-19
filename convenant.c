#include <stdio.h>

void exibirstatus (float vidajogador, int vidaboss) {

    printf("Status da Batalha\n");
    printf("Sua vida: %.2f\n", vidajogador);
    printf("Vida do Boss: %.2f\n", vidaboss);
}

void mostrarMenu() {

    printf("1- Sorcery (15 de dano)");
    printf("2- Yetzirah (10 de dano)");
    printf("3- Atziluth (20 de dano)");
    printf("4- Dura Lex Sed Lex (20 de dano)");
    printf("Escolha: ");
}

void batalha(int vidaJogador, int vidaBoss, int turno) {

    int escolha;
    int danoJogador = 0;
    int danoBoss = 15;

    if (vidaJogador <= 0) {
        printf("Derrota.");
        printf("Reinhard: Foi uma boa luta, meu amigo, mas você ainda não é páreo.");

        return;
    }

    if (vidaBoss <=0) {
        printf("Vitória.");
        printf("Mecurius:....");
    
        return;
    }

    printf("Turno %d:\n,", turno);
    exibirstatus(vidaJogador, vidaBoss);
    mostrarMenu();

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
        printf("Escolha inválida. Tente novamente.\n");

        batalha(vidaJogador, vidaBoss, turno);
        return;
    }


}

int main()
{
    float vida_jogador = 100;
    float vida_boss = 200;
    float dano_boss = 15.0;

    //Fala dos personagens
    printf("Mercurius: Ah… finalmente, o homem que carrega o céu sobre os ombros. ");
    printf("Reinhard: E você deve ser o homem que se esconde além dele. ");
    printf("Daniel entrou no codigo");
    printf("João entrou no codigo");

    return 0;
}