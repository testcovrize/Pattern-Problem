#include<iostream>
#include <vector>
using namespace std;
vector<int> missing_value(vector<int>& arr){
     int maxi=0;
    for(int i=0; i<arr.size(); i++){
        if(maxi<arr[i])
        {
            maxi=arr[i];
            
        }
    }
      vector<int> missing;
    for(int j=maxi; j>=1; j--){
        bool found=false;
        for(int i=0; i<arr.size(); i++){
        if(arr[i]==j){
            found=true;
            break;
             }
        }
        if(!found){
            missing.push_back(j);
        }
    }
    return missing;
      
}

int main() {
vector<int> arr={1, 2, 4,5,7};
vector<int> result=missing_value(arr);
 for(int X:result){
     cout<<X<<" ";
 }
return  0;
}