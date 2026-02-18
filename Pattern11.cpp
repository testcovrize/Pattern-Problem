#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=a-i; j++){
            cout<<" "<<" ";
        }
        int k=i;
        for(int j=1; j<=i; j++){
            cout<<k<<" ";
             k++;
        }
       
        cout<<endl;
    }
    return 0;
}

//       1 
//     2 3 
//   3 4 5 
// 4 5 6 7 