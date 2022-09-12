// //>>>>>>........using the pre defined functions.......<<<<<<<
///function that are available in the standard c++ library 

//1<@programme prints sqrt of a given number> 
// #include<iostream>
// #include<cmath>  //defines the sqrt()                      
// using namespace std;     
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<sqrt(n); //prints square root on given number
// }

//2<@programe test the formula sin2x=2sinx * cosx>
// #include <iostream>
// #include<cmath>   //defines sin()
// using namespace std;                 
// int main()                              
// {
//     int x;
//    do{
//     cout<<"sin2*_";    //takes input til 0;
//     cin>>x;
//     cout<<"\t\t\t\t\t\t 0 to exit the programe- \n";
//     cout<<"testing\t\nsin2*"<<x<<"="<<"\t"<<sin(2*x)<<" "
//     <<"\n2sin"<<x<<"*cos"<<x<<"=   "<<2*sin(x)*cos(x)<<"\n\n";
//    }while(x!=0);
// }






// //>>>>>>........using user defined functions.......<<<<<<<
//// types of fuction a user can define


// //@type-1< functon with out return value and without parameter >
// #include<iostream>
// using namespace std;
// void fun()  //function without return value add with out parameter
// {
//     int x=402;
//     cout<<x<<" ERROR";
// }
// int main()   //the main function, the fuction which c++ finds and runs
// {
//     fun();   //calls the fun()
//     cout<<"\nyes main() invoked the fun()";
// }

// //@type-2< funciton with no return value but with parameter>
// #include <iostream>
// using namespace std;
// int withpara(int lo) //function with return type and parameter , but no return value (returns grarbage)
// {
//     lo+=lo;
//     cout<<" ERROR  "<<lo<<endl;
// }
// int main() 
// {
//     cout<<withpara(202)<<" main() invoked withpara()"; //main calls withpara
// }

// //@type-3< function without parameter , but with return value >
// #include <iostream>
// using namespace std;
// int nopara()     //funcition with return type and value but without parameter 
// {
//     int y=8;
//     cout<<"ERROR\n";
//     return y;          //return value 
// }
// int main() {
//     cout<<nopara()<<"\tmain() invoked nopara()";  //main() invoked the nopara 
// }

// //@type-4< function with parameter and with return value  >
//<1@programme prints cube of a given number>
// #include<iostream>
// using namespace std;
// int cube(int no){
//    no=no*no*no;     //does cube
// }
// int main()
// {   int x;
//     cin>>x;
//     cout<<cube(x)<<endl;  //calls cube()
// }

//1<@progmae >
// #include <iostream>
// using namespace std;
