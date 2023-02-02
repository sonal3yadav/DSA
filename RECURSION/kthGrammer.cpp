#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
bool getGrammer(int n, int k){
    int diff = pow(2, n - 2);
    cout << "n: " << n << " "
         << "k: " << k <<"diff: "<<diff<< endl;

    if (n == 1){
        return false;
    }
    if(k <= diff){
        return getGrammer(n-1, k);
    }
    return (!(getGrammer(n-1, k-diff)));
    }
int main()
{
    int n = 2;
    int k = 1;
    bool ans = getGrammer(n, k);
        if(ans){
            cout<< 1;
        }
        else{
            cout << 0;
        }
        return 0;
}
