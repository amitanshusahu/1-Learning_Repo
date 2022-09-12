#include<iostream>
using namespace std;
int main(){
    // using while loop find sum till 
    cout<<"sum till n"<<endl;
    int n , i=1;
    cin>>n;
    long sum = 0;
    while(i <= n){
        sum += i++;
        cout<<sum<<endl;
    }
    // fibonacci number till m - 0, 1, 0+1=1, 1+1=2, 2+1=3, 3+2=5...
    cout <<"n fibonacci numbers"<<endl;
    int f0 = 0, f1 = 1 ,m;
    cin>>m;
    cout<<f0<<endl
        <<f1<<endl;
    while (true){
        int f2 = f0 + f1;
        if(f2 > m)break; // or if(f2>m)exit(0)
        cout<<f2<<endl;
        f0 = f1;
        f1 = f2;
    }

    return 0;
}