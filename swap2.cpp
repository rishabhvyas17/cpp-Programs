#include <iostream>
using namespace std;
int main(){
    int a = 10, b = 20;
    int c = a;
    a = b;
    b = c;
    cout<<"a: "<<a<<"\nb: "<<b;
    return 0;

}