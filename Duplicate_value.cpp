#include<iostream>
#include <vector>
using namespace std;
vector<int> duplicate_value(vector<int>& a){
    vector<int> duplicate;
    
    for(int i=0; i<a.size(); i++){
        for(int j=0; j<i; j++){
            if(a[i]==a[j]){
              bool already_value=false;
              for(int k=0; k<duplicate.size(); k++){
              if(duplicate[k]==a[i]){
                  already_value= true;
                  break;
                 }
              }
              if(!already_value){
                duplicate.push_back(a[i]);
                break;
              }
            }
        }
    }
    return duplicate;
}

int main() {
	vector<int> a={1,4,3,2,6,6,5,4,6,5,5,7,7,7,7,7};
	vector<int> result=duplicate_value(a);
	cout<<"All the duplicate value is: ";
	for(int X:result){
	    cout<<X<<" ";
	}
	return 0;
}
