#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Dopka{
  public:
    Dopka() {
        d = o = p = k = a = 0;
    }
    Dopka(int d, int o, int p, int k, int a) {
        this->d = d;
        this->o = o;
        this->p = p;
        this->k = k;
        this->a = a;

    }

    void Eshechka() {
        cout<<" E = "<<E<<endl;
        cout<<" E = "<<d<<"; D = "<<o<<"; C = "<<p<<"; B = "<<k<<"; A ="<<a<<endl;
    }

    int d;
    int o;
    int p;
    int k;
    int a;
    const int E = 60;
};

int main()
{
   /* Dopka dopka(60,70,80,90,100);
    dopka.Eshechka();
    //writing object in file.txt
    ofstream out;
    out.open("Dopka.txt", ofstream::app);
    if(out.is_open()){
      cout<<" Eshechka "<<endl;
	  out.write((char*)&dopka, sizeof(Dopka));
    }else{
     cout<<" File wasn`t open! "<<endl;
    }
    out.close();*/
    //reading object of class from file.txt
    Dopka glusty;
    ifstream in;
    in.open("Dopka.txt");
    if(in.is_open()){
      cout<<" Eshechka "<<endl;
	  in.read((char*)&glusty, sizeof(Dopka));
    }else{
     cout<<" File wasn`t open! "<<endl;
    }
    in.close();
        return 0;
}
