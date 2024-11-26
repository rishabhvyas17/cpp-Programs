#include <iostream>
using namespace std;
int main(){

    int i,j,space = 5;

    for(i=1;i<=4;i++){
        for(j=1;j<=space;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
        space--;

    }

    // cout<<endl;
    
    for(i=5;i>=1;i--){
        for(j=1;j<=space;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
        space++;

    }

    cout<<endl;
    space =0;

    for(i=5;i>=2;i--){
        for(j=1;j<=space;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
        space++;

    }

    for(i=1;i<=5;i++){
        for(j=1;j<=space;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
        space--;

    }
   

}