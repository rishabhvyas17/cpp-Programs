#include <iostream>
using namespace std;
int main(){

    int j,m =8;

    for(int i=0;i<m;i++){
        for(j=0;j<m-i-1;j++){
            cout<<" ";
        }
        cout<<"*";

        if(i!=0 && i!=m-1){
            for(j=0;j<2*i-1;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        if(i==m-1){
            for(j=0;j<=m*2-3;j++){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    for(int i=0;i<m-1;i++){
        for(j=0;j<i+1;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=m-2){
            for(j=0;j<2*(m-i)-5;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;

    }
    int n =m-2;
        for(int i=0;i<n;i++){
        for(j=0;j<m-i-1;j++){
            cout<<" ";
        }
        cout<<"*";

        if(i!=0 && i!=m-3){
            for(j=0;j<2*i-1;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        if(i==m-3){
            for(j=0;j<=n*2-3;j++){
                cout<<"*";
            }
        }
        cout<<endl;
    }

}