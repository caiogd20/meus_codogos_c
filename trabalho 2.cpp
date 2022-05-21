#include <iostream>
using namespace std;

void criptografar(){
	char in[30],out[30];
	int  chave[10], pro[80];
	cout << "escreva a mesagem a ser criptografada" <<endl;
	cout << "escreva a chave" <<endl;
	cout << "mesagem criptografada" <<endl;
	cout << "obs guarde a cave para descriptografar" <<endl;
}
void descriptografar(){
	cout << "escreva a chave" <<endl;
	cout << "escreva a mesagem a ser descriptografada" <<endl;
	cout << "mesagem des3criptografada" <<endl;
}

int main() {
    int op;
    do{
        cout << "1-criptografar 2-descriptografar 0-sair" <<endl;
        cin >> op;
        switch (op)
{
   case 0:
        return 0;
        break;
   case 1:
   		criptografar();
        break;
	
   case 2:
   		descriptografar();
        break;

   default:
       cout << "entrada invalida" <<endl;
}
        system("pause");
        system("cls");
    }while (op != 0);
    

    return 0;
}
