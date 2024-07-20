#include<iostream>
using namespace std;
// void greet(){         // fn declaration
//     cout<<"Hi"<<endl;
//     cout<<"Gd Mrng"<<endl;
//     return;
// }
// void usa(){         // fn declaration
//     cout<<"You are in USA"<<endl;
//     return;
// }
// void india(){         // fn declaration
//     cout<<"You are in INDIA"<<endl;
//     return;
// }
// int main(){  //main can only be called once      
//     greet();          //fn calling
//     cout<<"You are in MAIN"<<endl;
//     india();
//     usa();
//     return 0;
// }
//starts with main
//'return' is a keyword jisse fn ka khatma ho jata h

//***Pass by value: sirf value pass hoti h
//Ques: sum of 2 no. using fn
// void sum(int m, int n){  //m,n are formal parameters
//     cout<<m+n;
// }
// int main(){
//     // sum(2,5);
//     int a;
//     cout<<"Enter n1: ";
//     cin>>a;
//     int b;
//     cout<<"Enter n2: ";
//     cin>>b;
//     sum(a,b); //a,b are actual parameters
// }
//or
// int sum(int m, int n){  //m,n are formal parameters
//     return m+n;
// }
// int main(){
//     cout<<sum(5,6);
// }

//***Library fn: sqrt, pow, min, max....
// #include<cmath>
// int main(){
//     cout<<sqrt(5)<<" ";
//     cout<<cbrt(1000)<<" ";
//     cout<<min(4,8)<<" ";
//     cout<<max(4,8)<<" ";
//     cout<<pow(2,4)<<" ";

// }

//Ques: Perm and Comb
// int fact(int x){
//     int fact = 1;
//     for(int i=1;i<=x;i++){
//         fact*=i;
//     }
//     return fact;
// }
// int main(){
//     int n,r;
//     cout<<"Enter n: ";
//     cin>>n;
//     cout<<"Enter r: ";
//     cin>>r;
//     int nCr = fact(n)/(fact(r)*fact(n-r));
//     cout<<nCr;
// }

//Ques: Print Pascal Triangle: 1
//                            1 1
//                           1 2 1
//                          1 3 3 1
//                         1 4 6 4 1
//                       1 5 10 10 5 1
// int fact(int x){
//     int fact = 1;
//     for(int i=1;i<=x;i++){
//         fact*=i;
//     }
//     return fact;
// }
// int nCr(int n, int r){
//     return fact(n)/(fact(r)*fact(n-r));
// }
// int main(){
//     int a;
//     cout<<"Enter number: ";
//     cin>>a;
//     for(int i=0;i<=a;i++){
//         for(int k=0;k<=a-i-1;k++){ //spaces
//             cout<<" ";
//         }
//         for(int j=0;j<=i;j++){
//             cout<<nCr(i,j)<<" ";
//         }
//         cout<<endl;
//     }
// }

//***Scope of variable

//Ques: Swap 2 no. 
// int main(){
//     int x=1;
//     int y=5;
// //***using extra variable
//     // int temp;
//     // temp = x;
//     // x = y;
//     // y = temp;
//     //or
// //***using math
//     x = x + y;
//     y = x - y;
//     x = x - y;
//     cout<<x<<" "<<y<<endl;
// }

//Ques: Swap 2 no. using fn        
// void swap(int x, int y){  
//     int temp = x;
//     x = y;
//     y = temp;
// }
// int main(){
//     int x=1;
//     int y=5;
//     cout<<x<<" "<<y<<endl;
//     swap(x,y);  //****won't work bcz it is passed by value
//     cout<<x<<" "<<y<<endl;
// }

//***Pass by reference: address pass hota h fn mei
// void swap(int &x, int &y){  
//     int temp = x;
//     x = y;
//     y = temp;
// }
// int main(){
//     int x=1;
//     int y=5;
//     cout<<x<<" "<<y<<endl;
//     swap(x,y);  //****won't work bcz it is passed by value
//     cout<<x<<" "<<y<<endl;
// }