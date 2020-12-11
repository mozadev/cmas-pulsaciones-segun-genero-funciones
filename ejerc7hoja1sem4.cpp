/*
7. Escribir un programa en C++ que permita calcular el número de pulsaciones que debe tener
una persona por cada 10 segundos de ejercicio aeróbico.
Si la persona es del sexo femenino, la fórmula es:
Número de pulsaciones = (220 – edad) /10 y
Si el sexo es masculino:
Número de pulsaciones = (210 – edad) /10
Ejemplo:
Ingrese el sexo de la persona (F o M): F
Ingrese la edad de la persona: 24
El número debe ser de 20 pulsaciones por cada 10 segundos aproximadamente.

*/


#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<stdio.h>
#include<math.h>

using namespace std;

char ingresedato(int orden) 
{
	char dato;
	cin >>dato;

	if (orden == 1) if ( dato=='M' || dato == 'F'||dato=='f'||dato=='m')return dato;
	else cout << "error de ingreso sexo!"; exit(0);_getch();
}


	float calculapulsaciones()
	{
	char sexo; 
	float edad,pulsaciones; 
	int edad2;


			cout << "Sexo (M) (F) "; sexo= ingresedato(1);
			cout << "Ingrese edad: "; cin >> edad;
			
			edad2 = edad;
			if (edad <= 0 || edad - edad2 != 0)
			{
				cout << "error de ingreso edad! "; exit(0); _getch();
			}
			else if (sexo == 'F'||sexo=='f') 
		{
			pulsaciones = (220 - edad)/10;return pulsaciones;
		}
			else
		{
			pulsaciones = (210 - edad) / 10;return pulsaciones;
		}
	
		
	}

	int main()
	{
		cout << calculapulsaciones();
			_getch();
	}











