// #include<iostream>
// using namespace std;
// int main(){
//     // > pointeres :- pointers are variables that store the address of other variables
//     // > ever vaiable is stroed in memory with a address (ex 0x7ffedeffa33c in hexadecimal)

//     int a = 20;
//     // initializing a pointer
//     int *point; // > the use of star shows that it is a pointer, the data type of the pointer should be equal to the variable's adress it is going to store, in this case its "int"
//     //declating the pointer
//     point = &a; //> using the M-percent(&), we get the address of the vaiable , in this case a;

//     cout<<&a<<endl; //* prints the adress of a
//     cout<<point<<endl; //* prints the adress of a
//     // derefferncing
//     cout<<*point<<endl; //* gives the value of a

//     //modifing and acessign the variables through pointers
//     cout<<a<<endl; // o- 20
//     *point = 30; // asigns the vale of 30 to a
//     cout<<a<<endl; // o- 30

//     //topic 2- pointer arithmatic (++, --,+,-)
//     point++;
//     cout<<point<<endl; //the output adress will go +4 , coz int is of 4bytes. That is why we shold initialize a pointer with same data type

//     //topic 3- pointer array
//     int arr[]={10,20,30};
//     cout<<*arr<<endl; //this will show the value of 1st index

//     int *prt=arr;
//     // method 1the below code willl take the value to 4bytes
//     for(int i=0; i<3; i++){
//         cout<<*prt<<endl;
//         prt++;
//     }
//     //method 2
//     for(int i=0; i<3; i++){
//         cout<<"second method"<<endl;
//         cout<<*arr<<endl;
//         // arr++; //illegal
//         //so do this 
//         cout<<*(arr+i)<<endl;
//     }

//     //topic 4- pointer to pointer
//     a = 10;
//     int *p;
//     p = &a;

//     cout<<*p<<endl;
//     int **q = &p;
//     // derefrencing once
//     cout<<*q<<endl; //gives value of p i.e adress of a
//     cout<<**q<<endl; //gives value of a


//     return 0;
// }

//topic 5 - pointers to function , using a vaiable as a global vairable (by refference)
#include<iostream>
using namespace std;
void swapByValue(int a , int b){
    cout<<"passed by value"<<endl;
    int temp = a;
    a = b;
    b = temp;
}
void swapByRefference(int *a , int *b){
    cout<<"passed by refference"<<endl;
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int a = 20;
    int b = 30;

    swapByValue(a,b);
    cout<<a<<b<<endl; // there is no change in value of a and b as we have passed by value

    // passing by refference , works like a globla vriable
    int *aptr = &a;
    int *bptr = &b;
    swapByRefference(aptr , bptr);
    cout<<a<<b<<endl;
    //method 2
    swapByRefference(&a, &b);
    cout<<a<<b<<endl;
}