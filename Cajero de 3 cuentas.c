#include <stdio.h>
#include <stdlib.h>
#include "BibliotecaCajero.h"
/*
int valida(float cantidad) {
if (cantidad <= 0) {
printf("No se puede hacer el deposito.\n");
return 0;
}
return 1;
}

void consultarSaldo(float saldo) {
printf("\nTu saldo actual es: %.2f\n", saldo);
}

float retirar(float saldo) {
float cantidad;
printf("\nIngrese la cantidad a retirar: ");
scanf("%f", &cantidad);
if (cantidad <= 0) {
printf("Cantidad no v�lida. Deja de perder el tiempo.\n");
} else if (cantidad > saldo) {
printf("Fondos insuficientes.\n");
} else {
saldo -=cantidad;
printf("Retiro exitoso. Tu nuevo saldo es %.2f\n", saldo);
}
return saldo;
}

float depositar(float saldo) {
float cantidad;
printf("\nIngrese la cantidad a depositar: ");
scanf("%f", &cantidad);
if (valida(cantidad)) {
saldo += cantidad;
printf("Dep�sito exitoso. Nuevo saldo: %.2f\n", saldo);
}
return saldo;
}
*/


int main()
{
int Cuenta;
int opciones;
float cantidad;
float saldo[3]={1000,2000,3000};

printf("Elije tu cuenta\n");
printf("cuenta 1\n");
printf("cuenta 2\n");
printf("cuenta 3\n");
scanf("%d",&Cuenta);
do{
//MENU

printf("\n-----Cajero Automatico-----\n");
printf("1.-Consulta de saldo\n");
printf("2.-Deposito\n");
printf("3.-Retiro\n");
printf("4.-Salir\n");
printf("Selecciona una opcion: ");
scanf("%d", &opciones);

switch(opciones){
case 1:

consultarSaldo(saldo[Cuenta-1]);
break;
case 2:
//Funcion deposito
saldo[Cuenta-1] = depositar(saldo[Cuenta-1]);
break;
case 3:
//Funcion retiro
saldo[Cuenta-1] = retirar(Cuenta-1);
break;
case 4:
//Salida
printf("!Adios!\n");
break;
}
}while(opciones!=4);
return 0;
}

