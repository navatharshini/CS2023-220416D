//insertion sort

#include <bits/stdc++.h>

using namespace std;

int main(){
   // int n=5;
    vector<int> arr={9,3,42,1,5,7};
    int n=arr.size();
    for(int i=1;i<n;i++){
        int key=arr[i];
        if(key<arr[i-1]){
            int j=i-1;
            while(j>=0 && arr[j]>key ){
                swap(arr[j+1],arr[j]);
                j--;
            }
            
        }
    }
    for(int a:arr){
        cout << a << " ";
    }
    
    
}
