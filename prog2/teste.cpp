#include<iostream>

using namespace std;

int soma(int,int);
int soma(int a, int b){
    return a+b;
}
int sub(int,int);
int sub(int a, int b){
    return a-b;
}
int mult(int,int);
int mult(int a, int b){
    return a*b;
}
int divi(int,int);
int divi(int a, int b){
    return a/b;
}
int main(){
     int c, d,v;
     char op;
    do
    {
        cin>>c>>d;
        cout<<"Qual operacao deseja ultilizar.";
        cin>>op;
        switch(op){
            case 'S': cout<< soma(c,d)<<endl;
            case 'N': cout<< sub(c,d)<<endl;
            case 'M': cout<< mult(c,d)<<endl;
            case 'D': cout<< divi(c,d)<<endl;
        }
            cout<<"Deseja Continuar?"<<endl<<"Sim(1), Não(2)"<<endl;
        cin>>v;

    } while (v==1);
    
}