#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"select 0 for eng and 1 for hindi"<<endl;
    cin>>a;

    switch (a)
    {
    case 0:
        cout<<"hello \n";
        break;
    case 1:
        cout<<"namaste"<<endl;
        break;
    default:
        cout<<"invalid option"<<endl;
        break;
    }
}