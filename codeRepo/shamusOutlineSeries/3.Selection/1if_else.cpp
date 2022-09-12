#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"select 0 - eng ,1 - hindi \n";
    cin>>a;

    if(a == 0){
        cout<<"hello \n";
    }
    else if(a == 1){
        cout<<"namaste \n";
    }
    else{
        cout<<"not a valid option \n";
    }

    return 0;
}