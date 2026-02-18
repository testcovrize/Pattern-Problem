#include<iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
 for(int i=1; i<=a; i++){
     if(i>=2){
     for(int j=1; j<=i-1; j++){
         cout<<" "<<" ";
     }
     }
     for(int j=a; j>=i; j--){
         cout<<"*"<<" ";
     }
     
     cout<<endl;
 }
}
// * * * * * 
//   * * * * 
//     * * * 
//       * * 
//         * 