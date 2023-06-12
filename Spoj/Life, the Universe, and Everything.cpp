#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n;
    vector<int> arr;
    while (cin >> n)
    {
        if (n != 42)
           arr.push_back(n);
        else
            break;
    }
 
    for (int i = 0; i < arr.size(); ++i){
        printf("%d\n", arr[i]);
    }
}