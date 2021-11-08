#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

int num[3], ranNum[3], aciertos;
char continuar;

int main(){
	do{
		system("cls");
		aciertos = 0;
		
		cout<<"Para ganar necesitas al menos dos aciertos en la misma posicion..."<<endl<<endl;
		cout<<"Ingrese numeros entre el 1 y el 9"<<endl<<endl;
		
		do{
			cout<<"Ingrese el primer numero.."<<endl;
			cin>>num[0];
		}while(num[0] <0 || num[0]>9);
		
		do{
			cout<<"Ingrese el segundo numero.."<<endl;
			cin>>num[1];
		}while(num[1] <0 || num[1]>9);
		
		do{
			cout<<"Ingrese el tercer numero.."<<endl;
			cin>>num[2];
		}while(num[2] <0 || num[2]>9);
		
		system("pause");
		system("cls");
		
		srand(time(NULL));
		
		for(int i=0; i<3; i++){
			ranNum[i] = 1 + rand()%9;
		}
		
		cout<<"Sus numeros son:.."<<endl;
		cout<<num[0]<<endl;
		cout<<num[1]<<endl;
		cout<<num[2]<<endl;
		
		cout<<"Los numeros de la ruleta son:.."<<endl;
		for(int i = 0; i<3; i++){
			cout<<ranNum[i]<<endl;
		}
		
		for(int i = 0; i<3; i++){
			if(ranNum[i] == num[i]){
				aciertos++;
			}
		}
		
		if(aciertos >= 1){
			cout<<"GANASTE..."<<endl;
		}else{
			cout<<"numero de aciertos: "<<aciertos<<endl;
			cout<<"PERDISTE.."<<endl;
		}
		
		cout<<"desea volver a jugar?? s/n"<<endl;
		cin>>continuar;
		
	}while(continuar != 'n');
}

































