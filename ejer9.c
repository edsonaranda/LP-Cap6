#include <stdio.h>
#include <stdlib.h>

typedef struct{

	char* nombre, apellido;
}Tipo1;

typedef struct{

	char* nombre, apellido;
}Tipo2;


int main(int argc,char const * argv[])
{
	Tipo1=Tipo2;
	return 0;
}

