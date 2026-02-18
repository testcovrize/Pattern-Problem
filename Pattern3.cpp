#include<iostream>
using namespace std;

int main() {
  for(int i=1; i<=5; i++){
      if(i>=4){
            for(int j=5; j>=i+1; j--){
                cout<<" "<<" ";
            }
      }
      else{
            for(int j=5; j>=i; j--){
          cout<<" "<<" ";
      }
      }
      
      if(i>=4){
          for(int j=1; j<=i+1; j++){
              cout<<"*"<<" ";
          }
      }
      else{
      for(int j=1; j<=i; j++){
          cout<<"*"<<" ";
      }
      }
      
      cout<<endl;
  }
}

//           * 
//         * * 
//       * * * 
//   * * * * * 
// * * * * * * 