#include <iostream>
//don't forget adding this in order to use the setprecison()
#include <iomanip>

#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    char ch;
    float d;
    double e;
    
    cin>>a;
    cin>>b;
    cin>>ch;
    cin>>d;
    cin>>e;
    
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<ch<<endl;
    cout<<setprecision(15)<<d<<endl;
    cout<<setprecision(15)<<e<<endl;
    return 0;
}
