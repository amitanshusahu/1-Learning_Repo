#include<iostream>
using namespace std;
class myclass {
    //class is by default private 
    //< private data members>
    int integer;
    string name;
    //<oublic data members>
    public:
    string something;

    //member functions --
    //1.the setter function
    void setData(string name){
        something = name;
    }
    //2.the get function
    void getData(){
        cout<<something<<endl;
    }

};
int main(){
    ////making a object
    myclass myobject;
    ////acessin the object
    myobject.something = "nice";
    ////operation with the object
    cout<<myobject.something<<endl;
    
    ////using member fnctions
    //acessign the setter function
    myobject.setData("lola");
    //acessing the get function
    myobject.getData();
}