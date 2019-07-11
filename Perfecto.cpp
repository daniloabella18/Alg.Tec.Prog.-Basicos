#include <iostream>

using namespace std;

int perfecto(int a);

///----------------------------------------------------------------------///
///Programa principal

int main ()
{   int a;
    cout<<"Ingrese un numero:"<<endl;
    cin>>a;
    if(perfecto(a)==1)
    {
        cout<<"Es perfecto"<<endl;
    }
    else
    {
        cout<<"No es perfecto"<<endl;
    }
    return 0;
}

///----------------------------------------------------------------------///
///Funcion

int perfecto(int a)
{ int suma=0,b=1;
  while(suma<a)
  { if((a%b)==0);
    {  suma=suma+b;
    }  b++;
  }
  if ((suma)==a)
    { return 1;
    }
    else
    {return 0;
    }
}
