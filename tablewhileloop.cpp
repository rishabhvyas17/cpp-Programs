#include <iostream>
using namespace std;
int main(){
    cout<<"Enter Any number to print its table";
    int n,i=1;
    cin>>n;
    while(i<=10){
        cout<<"\n"<<n<<" * "<<i<<" = "<<n*i;
        i++;
    }
    return 0;
}