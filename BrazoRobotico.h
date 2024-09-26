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
       	
	BrazoRobotico(double xi,double yi,double zi);
	double getX();
	double getY();
	double getZ();
	void setSujetando(bool sujeta_do);
	bool isSujetando();
	void coger();
	void soltar();
	void mover(double xf,double yf,double zf);
};
#endif // BRAZOROBOTICO_H
