#include<iostream>
#include<vector>

using namespace std;


void print(vector<int> &arr){
    for (int i = 0; i < arr.size();i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int findmin(vector<int>& arr) {
        // code here
        int low=0;
        int high = arr.size() - 1;
        int mini = INT_MAX;
        while(low<=high){
            int mid = (low + high) / 2;
            if(arr[low]<=arr[mid]){
                mini = min(arr[low], mini);
                low = mid + 1;
            }
            else{
                mini = min(arr[mid], mini);
                high = mid - 1;
            }
        }
        return mini;
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
    // int k = 10;
    int minimum;
    minimum=findmin(arr);

    cout << minimum << endl;
    return 0;
}
