//***String is a char array
#include<iostream>
#include<string>
using namespace std;
int main(){
    // char arr[4] = {'N','E','H','A'};
    // for(int i=0;i<4;i++){
    //     cout<<arr[i];
    // }
//or
    // string str;
    // cout<<"Enter a string: ";
    // // cin>>str; //space se phle sb print hoga mtlb sirf ek word
    // getline(cin,str);
    // cout<<str;  

//Ques: input a str of length n and count all th vowels in it
    // string str;
    // cout<<"Enter a string: ";
    // getline(cin,str);
    // cout<<"Length of str is: "<<str.length();
    // int count = 0;
    // for(int i=0;i<str.length();i++){
    //     if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
    //         count++;
    //     }
    // }
    // cout<<endl<<count;

//***Built-in string fn
    // string s = "Neha";
    // cout<<s<<endl;
    // s.push_back('a'); //char is attached at end
    // cout<<s<<endl;
    // s.push_back('a');
    // cout<<s<<endl;
    // s.pop_back(); //char is removed from end
    // cout<<s<<endl;
    // s.pop_back();
    // cout<<s<<endl;
    // s.append(" bhatoa"); //string is extended
    // cout<<s<<endl;
    // s.clear(); //whole str is cleared
    // cout<<s<<endl;

//*** '+' operator
    // string s = "Neha";
    // cout<<s<<endl;
    // s = s + " bhatoa";
    // cout<<s<<endl;
    // reverse(s.begin(),s.end());
    // cout<<s<<endl;

//Ques: input str of even length anf reverse its 1st half
    // string s = "Neha";
    // cout<<s<<endl;
    // int n = s.length();
    // int i = 0;
    // int j = n/2 - 1;
    // while(i<j){
    //     char temp = s[i];
    //     s[i] = s[j];
    //     s[j] = temp;
    //     i++;
    //     j--;
    // }
    // cout<<s<<endl;

//**to_string() : int to str
    // int x = 4534563;
    // string s = to_string(x);
    // s += " neha";
    // cout<<s<<" "<<s.length();

//**stoi : str to int
//    string s = "646436";
//    int x = stoi(s);
//    cout<<x+1;

}