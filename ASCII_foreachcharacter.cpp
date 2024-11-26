#include <iostream>
using namespace std;
int main(){
    cout<<"Enter any string";
    string s;
    cin>>s;
    int i=0 , val;
    char ch;
    cout<<"\n Character \t ASCII Value \n";

    while(s[i])
    {
        ch = s[i];
        val = ch;
        cout<<"  " <<ch << "\t\t\t" << val << endl;
        i++;
    }
    cout << endl;
    return 0;
}