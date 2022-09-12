// <<!----------Shorting algo------------->>

// // 1.linear search
// #include<iostream>
// using namespace std;

// // int LinearSearch(int arr[], int size, int tobesearched){
// //     for (int i=0; i<=size; i++){
// //         if(arr[i]==tobesearched){
// //         return i;
// //     }
// //     }
// //     return -1;
// // }

// int main(){
//     int n;
//     cin>>n;

//     int arr[n];

//     for(int i=0 ; i<n; i++){
//         cin>>arr[i];
//     }

//     int whattosearch;
//     cin>>whattosearch;
//       for (int i=0; i<=n; i++){
//         if(arr[i]==whattosearch){
//         cout<<i;
//         }
//     }

//     // cout<<LinearSearch(arr, n, whattosearch);
    

// }

////2.Binary search
#include<iostream>
using namespace std;
int binarySearch(int arr[] , int n, int key){
    int start = 0;
    int end = n;

    while(start<=end){
        int mid = (start+end)/2; //mid point
        if (arr[mid] == key){
            return mid; //retuns the index
        }

        else if(arr[mid] > key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }return -1;
}

int main() {
    int n;
    cin>>n; //size of the arry 
    int arr[n];

    //arry input (shoted in accending order )
    for( int i =0 ; i < n; i++){
        cin>>arr[i]; //input from zero to n-1
    }


    cout<<"give what to search \n";
    int key; // to be found 
    cin>>key;

    cout<<binarySearch(arr , n, key);
}

// // C++ program to implement recursive Binary Search
// #include <iostream>
// using namespace std;
// int binarySearch(int arr[], int n , int key)
// {
//     int start = 0;
//     int end= n-1;

// 	while (start <= end) {
// 		int mid = start + end/ 2;

// 		// Check if key is present at mid
// 		if (arr[mid] == key)
// 			return mid;

// 		// If key is smaller, ignore right half
// 		if (arr[mid] > key)
// 			end = mid - 1;

// 		// If key greater, ignore left half
// 		else
// 			start = mid + 1;
// 	}

// 	return -1;
// }

// int main()
// {
//     int n;
//     cin>>n;
// 	int arr[n];
//     for (int i=0; i<n ; i++){
//         cin>>arr[i];
//     }

// 	int key;
//     cin>>key;
//     cout<<binarySearch(arr , n, key);

// 	// int n = sizeof(arr) / sizeof(arr[0]);
// 	// int result = binarySearch(arr,  n, key);
// 	// (result == -1) ? cout << "Element is not present in array"
// 	// 			: cout << "Element is present at index " << result;

// }

