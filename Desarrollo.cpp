/*
	Name: DESARROLLO DEL TALLER DE LISTAS
	Copyright: 
	Author: Miguel Angel Banol David Duque y Pablo Emilio Hernandez
	Date: 06/12/20 15:15
	Description: Puntos: tipo 1: 1; tipo 2: 10; tipo 3: 1
*/


// DIRECTIVAS DE PREPROCESADOR

#include <iostream>
#include <stdlib.h>

using namespace std;


class TrianguloPascal 
{
	private:
		short h;
	
	public:
		TrianguloPascal() {};
		~TrianguloPascal () {cout << "\n\n\t Destruyendo Programa. \t\n\n";}
		int factorial (int);
		int combinacion (int, int);
		void setH (short);
		short getH();
	
};

void TrianguloPascal :: setH (short alt)
{
	h = alt;
}

short TrianguloPascal :: getH()
{
	return h;
}

int TrianguloPascal :: factorial (int n)
{
	 if(n<2)
        return 1;
    else
        return n * factorial(n-1); // Una funcion que se llama asi misma es recursiva.
}

int TrianguloPascal :: combinacion (int n, int r)
{
	if(r==1)
        return n;
    else
    {
        if(n==r)
            return 1;
        else
            return factorial(n) / (factorial(r) * factorial(n - r));
    }
}

main ()
{
	TrianguloPascal triangulo = TrianguloPascal();
	short altura = 0;
	
	cout << "\tDigite la altura del triangulo: ";
	cin >> altura; cout << endl;
	triangulo.setH(altura);
	
	
	
	cout << "\t Imprimiendo triangulo \t" << endl;
	
	for(int i=0; i<=triangulo.getH(); i++)
    {
        for(int ii=0; ii<=i; ii++)
            cout << triangulo.combinacion(i, ii) << "  ";
        cout << endl;
    }
    return 0;
} //ultima vez abierto 7 de dic
