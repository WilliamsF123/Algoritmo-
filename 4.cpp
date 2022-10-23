/*
//  NUMERO PALINDROMO 

#include <iostream>
using namespace std;
int main() {
int x, number, reverse = 0, temp ;
cout << "Por favor ingrese un numero aqui : ";
cin >> number;
x = number;
 do {

temp = number % 10;
reverse = (reverse * 10) + temp;
number = number / 10;
} while (number != 0);
cout << " El reverso del numero es: " << reverse << endl;
if (x == reverse)
cout << " El numero ingresado es un palindromo. ";
else
cout << " El numero ingresado no es un palindromo.";
return 0;
}
*/

// PALABRA PALINDROMO 


#include <iostream>
using namespace std;
int main(){
    int i=0,j=0;
    string palabra=" ";
    cout<<"ingrese palabra "<<endl;
    cin >> palabra;
    for(i=0;i<palabra.length();i++){
        for(j=palabra.length()-1;j>=0;j--){
            if(palabra[i]==palabra[j]){
                cout<<"es palindromo "<<endl;
            }
            else{
                cout<<"no lo es "<<endl;
            }
        }
    }
 
 
    return 0;
}
