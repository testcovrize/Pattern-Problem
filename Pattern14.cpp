#include<iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	
	for(int i=1; i<=a; i++){
	    for(int j=i*2-1; j>=i; j--){
	        cout<<j<<" ";
	    }
	    cout<<endl;
	}
	return 0;

}

// 1 
// 3 2 
// 5 4 3 
// 7 6 5 4 
