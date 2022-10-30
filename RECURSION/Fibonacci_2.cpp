#include <vector>
using namespace std;

typedef vector<vector<int>> mat;

// Function to multiply two square matrices of size 2
mat operator*(mat a, mat b)
{
    int n = a.size();
    mat ans(n);
    for (auto &x : ans)
        x.resize(n);
    ans[0][0] = a[0][0] * b[0][0] + a[0][1] * b[1][0];
    ans[0][1] = a[0][0] * b[0][1] + a[0][1] * b[1][1];
    ans[1][0] = a[1][0] * b[0][0] + a[1][1] * b[1][0];
    ans[1][1] = a[1][0] * b[0][1] + a[1][1] * b[1][1];
    return ans;
}

mat operator^(mat const &x, int n)
{
    if (n < 0)
        throw "Power Negative";
    if (n == 0)
    {
        int n = x.size();
        mat ans(n);
        for (auto &x : ans)
            x.resize(n, 0);
        for (int i = 0; i < n; ++i)
            ans[i][i] = 1;
        return ans;
    }
    else if (n == 1)
        return x;
    mat tmp = x ^ (n / 2);
    if (n & 1)
        return tmp * tmp * x;
    return tmp * tmp;
}

size_t fib(int n)
{ // O(log(n))
    if (n <= 1)
        return n;
    mat x = {{1, 1},
             {1, 0}};
    x = x ^ (n - 2);
    return x[0][0];
}

size_t fibIterative(size_t n)
{ // O(n)
    if (n < 3)
        return n - 1;
    size_t a = 0, b = 1;
    for (int i = 3; i < n + 1; ++i)
        b += a, a = b - a;
    return b;
}

size_t fibRecursive(size_t n)
{ // O(2^n)
    return (n < 3) ? n - 1 : fibRecursive(n - 1) + fibRecursive(n - 2);
}