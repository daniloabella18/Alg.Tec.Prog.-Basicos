#include <iostream>

using namespace std;

int main ()

{
    int num,cont=2,resto,CD=2;
    cout<<"Ingrese un numero"<<endl;
    cin>>num;
    while (cont<=num-1)
    {
        resto=num%cont;
    if (resto==0)
        {
            CD++;
        }
        cont++;
    }
    if (CD==2)
        cout<<num<<" es primo";
    else
        cout<<num<<" no es primo";
    return 0;
}
