#include <iostream>
using namespace std;
int main(){
    // sum till n
    cout<<"sum till n";
    int n , i=1, sum=0;
    cin>>n;
    do{
        sum += i++;
        cout<<sum<<endl;
    }while(i<=n);

    // factorial "till" n , n! = n((n-1)!) but 0! =1
    cout<<"factorian till n";
    int m , j=1 , fct = 1;
    cin>>m;
    cout<<fct<<endl;
    do{
        fct *= j++;
        cout<<fct<<endl;
    }while(fct <= m);

    return 0;
}