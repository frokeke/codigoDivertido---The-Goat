#include <iostream>
#include <algorithm>
#include <vector>
#include <ctype.h>
#include <string>
#include <windows.h>
#include <stdlib.h>

std::string Converter(std::string NOME){

    for (int i = 0; i < NOME.length(); i++){
        NOME[i] = tolower(NOME[i]);
    }

    return NOME;
}
void is_TG(std::string nome, std::vector<std::string>& GOATS){

    if(nome == "froke"){
    Beep(1000, 200); // ... = S
    Beep(1000, 200);
    Beep(1000, 200);

    Beep(1000, 500); // --- = O
    Beep(1000, 500);
    Beep(1000, 500);

    Beep(1000, 200); // ... = S
    Beep(1000, 200);
    Beep(1000, 200);

    } else if(std::count(GOATS.begin(), GOATS.end(), nome) > 0){
            std::cout << nome << " is THE GOAT" << std::endl;

        }
        else {
            std::cout << nome << " isnt THE GOAT" << std::endl;
        }
}

int main(){
std::vector<std::string> GOATS = {"ryan","artur"};
std::string NOME;

std::cout << "Insira o individuo e eu direi se ele eh o GOAT." << std::endl;
std::cin >> NOME;

std::string nome = Converter(NOME);

is_TG(nome, GOATS);

system("pause");
return 0;
}
