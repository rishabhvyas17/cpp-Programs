#include <iostream>
using namespace std;
int main(){
    int count = 1,sum=0;
    int arr1[3][4];
    cout<<"Enter Elements in the array";
    for(int i =0;i<3;i++){
        for(int j =0;j<4;j++){
            cin>>arr1[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr1[i][j]<<"\t";
            sum+=arr1[i][j];
        }
        cout<<endl;
    }
    cout<<"Sum of array: "<<sum;
    return 0;
    
}