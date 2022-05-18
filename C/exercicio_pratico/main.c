#include <stdio.h>
#include <string.h>

__attribute__((unused)) void code1() {
    int ano_nascimento, ano_atual;

    printf("Ano de nascimento: ");
    scanf("%i", &ano_nascimento);
    printf("Ano atual: ");
    scanf("%i", &ano_atual);

    int idade = (ano_atual - ano_nascimento);
    printf("O Felippe tem %d anos\n", idade);
}

__attribute__((unused)) void code2() {
    double hora_cinema = 19.30;
    double hora_atual = 19.29;

    if (hora_atual >= hora_cinema) {
        if (hora_atual > hora_cinema + 0.30) {
            printf("Passou do tempo limite! Nao pode entrar!\n");
        } else if (hora_atual < hora_cinema - 0.30) {
            printf("Nem abriu a porta do cinema!\n");
        }
    } else {
        printf("O horario esta certo! Pode entrar!\n");
    }
}

__attribute__((unused)) void code3() {
    int contador = 1;
    int limite = 10;

    while (contador <= limite) {
        if (contador == 6) {
            printf("Pausa do primeiro loop!\n");
            int contador2 = 5;
            while (contador2 > 0) {
                printf("%d - ", contador2);
                contador2--;
            }
            printf("Fim do segundo loop!\n");
        }
        printf("%d - ", contador);
        contador++;
    }
    printf("Fim do primeiro loop!\n");
}

__attribute__((unused)) void code4() {
    char nome[256];
    int idade;
    char sobrenome[256];
    int ano_nascimento;
    int ano_atual = 2022;

    printf("Qual seu nome?\n");
    scanf("%s", nome);

    printf("\n%s tem quantos anos?\n", nome);
    scanf("%d", &idade);
    ano_nascimento = ano_atual - idade;

    printf("\nAgora pro seu nome ficar melhor, digite seu sobrenome:\n");
    scanf("%s", sobrenome);

    printf("\nJuntando tudo que recebi no ano atual de %d temos:\n", ano_atual);
    printf("Nome: %s %s\n", nome, sobrenome);
    printf("Idade: %d, ", idade);
    if (idade >= 18) {
        printf("%s eh maior de idade.\n", nome);
    } else {
        printf("%s eh menor de idade.\n", nome);
    }
    printf("Ano de nascimento: %d\n", ano_nascimento);
}

__attribute__((unused)) void code5() {
    char nome[256];
    int idade;
    int ano_atual = 2022;

    printf("Ola qual seu nome?\n");
    scanf("%s", nome);

    printf("Qual sua idade %s?\n", nome);
    scanf("%d", &idade);
    int ano_nascimento = ano_atual - idade;

    if (idade > 0 && idade < 120) {
        printf("\nNome: %s\nIdade: %d\n", nome, idade);

        printf("\nA primeira letra do seu nome eh: %c\n", nome[0]);
        printf("%s tem %d anos, logo, %s eh ", nome, idade, nome);
        if (idade < 12) {
            printf("uma crianca que nasceu no século XXI\n");
        } else if (idade < 18) {
            printf("um adolescente que nasceu no século XXI");
        } else {
            printf("um adulto que nasceu nos anos ");
            if (ano_nascimento >= 1920 && ano_nascimento <= 1929) {
                printf("20.");
            } else if (ano_nascimento <= 1939) {
                printf("30.");
            } else if (ano_nascimento <= 1949) {
                printf("40.");
            } else if (ano_nascimento <= 1959) {
                printf("50.");
            } else if (ano_nascimento <= 1969) {
                printf("60.");
            } else if (ano_nascimento <= 1979) {
                printf("70.");
            } else if (ano_nascimento <= 1989) {
                printf("80.");
            } else if (ano_nascimento <= 1999) {
                printf("90.");
            }
            printf("\n");
        }
    }
    else {
        printf("Idade invalida.");
    }
}

__attribute__((unused)) void code6() {
    // strcmp(strq1, strq2) == 0

    char player[256];
    char player2[256];
    int vitorias_player = 0;
    int vitorias_player2 = 0;
    int empates = 0;
    int cont = 1;
    int partidas;

    printf("pedra, papel, tesoura\n\n");
    printf("Quantas partidas vao ser?\n");
    scanf("%d", &partidas);

    while (cont <= partidas) {
        printf("\nPlayer 1... Sua vez...\n");
        scanf("%s", player);

        printf("\nPlayer 2... Sua vez...\n");
        scanf("%s", player2);

        printf("\nPlayer 1 jogou: %s\nPlayer 2 jogou: %s\nResultado: ", player, player2);

        if (strcmp(player, "pedra") == 0) {
            if (strcmp(player2, "pedra") == 0) {
                printf("empate.");
                empates++;
            } else if (strcmp(player2, "papel") == 0) {
                printf("Player 2 ganhou.");
                vitorias_player2++;
            } else if (strcmp(player2, "tesoura") == 0) {
                printf("Player 1 ganhou.");
                vitorias_player++;
            } else {
                printf("Player 2 jogou uma informacao invalida!\n");
                cont--;
            }
        } else if (strcmp(player, "papel") == 0) {
            if (strcmp(player2, "pedra") == 0) {
                printf("Player 1 ganhou.");
                vitorias_player++;
            } else if (strcmp(player2, "papel") == 0) {
                printf("empate.");
                empates++;
            } else if (strcmp(player2, "tesoura") == 0) {
                printf("Player 2 ganhou.");
                vitorias_player2++;
            } else {
                printf("Player 2 jogou uma informacao invalida!\n");
                cont--;
            }
        } else if (strcmp(player, "tesoura") == 0) {
            if (strcmp(player2, "pedra") == 0) {
                printf("Player 2 ganhou.");
                vitorias_player2++;
            } else if (strcmp(player2, "papel") == 0) {
                printf("Player 1 ganhou.");
                vitorias_player++;
            } else if (strcmp(player2, "tesoura") == 0) {
                printf("empate.");
                empates++;
            } else {
                printf("Player 2 jogou uma informacao invalida!\n");
                cont--;
            }
        } else {
            printf("Player 1 jogou uma informacao invalida!\n");
            cont--;
        }
        cont++;
    }
    printf("\n\nResultado final:\n");
    printf("N. de empates: %d\n", empates);
    printf("N. de vitorias do Player 1: %d\n", vitorias_player);
    printf("N. de vitorias do Player 2: %d\n", vitorias_player2);
}

int main() {
    return 0;
}