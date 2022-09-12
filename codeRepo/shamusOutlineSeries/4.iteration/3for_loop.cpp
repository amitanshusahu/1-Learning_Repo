#include<iostream>
using namespace std;
int main() {
    // sum till n
    cout<<"sum till n"<<endl;
    int n , sum = 0;
    cin>>n;
    for (int i=0; i<=n;i++){
        sum+=i;
        cout<<sum<<endl;
    }
    // more than one control variable
    for (int m=95, l=11; m%l > 0; m -= 3, n++){
        cout << m << "%" << l << " = " << m%l << endl;
    }
    // forever for loop , finding average on given number
    cout<<"give interger (0 to quit)"<<endl;
    int o , add =0 , size = 0;
    for(;;){
        cin>>o;
        if(o <= 0) break;
        size++;
        add += o;
    }
        cout<<"average = "<< float (add)/size<<endl;
    return 0;
}