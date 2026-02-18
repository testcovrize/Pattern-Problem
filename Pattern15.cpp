#include<iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	
	for(int i=1; i<=a; i++){
	    for(int j=1; j<=a-i; j++){
	        cout<<" "<<" ";
	    }
	    
	    for(int j=i; j<2*i; j++){
	        cout<<j<<" ";
	    }
	    
	    for(int j=2*i-2; j>=i; j--){
	        cout<<j<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
//       1 
//     2 3 2 
//   3 4 5 4 3 
// 4 5 6 7 6 5 4