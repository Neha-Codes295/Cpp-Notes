#include<iostream>
using namespace std;
//***recursion is fn calling itself
//Ques: Recurse hi 3 times
// void greet(int n){
//     if(n==0) return;  //base case
//     cout<<"Hi"<<endl;
//     greet(n-1);
// }
// int main(){
//     greet(3);
// }

//Ques: recurse no. from 1 to n
// void print(int n){
//     if(n==0) return;  //base case
//     cout<<n<<endl;
//     print(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     print(n);
// }

//or
//with extra parameter
// void print(int x, int n){
//     if(x>n) return;  //base case
//     cout<<x<<endl;
//     print(x+1, n);
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     print(1,n);
// }

//or
//without extra parameter
// void print(int n){
//     if(n==0) return;  //base case
//     print(n-1);  //call
//     cout<<n<<endl;  //work
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     print(n);
// }

//Ques: Print sum of 1 to n
// int sum(int n){
//     if(n==0) return 0;
//     return n + sum(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     cout<<sum(n);
// }

//Ques: find fact using recursion
// int fact(int n){
//     if(n==0 || n==1) return 1;
//     return n * fact(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     cout<<fact(n);
// }

//Ques: wap to find a raised to power b using recursion
// int pow(int a, int b){
//     if(b == 0) return 1;
//     return a * pow(a,b-1);
// }
// int main(){
//     int a, b;
//     cout<<"Enter base: ";
//     cin>>a;
//     cout<<"Enter power: ";
//     cin>>b;
//     cout<<a<<" raised to the power "<<b<<" is "<<pow(a,b);
// }

//Ques: wap to find nth fibbonacci no. using recursion
//**tree diagram of this ques is called as Euler's Tour Tree
// int fibo(int n){
//     if(n==1 || n==2) return 1;
//     return fibo(n-1) + fibo(n-2);
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     cout<<fibo(n);
// }