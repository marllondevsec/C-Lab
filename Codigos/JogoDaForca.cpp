#include <iostream>
#include <cstdlib>

int main() {

    char palavra[30], letra[1], secreta[30];
    int tam, i, chances, acertos;
    bool acerto;

    chances = 6;
    tam = 0;
    i = 0;
    acertos = 0;

    std::cout << "Fale para seu amigo tampar os olhos e digite a palavra secreta:\n";
    std::cin >> palavra;
    system("clear"); // cls no Windows

    // Descobre o tamanho da palavra
    while (palavra[tam] != '\0') {
        tam++;
    }

    // Inicializa a palavra secreta
    for (i = 0; i < tam; i++) {
        secreta[i] = '-';
    }

    while ((chances > 0) && (acertos < tam)) {

        std::cout << "Chances restantes: " << chances << std::endl;
        std::cout << "Palavra secreta: ";

        for (i = 0; i < tam; i++) {
            std::cout << secreta[i];
        }

        std::cout << "\n\nDigite uma letra: ";
        std::cin >> letra[0];

        acerto = false;

        for (i = 0; i < tam; i++) {
            if (palavra[i] == letra[0] && secreta[i] == '-') {
                secreta[i] = palavra[i];
                acertos++;
                acerto = true;
            }
        }

        if (!acerto) {
            chances--;
        }

        system("clear");
    }

    if (acertos == tam) {
        std::cout << "Voce venceu :)\n";
    } else {
        std::cout << "Que pena, voce perdeu :(\n";
    }

    return 0;
}
