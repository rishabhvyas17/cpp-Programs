#include <iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            cout<<"*\t";
        }
        cout<<"\n";
        cout<<"\n";
    }
    cout<<"\n";
    int r,v;
    for(r=5;r>=1;r--){
        for(v=1;v<=r;v++){
            cout<<"*\t";
        }
        cout<<"\n";
        cout<<"\n";
    }
}