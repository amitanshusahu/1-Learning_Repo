//...seclection short.... : by swaping n and n+1 in n is greater than n+1 in this way we will get the acending order shorthing
// #include<iostream>
// using namespace std;
// int main() {
//     int n; 
//     cin>>n;
    
//     int arr[n];

//     //input arr
//     for(int i=0 ; i<n; i++){
//         cin>>arr[i];
//     }
//     //short
//     for(int i=0 ; i<n-1; i++){
//         for(int j=i+1 ; j<n ; j++){
//             if( arr[j] < arr[i]){
//                 int temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }

//     //print arr shorted
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// >>>>bubble short >>> of in wrong order than swap,, by doing this the maximum element will go to the last
#include<iostream>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int arr[n];

    for(int i=0; i <n ; i++){
        cin>>arr[i];
    }

    
}