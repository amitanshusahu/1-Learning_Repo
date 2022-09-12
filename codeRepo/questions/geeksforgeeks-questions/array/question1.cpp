/*Given an unsorted array arr[] of size N.
 Rotate the array to the left (counter-clockwise direction) by D steps,
 where D is a positive integer.
 >>input:
 >arr[n] = {1, 2, 3, 4, 5}
 >n=5
 >d=2
 >>expected output:
 >{3, 4, 5, 1, 2}
 */
// **my trial**

#include<iostream>
using namespace std;
int rotatearr(int arr[] , int n, int d){
    int newarr[n];
    int j =0;
    int k = n-d; 
        for(int i = d; i<n;i++){
            newarr[j]=arr[i];
            j++;
        }
        for(int i=0; i<d ; i++){
            newarr[k] = arr[i];
            k++;
        }
        for(int i = 0; i <n; i++){
            cout<<newarr[i]<<" ";
        }
        cout<<endl;

}
int main(){
    cout<<"\t\t\t ***geeks for geeks problem-1**** \n\n\n";
    int n;
    int arr[n];
    cout<<"give size of array\n";
    cin>>n;
    cout<<"give the arry index data\n";
    //arry input
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //arry chk
    cout<<"\n arr = ";
    for(int i=0; i<n; i++){
        cout<<arr[i];
        cout<<" ";
    }
    cout<<endl;
    int d;
    cout<<"give till which nedex number you want to revert \n rmember that d<="<<n<<endl;
    cin>>d;
    cout<<"output: "<<endl;
    rotatearr(arr , n , d);

}