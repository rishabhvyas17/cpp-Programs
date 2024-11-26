#include <iostream>
using namespace std;
int sum(int a){
    int sum =0;
    for(int i=1;i<=a;i++){
        sum+=i;
    }
    return sum;
}
int fact(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n;
    cout<<"Enter the number : \n";
    cin>>n;
    cout<<"Sum = "<<sum(n)<<endl;
    cout<<"Factorial = "<<fact(n);
    return 0;
}