#include <iostream>
using namespace std;

const int a = 30;

int main(){
    int x,y;
    cin>>x>>y;
    int z1 = a-x;
    int z2 = a-y;
    if(z1<=29 && z2<=29){
        cout<<z1*z2<<endl;
    }
    return 0;
}