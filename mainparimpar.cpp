#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int numero,rpta;
	cout <<"Digite un numero :";
	cin>>numero;
	rpta=numero%2;
	if(rpta==0){
		cout <<"El numero es Par";
	}
	else {
		cout <<"El numero es Impar";
	}
	return 0;
}
