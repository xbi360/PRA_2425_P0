#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H

class BrazoRobotico {
private :
       //coordenadas del robot	
	double x;
	double y;
	double z;
	bool sujeto;
public:
       	
	BrazoRobotico(double xi,double yi,double zi): x(x_), y(y_), z(z_){};
	double getX();
	double getY();
	double getZ();
	bool BrazoRobotico::isSujetando();
	void coger();
	void soltar();
	void mover(double xf,yf,zf);
};
#endif // BRAZOROBOTICO_H
