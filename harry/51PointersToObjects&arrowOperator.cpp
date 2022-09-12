#include<iostream>
using namespace std;
class obj{
    public:
    int a;
    int b;
    void setData(int l , int m){
        a=l;
        b=m;
    }
    void getData(){
        cout<<a<<" "<<b<<endl;
    }
};
int main(){
    // //way 1
    // obj c;
    // c.a = 23;
    // c.b = 22;
    // c.getData();
    // //way 2
    // obj c;
    // obj *ptr = &c;
    // (*ptr).setData(1,2);
    // (*ptr).getData();
    // // way 3
    // obj *ptr = new obj;
    // (*ptr).setData(1,2);
    // (*ptr).getData();
    // //way 4
    // obj *ptr = new obj;
    // ptr->setData(1,2);
    // ptr->getData();
}