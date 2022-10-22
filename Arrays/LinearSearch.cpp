// C++ code to linearly search x in arr[]. If x
// is present then return its location, otherwise
// return -1
 
#include <iostream>
using namespace std;
#define ll long long

// performing linear search 
int search(int arr[], int N, int x)
{
    int i;
    for (i = 0; i < N; i++) 
        if (arr[i] == x)
            return i;
    return -1;
}
 
// Driver's code
int main(void)
{
    ll n;
    cin>>n; // taking the size of array as input 
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i]; // taking input 
    }
    int x = 10; // element to be searched 
    
 
    // Function call
    int result = search(arr, n, x); 
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}