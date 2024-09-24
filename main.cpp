#include <iostream>
#include "BrazoRobotico"
using namespace std;

int main(){
	BrazoRobotico R1(0.0,0.0,0.0);
       	R1.mover(1.2,3.3,4.1);
	R1.coger();
	cout <<"Se ha movido el objeto a la posicion "<<"X: "<<getX()<<"Y: "<<getY()<<"Z: "<<getZ()<<endl;
	return 0;
}
