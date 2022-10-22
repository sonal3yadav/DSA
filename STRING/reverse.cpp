#include <bits/stdc++.h>
using namespace std;
 
// Function to reverse a string
void reverse(string str)
{
    int len = str.length();
    int n = len;
    while(n--)
        cout << str[n];
}
 
// Driver code
int main(void)
{
    string s = "GeeksforGeeks";
 
    reverse(s);
    return (0);
}