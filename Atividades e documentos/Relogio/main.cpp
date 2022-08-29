#include <iostream>
#include <Relogio.h>

using namespace std;

int main()
{
    int x=0, y=0,z=0;


cout<<"Digite os dados do relogio(hora, min, sec):"<<endl;
cin>>x>>y>>z;
Relogio r(x,y,z);

r.addHora();
r.addMin();
r.addSec();

    return 0;
}
