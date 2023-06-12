#include <bits/stdc++.h>
 
using namespace std;
 
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
 
typedef long long ll;
typedef vector<int> vi;
 
 
int main()
{
    int T, N;
    cin >> T;
 
    vi out;
    REP(i, 1, T) {
        int Z = 0;
        cin >> N;
        while (N >= 5){
            N = N/5;
            Z += N;
        }
        out.PB(Z);
    }
 
    for (auto N: out)
        cout << N << endl;
}