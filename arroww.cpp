#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter the number of lines";
    cin>>n;

    for(i=0;i<=n;i++){
        for(j=0;j<i;j++){
            cout<<"  ";
            
        }
        cout<<"*";
        cout<<endl;
    }

    for(i=1;i<=n-1;i++){
        cout<<"*  ";
    }
    cout<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            cout<<"  ";
        }
        cout<<"*";
        cout<<endl;
    }
}