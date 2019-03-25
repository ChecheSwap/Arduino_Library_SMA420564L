#include <Arduino.h>
#include "seven_segslcd.h" //Inclusion de libreria

seven_segslcd * obj = new seven_segslcd(); //Instanciacion de Objeto

void setup()
{}
void loop()
{
    int numero = 9;

    for(int posicion = 3; posicion >= 0; --posicion){

        while(!(numero < -1)){
            obj->print_digit(numero,posicion);
            delay(250);
            --numero;
        }
        numero = 9;
    }
}




