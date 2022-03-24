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
void mostrar(Pessoa* p){
  for(int i = 0; i < 2; i++){
    printf("\n\n----Pessoa %d----\n\nNome: %s", i,p[i].Nome);
    printf("\nIdade: %d", p[i].idade);
    printf("\nData Nascimento: %d/%d/%d\n\n----Modelo Meu----",                    p[i].dataNasc.dia, p[i].dataNasc.mes, p[i].dataNasc.ano);
  }
}

// Modelo do Professor
void mostrar2(Pessoa p[]){
  printf("\n\n----Modelo Professor----\n\nNome: %s", p[0].Nome);
  printf("\nIdade: %d", p[0].idade);
  printf("\nData Nascimento: %d/%d/%d\n\n----Modelo Professor----", p[0].dataNasc.dia, p[0].dataNasc.mes, p[0].dataNasc.ano);
  
}

int main(){
  Pessoa p[2];
  
  strcpy(p[0].Nome, "Danilo");
  p[0].idade = 39;
  p[0].dataNasc.dia = 1;
  p[0].dataNasc.mes = 1;
  p[0].dataNasc.ano = 2000;

  strcpy(p[1].Nome, "Gustavo");
  p[1].idade = 19;
  p[1].dataNasc.dia = 24;
  p[1].dataNasc.mes = 12;
  p[1].dataNasc.ano = 2002;
  
  int dia, mes, ano;
  mostrar(p);
  return 0;
}