#include<iostream>
using namespace std;

int main() {
    int a;
    cin>>a;
    int k=1;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=i; j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }

    return 0;
} 

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 