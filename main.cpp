#include <iostream>
#include "BrazoRobotico.h"
using namespace std;

int main(){
	BrazoRobotico R1(0.0,0.0,0.0);
	R1.coger();
	R1.setSujetando(true);
	bool cogido = R1.isSujetando();
	cout<<"se ha cogido el objeto correctamente "<<endl;
       	R1.mover(1.2,3.3,4.1);
	cout<<"se ha movido correctamente a la posicion" <<"X:"<<R1.getX()<<" "<<"Y:"<<R1.getY()<<" "<<"Z:"<<R1.getZ()<<endl;
	return 0;
}
