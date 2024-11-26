#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter the numbver of Lines\n";
    cin>>n;
    for(i=1;i<=n;i++){
        if(i==1 || i==n){
            for(j=0;j<n;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        else{
            for(j=1;j<=2*n-1;j++){
                if(j==1 || j==2*n-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
}