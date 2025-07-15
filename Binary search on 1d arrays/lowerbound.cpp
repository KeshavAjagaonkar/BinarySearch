#include<iostream>
#include<vector>

using namespace std;

void print(vector<int> &arr){
    for (int i = 0; i < arr.size();i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int lowerBound(vector<int>&arr,int k)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int ans = n;
    while(low<=high){
        int mid = (low + high) / 2;
        if(arr[mid]>=k){
            ans = arr[mid];
            high = mid - 1;
        }
       else{
           low = mid + 1;
       }
    }
    return ans;
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
    int k =9;
    int index=lowerBound(arr, k);
    cout << endl;
    cout << index;
}

