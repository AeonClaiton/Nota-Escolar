#include <iostream>
#include<cstdlib>
using namespace std;
int main(){
	int n1, n2, res;
	char opc;

	inicio:
	system("cls");
	cout << "Digite  o valor da nota1: ";
	cin >> n1;
	cout << "Digite o valor da nota2: ";
	cin >> n2;
	//cout << n1 + n2<<endl<<endl;
	res = n1 + n2;
	//cout << res;
	if (res/2 >= 60) {
		cout << "\nAluno Aprovado\n\n";
		cout << "Media final: " << res /2<<"\n";
	}
	else if (res / 2 >= 40) {
		cout << "\nAluno em recupercao\n\n";
		cout << "Media temporaria: " << res / 2 << "\n";
	}
	else {
		cout << "\nALuno Reprovado\n\n";
		cout << "Media final: " << res / 2 << "\n";
	}

	cout<<"Deseja repetir procedimento?(s/n): ";
	cin >> opc;
    if (opc == 's' || opc == 'S'){
	    goto inicio;
		}
	system("pause");
	return 0;
}
