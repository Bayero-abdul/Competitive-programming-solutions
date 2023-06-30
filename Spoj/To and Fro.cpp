#include <bits/stdc++.h>
using namespace std;
#define M                   10
#define ll 					long long int
#define vi					vector<ll>
#define	pb					push_back
#define loop(i,a,b)			for(int i=(a);i<=(b);i++)
#define logarr(arr,a,b)		for(int i=(a);i<=(b);i++) cout<<arr[i]<<" ";


int main() {
	int n;
	cin >> n;
	
	while (n != 0){
		string msg, ans="";
		cin >> msg;
		
		loop(i, 0, n - 1){
			int index = i;
			loop(j, 1, msg.size()/n){ 
				ans += msg[index];
				if (j%2 == 0)
					index += (2*i + 1);
				else
					index += (2*n) - (2*i + 1);
			}
		}
		cout << ans << endl;
		cin >> n;
	}
}