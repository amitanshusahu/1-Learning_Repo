#include<iostream>
using namespace std;
class student{
        string name; //private, default
        public:
        // string name;
        int age;
        //constructors :- when we want to define a object and its value in a single line , it's of 3 types
        //parameterized constuctor:- constuctor with prameters
        student (string s){
            name = s;
        }
        //default constructor:- we have to make this , oterwise we get err if we make another constructor
        student (){
            cout<<"default constructor, a new object has been made"<<endl;
        }
        //copy constructor
        student(student &a){
            name=a.name;
            age=a.age;
        }

        //destructors:- these are present by default but can be tested by using "~" , these functions take no parameter and no return , destruct the constrotor at the end of the main function
        ~student(){
            cout<<"the constructures have been destroyed"<<endl;
        }
        //set function , to acess the private data members
        void setName(string s){
            cout<<"set function \n";
            name = s;
        }
        //get function , similarly this will acess the private data members
        void getName(){
            cout<<name<<endl;
        }

        //to print , a function
        void printInfo(){
            cout<<"printing info"; 
            cout<<"name"<<name<<endl;
            cout<<"age"<<age<<endl;
        };
    };
int main() {
    // student a;
    // a.name = "lola";
    // cout<<a.name<<endl;

    // //using arry rather than multiple defining
    ////itrating input
    // student arr[3];
    // for(int i=0 ; i <3 ; i++){
    //     cout<<"name";
    //     cin>>arr[i].name;
    //     cout<<"age";
    //     cin>>arr[i].age;
    // };
    // // itrating input , also using the setter function
    // student arr[3];
    // for(int i=0 ; i <3 ; i++){
    //     cout<<"name";
    //     string s;
    //     cin>>s;
    //     arr[i].setName(s);
    //     cout<<"age";
    //     cin>>arr[i].age;
    // };
    // cout<<"the output"<<endl;

    // //itrating output
    // for(int i=0; i<3 ; i++){
    //     arr[i].printInfo();
    // };

    // by using constructors
    student a("amith");
    a.getName();
    student b;


    // use of copy constructor
    student c = a;
    cout<<"c has been made and its values are:-"<<endl;
    c.getName();


    return 0;
}