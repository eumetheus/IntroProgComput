#include <stdio.h>
#include <string.h>

int main() {

    // Este programa vai ler o nome completo do usuário

    char nome[60];  // Definindo a variável nome como string e com 60 carcateres;

    // Mensagem de entrada do nome

    printf("Digite o seu nome completo (Max. de 60 caracteres): \n");

    // Lendo e armazernando o nome

    fgets(nome, 60, stdin);  // Não usei scanf, pois ele lê até o primeiro caracteres de espçao ignorando o resto

    nome[strcspn(nome, "\n")] = 0;  // Retirando o '\n' da string que o fgets inclui

    // Imprimindo o nome digitado

    printf("Seu nome completo é: \n %s \n", nome);

}