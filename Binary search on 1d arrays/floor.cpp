#include<iostream>
#include<vector>

using namespace std;

void print(vector<int> &arr){
    for (int i = 0; i < arr.size();i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int floorofArray(vector<int>&arr,int k)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while(low<=high){
        int mid = (low + high) / 2;
        if(arr[mid]<=k){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
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
    int k = 10;
    int index=floorofArray(arr, k);

    cout << index;
    return 0;
}



