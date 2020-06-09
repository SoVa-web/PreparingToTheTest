#include <iostream>
#include <string>

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
    Dopka dopka(60,70,80,90,100);
    dopka.Eshechka();
    return 0;
}
