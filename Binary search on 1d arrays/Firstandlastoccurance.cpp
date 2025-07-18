#include<iostream>
#include<vector>

using namespace std;


void print(vector<int> &arr){
    for (int i = 0; i < arr.size();i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
vector<int> find(vector<int>& arr, int x) {
        // code here
        vector<int>result;
        int low=0;
        int high=arr.size()-1;
        int first=-1;
        int last=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==x){
                first=mid;
                high=mid-1;
            }
            else if(arr[mid]<x){
                    low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        result.push_back(first);
        low=0;
        high=arr.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==x){
                last=mid;
                low=mid+1;
            }
            else if(arr[mid]<x){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        result.push_back(last);
        return result;
        
        
    }
    
int main(){
    int n;
    cin>>n;
    int x;
    vector<int> arr;
    for (int i = 0; i < n;i++){
        cin >> x;
        arr.push_back(x);
    }
    print(arr);
    int k = 10;
    vector<int> indexvec;
    indexvec=find(arr, k);

    print(indexvec);
    return 0;
}
