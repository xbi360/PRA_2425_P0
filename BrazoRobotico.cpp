#include "BrazoRobotico.h"

// Constructor
BrazoRobotico::BrazoRobotico(double xi, double yi, double zi) 
    : x(xi), y(yi), z(zi), sujeto(false) {}

// Métodos consultores
double BrazoRobotico::getX() {
    return x;
}

double BrazoRobotico::getY(){
    return y;
}

double BrazoRobotico::getZ(){
    return z;
}
bool BrazoRobotico::isSujetando(){
    return sujeto;
}

// Método para coger un objeto
void BrazoRobotico::coger() {
    if (!sujeto) {
        sujeto = true;
    } else {
        // Mensaje opcional
        std::cout << "Ya está sujetando un objeto." << std::endl;
    }
}

// Método para soltar un objeto
void BrazoRobotico::soltar() {
    if (sujeto) {
        sujeto = false;
    } else {
        // Mensaje opcional
        std::cout << "No está sujetando ningún objeto." << std::endl;
    }
}

// Método para mover el brazo robótico
void BrazoRobotico::mover(double xf, double yf, double zf) {
    x = xf;
    y = yf;
    z = zf;
}
