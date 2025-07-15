#include<iostream>
#include<vector>

using namespace std;

void print(vector<int> &arr){
    for (int i = 0; i < arr.size();i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int binarySearch(vector<int>&arr,int k)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    while(low<=high){
        int mid = (low + high) / 2;
        if(arr[mid]==k){
            return mid;
        }
        else if(mid>k){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
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
    int k = 4;
    int index=binarySearch(arr, k);
    cout << endl;
    cout << index;
}

