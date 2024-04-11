#include <iostream>
#include <math.h>
#include <iomanip>




using namespace std;



int main () {


float PesoDelUsuario;

float AlturaDelUsuario;

float ImcUsuario;


cout << "ingrese su peso en kilogramos"<<endl;
cin >> PesoDelUsuario;


cout << "ingrese su altura en metros"<<endl;
cin >> AlturaDelUsuario;

ImcUsuario = PesoDelUsuario/(AlturaDelUsuario*AlturaDelUsuario);


cout<<"su imc es igual a:"<<setprecision<<ImcUsuario<<endl;

if (ImcUsuario<16,5) {
cout<<"bajo peso severo";


}else if (ImcUsuario>=16,5&&ImcUsuario<18,5){
 cout<<"bajo peso";



 }else if (ImcUsuario>=18,5&&ImcUsuario<25){
    cout<<"peso normal";


}else if (ImcUsuario>=25&&ImcUsuario<30)
 cout<<"sobrepeso";




         return 0;
}
