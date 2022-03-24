#include <stdio.h>
#include <string.h>

typedef struct{
  int dia;
  int mes;
  int ano;
}Data;

typedef struct{
  char Nome[30];
  int idade;
  Data dataNasc;
}Pessoa;
//Meu Modelo
void mostrar(char nome[], int idade, int dia, int mes, int ano){
  printf("----Modelo Meu----\n\nNome: %s", nome);
  printf("\nIdade: %d", idade);
  printf("\nData Nascimento: %d/%d/%d\n\n----Modelo Meu----", dia, mes, ano);
}
// Modelo do Professor
void mostrar2(Pessoa p1){
  printf("\n\n----Modelo Professor----\n\nNome: %s", p1.Nome);
  printf("\nIdade: %d", p1.idade);
  printf("\nData Nascimento: %d/%d/%d\n\n----Modelo Professor----", p1.dataNasc.dia, p1.dataNasc.mes, p1.dataNasc.ano);
}

int main(){

  Pessoa p1;
  strcpy(p1.Nome, "Danilo");
  p1.idade = 39;
  p1.dataNasc.dia = 1;
  p1.dataNasc.mes = 1;
  p1.dataNasc.ano = 2000;
  int dia, mes, ano;
  mostrar(p1.Nome, p1.idade, p1.dataNasc.dia, p1.dataNasc.mes, p1.dataNasc.ano);
  mostrar2(p1);
  return 0;
}