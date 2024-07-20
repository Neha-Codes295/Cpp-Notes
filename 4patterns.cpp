#include<iostream>
using namespace std;
int main(){
//Ques: Print ****
//            ****
//            ****
    // int m=3, n=4;
    // for(int i=0;i<m;i++){      //rows
    //     for(int j=0;j<n;j++){  //columns
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
//Ques: Print 1234
//            1234
//            1234
    // int m=3, n=4;
    // for(int i=1;i<=m;i++){      //rows
    //     for(int j=1;j<=n;j++){  //columns
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
//Ques: Print ABCD
//            ABCD
//            ABCD
    // int m=3, n=4;
    // for(int i=1;i<=m;i++){      //rows
    //     for(int j=1;j<=n;j++){  //columns
    //         char ch = (char)j+64 ;
    //         cout<<ch;
    //     }
    //     cout<<endl;
    // }
//Ques: Print *
//            **
//            ***
//            ****
    // int m=4, n=4;
    // for(int i=1;i<=m;i++){      //rows
    //     for(int j=1;j<=i;j++){  //columns
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
//Ques: Print 1
//            12
//            123
//            1234
    // int m=4, n=4;
    // for(int i=1;i<=m;i++){      //rows
    //     for(int j=1;j<=i;j++){  //columns
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
//Ques: Print ****
//            ***
//            **
//            *
    // int m=4, n=4;
    // for(int i=1;i<=m;i++){          //rows
    //     for(int j=1;j<=n-i+1;j++){  //columns
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
//Ques: Print 1
//            13
//            135
//            1357
    // // int m=4, n=4;
    // // for(int i=1;i<=m;i++){      //rows
    // //     for(int j=1;j<=i;j++){  //columns
    // //         cout<<2*j-1;
    // //     }
    // //     cout<<endl;
    // // }
    // int m=4, n=4;
    // for(int i=1;i<=m;i++){      //rows
    //     int a=1;
    //     for(int j=1;j<=i;j++){  //columns
    //         cout<<a;
    //         a+=2;
    //     }
    //     cout<<endl;
    // }
//Ques: Print 1
//            23
//            456
//            78910
    // int m=4, n=4;
    // int a=1;
    // for(int i=1;i<=m;i++){      //rows
    //     for(int j=1;j<=i;j++){  //columns
    //         cout<<a;
    //         a++;
    //     }
    //     cout<<endl;
    // }
//Ques: Print 1
//            01
//            101
//            0101
    // int m=4, n=4;
    // for(int i=1;i<=m;i++){      //rows
    //     for(int j=1;j<=i;j++){  //columns
    //         if((i+j) %2 == 0) cout<<1<<" ";
    //         else cout<<0<<" ";
    //     }
    //     cout<<endl;
    // }
//Ques: Print   *
//              *
//            *****
//              *
//              *
    // int n=5;
    // int mid = n/2 + 1;
    // for(int i=1;i<=n;i++){      //rows
    //     for(int j=1;j<=n;j++){  //columns
    //         if(i==mid || j==mid) cout<<"* ";
    //         else cout<<" ";
    //     }
    //     cout<<endl;
    // }
//Ques: Print    *
//              **
//             ***
//            ****
    int m=4, n=4;
    for(int i=1;i<=m;i++){          //rows
        for(int j=1;j<=n-i+1;j++){  //columns
            cout<<" ";
        }
        for(int j=1;j<=i;j++){  //columns
            cout<<"*";
        }
        cout<<endl;
    }

}