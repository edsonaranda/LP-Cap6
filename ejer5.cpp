#include <iostream>

using namespace std;

enum Colores{rojo, azul, amarillo, verde, plateado, dorado, naranja, morado};

int main ()
{
	Colores color;
	cout<<"tipo enum creado correctamente"<<endl;
	//PRIMERO
	color = rojo;

	if(color != amarillo)
		cout<<"el color  no es amarillo"<<endl;
	else
		cout<<"el color es amarillo"<<endl;

	cout<<"color = "<<color<<endl;
	color = plateado;
	cout<<"color = "<<color*2<<endl;
	cout<<color * 2<<endl;
	//cout<< color - 2<<endl;

	int tmp = (int)color + 6;
	cout<<"nuevo-> "<<tmp<<endl;
	color  = 5;

	return 0;
}


/*
Operaciones ilegales
color ++;
color --;
color = 4;
color += 5;
color -= 5;
color = color * 2;
color = color / 2;
Colores[1] = mango;
Colores::amarillo = 6;
*/

