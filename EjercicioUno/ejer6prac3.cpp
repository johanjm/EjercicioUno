#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int b=0,d=1,a;
    while(d<=5){
        while(b==0){
            cout<<d<<". Ingrese el número: ";
            cin>> a;
            if(a>=1 && a<=30){
                b=1;
            }else{
                cout<<"el número ingresado debe ser entre 1 y 30"<<endl;
            }
        }
        b=0;
        for(int i=1;i<=a;i++){
            cout<<"*";
        }
        cout<<endl;
        d++;
    }
}
