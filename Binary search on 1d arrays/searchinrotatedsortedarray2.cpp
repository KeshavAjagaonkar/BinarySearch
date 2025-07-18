#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// this example does not contain duplicates , so for duplicate we need to consider more edge cases ok ....think about it wisely without any confusion.
bool search(vector<int> &arr, int key)
{
    // Code Here
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return true;
        }
        if(arr[low]==arr[mid] && arr[mid]==arr[high]){
            low = low + 1;
            high = high - 1;
            continue;
        }

        if (arr[low] <= arr[mid])
        {
            if (arr[low] <= key && key <= arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (arr[mid] <= key && key <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int x;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }
    print(arr);
    int k =3;

    // int index = search(arr, k);
    bool result = search(arr, k);
    cout <<boolalpha<<result;
    return 0;
}
