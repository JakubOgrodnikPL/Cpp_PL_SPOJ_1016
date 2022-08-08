#include <iostream>

using namespace std;

int v1,v2,hm;


int main()
{
    cin>>hm;

    for(int i=1; i<=hm; i++)
    {
        cin>>v1>>v2;
        cout<<2*v1*v2/(v1+v2)<<endl;
    }
    return 0;
}
