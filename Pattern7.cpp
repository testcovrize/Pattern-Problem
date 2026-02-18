#include<iostream>
using namespace std;

int main(){
    int a,num=65;
    cin>>a;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=i; j++){
            char ch = char(num);
            cout<<ch<<" ";
	    num++;
        }
        cout<<endl;
    }
    return 0;
}

// A 
// B C 
// D E F 
// G H I J 
// K L M N O 