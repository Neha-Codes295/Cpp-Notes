#include<iostream>
using namespace std;
//Array: list of data of similar data type
// int main(){
    // int n;
    // cout<<"Enter n: ";
    // cin>>n;
    // int arr[n]; //declaration;
    // cout<<"Enter elt: ";
    // for(int i=0;i<n;i++){ //initialisation
    //     cin>>arr[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";  //accessing
    // }
    // cout<<endl;
    // arr[0] = 100;  //updation
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

// //or
//     // int arr[5]= {1,2,3,4,5};  //declaration + initialisation
//     int arr[]= {1,2,3,4,5}; //above or this are same
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }

// } 
//elt of array are stored in contiguous memory locations

//***Passing Array to fn (by reference by default)
// void change(int brr[]){
//     brr[0] = 10;
// }
// int main(){
//     int arr[3] = {1,2,3};
//     for(int i=0;i<3;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     change(arr);
//     for(int i=0;i<3;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//Ques: sum of all elt in array
// int main(){
//     int arr[] = {1,2,3,4};
//     int n = sizeof(arr)/4; //4 is bit size of int
//     int sum =0;
//     for(int i=0;i<n;i++){
//         sum += arr[i];
//     }
//     cout<<sum;
// }

//Ques: find max of all elt in array
// int main(){
    // int arr[] = {1,4,3,2,6};
    // int n = sizeof(arr)/4; //4 is bit size of int
    // int max = arr[0];
    // for(int i=0;i<n;i++){
    //     if(arr[i] > max){
    //         max = arr[i];
    //     }
    // }
    // cout<<max;
//for -ve no.
    // int arr[] = {-1,-4,-3,-2,-6};
    // int n = sizeof(arr)/4; //4 is bit size of int
    // int max = INT8_MIN;
    // for(int i=0;i<n;i++){
    //     if(arr[i] > max){
    //         max = arr[i];
    //     }
    // }
    // cout<<max;
// }

//Ques: find 2nd largest of all elt in array
// int main(){
//     int arr[] = {1,2,3,4,5,6};
//     int n = sizeof(arr)/4; //4 is bit size of int
//     int max = INT8_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i] > max){
//             max = arr[i];
//         }
//     }
//     int smax = INT8_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i] != max){
//             smax = arr[i];
//         }
//     }
//     cout<<max<<" "<<smax;
// }

//Ques: cpy elt of 1 arr to other in rev order
// int main(){
//with extra array
    // int arr[6] = {1,2,3,4,5,6};
    // int n = sizeof(arr)/4;
    // int brr[n];
    // for(int i=0;i<n;i++){
    //     int j = n-1-i;
    //     brr[i] = arr[j];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<brr[i]<<" ";
    // }
//without extra array
    // int arr[6] = {1,2,3,4,5,6};
    // int n = sizeof(arr)/4;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // int i = 0;
    // int j = n-1;
    // while(i<j){
    //     int temp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = temp;
    //     i++;
    //     j--;
    // }
    // cout<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
// }
