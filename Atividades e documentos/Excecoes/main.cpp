#include <iostream>

using namespace std;

int main()
{
    cout <<"Inicio!"<< endl;
    try{
    int y=2;
    int w=5;

    if(y==0)
    {
        throw string("Divisao por Zero");
    }
    if(w<0)
    {
        throw __LINE__;
    }
    int x= w/y;
    cout<<x<<endl;

    }catch(string e)
    {
        cout<<"ERRO: "<<e<<endl;
    }
    catch(int e)
    {
        cout<<"ERRO: "<<e<<endl;
    }

    cout<<"Fim!"<<endl;
    return 0;
}


