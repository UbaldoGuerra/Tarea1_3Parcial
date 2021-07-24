#include <iostream>
#include <math.h>

using namespace std; 

//ingresar dos números, realice la suma, resta, multiplicación y división a través de las funciones

int operaciones(){
	
	system ("cls");
	
	cout<<"********************************************\n";
	cout<<"*  Suma, Resta, Multiplicacion y Division  *\n";
	cout<<"********************************************\n";
}

int suma (int n1, int n2){
	int resultadoS;
	resultadoS = n1 + n2;
	return resultadoS;
}

int resta (int n1, int n2){
	int resultadoR;
	resultadoR = n1 - n2;
	return resultadoR;
}

int multiplicar (int n1, int n2){
	int resultadoM;
	resultadoM = n1 * n2;
	return resultadoM;
}

double
 division(double n1, double n2){
	double resultadoD;
	resultadoD = n1 / n2;
	return resultadoD;
	
}


int main(int argc, char** argv) {
	double n1, n2, sumaF, restaF, multiplicacionF, divisionF;
	
	operaciones();
	cout<<"Ingrese primer numero: ";
	cin>>n1;
	cout<<"Ingrese segundo numero: ";
	cin>>n2;
	
	sumaF=suma(n1, n2);
	cout<<"\n";
	cout<<"La suma es: "<<sumaF<<endl;
	
	restaF=resta(n1, n2);
	cout<<"\n";
	cout<<"La resta es: "<<restaF<<endl;
	
	multiplicacionF=multiplicar(n1, n2);
	cout<<"\n";
	cout<<"La multiplicacion es: "<<multiplicacionF<<endl;
	
	if (n2==0){
		cout<<"\n";
		cout<<"No se puede dividir entre cero."<<endl;
	} else{
		divisionF=division(n1, n2);
		cout<<"\n";
		cout<<"La division es: "<<divisionF<<endl;
	}
	
	return 0;
}
