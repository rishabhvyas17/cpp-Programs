#include <iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter Any number to print its table";
    cin>>n;
    for(i=1;i<=10;i++){
        cout<<"\n"<<n<<" * "<<i<<" = "<<n*i;
    }
}