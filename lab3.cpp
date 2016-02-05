#include <stdlib.h>
#include <time.h>
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void llenado(double []);
void ordenarlo(double tab[], double lon);


int main(int argc, char*argv[]){
	srand(time(NULL));
	int opcion =1;
	double tabla_highscore[10];

	do {
    	cout<<"1 Ejercicio1"<<endl;
    	cout<<"2 Ejercicio2"<<endl;
    	cout<<"Salir (cualquier numero)"<<endl;
    	cin>>opcion;

    	int jugador =0;
    	if (opcion == 1){
      		int numero =0;
      		int continua=1;
      		llenado(tabla_highscore);

      		cout<<"Bienvenido"<<endl;

      		while (continua==1){
      			double magic=(rand()%1000)-500;
      			cout<<"MAGIC= "<<magic<<endl;
      			int num_intentos=0;

      			while (numero != magic){
      				cout << "Ingrese un numero";
      				cin >> numero ;
      				num_intentos = num_intentos +1;
      			} // fin  while

      			if(numero == magic){
      				cout << "Sos un crack, GANASTE!"<<endl;
					cout << "Desea continuar (1 -Si , 2 -No)";
      				cin >> continua;
      			}

      			if (continua ==1){
      				tabla_highscore[jugador]=num_intentos;
      				jugador = jugador +1;
      			}else {
      				ordenarlo(tabla_highscore, 10);
      				for (int i= 0 ;i <10;i++){
      					cout <<tabla_highscore[i]<<endl;
      				}
      				break;
      			}
      			if (jugador==10){
      				ordenarlo(tabla_highscore, 10);
      				for (int i= 0 ;i <10;i++){
      					cout <<tabla_highscore[i]<<endl;
      				}
      				break;
      			}

      		}// fin del while

     }// fin del if del ejercicio 1

     if (opcion == 2){
     	const int ROW=4;
		const int COL=3;
		unsigned short int matriz[ROW][COL];
		srand(time(NULL));

		for (int i = 0; i < ROW; ++i){
			for (int j = 0; j < COL; ++j){
				if (j==0){
					matriz[i][j]=(rand()%30)+85;
				}
			}
		}


     }
        
}while(opcion>0 && opcion<3);// fin del do while
   

 return 0;
}

void llenado(double tabla[]){
	for (int i =0; i<10; i++){
		tabla[i]=1000;
	}

}

void ordenarlo(double tab[], double a){
	int lol;
	for(int i=0;i<a;i++){
		for(int j=0;j<a-1;j++){
			if(tab[j]>tab[j+1]){
				lol=tab[j];
				tab[j]=tab[j+1];
				tab[j+1]=lol;
			}
		}
	}
}
