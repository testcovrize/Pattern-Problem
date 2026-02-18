#include<iostream>
using namespace std;

int main() {
	int a; 
	cin>>a;
	for(int i=1; i<=a; i++){
	    for(int j=1; j<=i; j++){
	        int k=i+j;
	          if(k%2==0){
	              cout<<"1"<<" ";
	          }
	          else{
	              cout<<"0"<<" ";
	          }
	    }
	    cout<<endl;
	}
return 0;
}

// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 
