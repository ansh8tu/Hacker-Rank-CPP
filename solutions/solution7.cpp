#include <iostream>
#include<stdio.h>
using namespace std;

void update(int *a,int *b) {
    int c = *a;
    *a = *a + *b;
    *b = c - *b;
    
    if(*b < 0){
        *b = -(*b);
    }

}

int main() {
    int a, b;
    int *pa = &a;
    int *pb = &b;
    
    cin>>a;
    cin>>b;
    
    update(pa, pb);
    
    cout<<a<<endl;
    cout<<b<<endl;

    return 0;
}
