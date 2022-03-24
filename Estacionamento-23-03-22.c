#include <stdio.h>
#include <string.h>

typedef struct
{
  int hora;
  int minutos;
  int segundos;
} Horario;

typedef struct
{
  char numeroCarro[6];
  char marca[30];
  Horario entrada;
  Horario saida;
} Estacionamento;

void teste(Estacionamento* p){
    for(int i = 0; i < 2; i++){
    printf("\n\n----Estacionamento %d----\n\nNumero do Carro: %s", i,p[i].numeroCarro);
    printf("\nMarca: %s", p[i].marca);
    printf("\nEntrada: %d:%d:%d",p[i].entrada.hora, p[i].entrada.minutos, p[i].entrada.segundos);
    printf("\nSaida: %d:%d:%d\n\n",p[i].saida.hora, p[i].saida.minutos, p[i].saida.segundos);
  }
}

int main (){

  Estacionamento e[2];
  strcpy (e[0].numeroCarro, "LSN4I49");
  
  e[0].entrada.hora = 19;
  e[0].entrada.minutos = 25;
  e[0].entrada.segundos = 39;
  e[0].saida.hora = 22;
  e[0].saida.minutos = 15;
  e[0].saida.segundos = 19;
  strcpy (e[0].marca, "Ferrari");
  
  strcpy (e[1].numeroCarro, "GSN3I71");
  e[1].entrada.hora = 07;
  e[1].entrada.minutos = 55;
  e[1].entrada.segundos = 59;
  e[1].saida.hora = 12;
  e[1].saida.minutos = 15;
  e[1].saida.segundos = 49;
  strcpy (e[1].marca, "Porche");
  
  teste(e);
}
