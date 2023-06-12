#include <bits/stdc++.h>
using namespace std;
#define ll                  long long int
#define vi                  vector<ll>
#define vs                  vector<string>
#define pb                  push_back
#define loop(i,a,b)         for(int i=(a);i<=(b);i++)
#define printarr(arr,a,b)   for(int i=(a);i<=(b);i++) cout<<(arr[i])<<endl;
 
vi add(vi a, vi b)
{
    vi ans;
    ll sum = 0, carry = 0, i = 0;
    ans.pb(a[0]);
    for (; i <= a.size() - 2; i++){
        sum = (a[i+1] + b[i]) + carry;
        ans.pb(sum % 10);
        carry = sum / 10;
    }
    for(;i <= b.size() - 1; i++)
    {
        sum = b[i] + carry;
        ans.pb(sum % 10);
        carry = sum / 10;
    }
    while(carry) {
        ans.pb(carry);
        carry = carry / 10;
    }
    return ans;
}
 
vi multi(vi a, vi b)
{
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    ll sum = 0;
    vi result, ans1 , ans2;
    if (b.size() >= 1){
        ll carry = 0;
        for (int i = 0; i < a.size(); i++){
            sum = (b[0] * a[i]) + carry;
            ans1.pb(sum % 10);
            carry = sum / 10;
        }
        while (carry){
            ans1.pb(carry);
            carry = carry / 10;
        }
    } 
    if (b.size() > 1){
        ll carry = 0;
        sum = 0;
        for (int i = 0; i <= a.size() - 1;i++){
            sum = (b[1] * a[i]) + carry;
            ans2.pb(sum % 10);
            carry = sum / 10;
        }
        while (carry){
            ans2.pb(carry);
            carry = carry / 10;
        }
    }
    if (b.size() == 1)
        result = ans1;
    else
        result = add(ans1, ans2);
    return result;
}
 
int main() {
    ll t; cin >> t;
    vs ans;
    loop(i,1,t) {
        ll n;
        cin >> n;
        string n_str = to_string(n);
        vi sum;
        for(int i = 0; i < n_str.size(); i++){
            int num = n_str[i] - '0';
            sum.pb(num);
        }
        for(ll i = --n; i >= 2; i--){
            vi b;
            string b_str = to_string(i);
            for(int i = 0; i < b_str.size(); i++){
                int num = b_str[i] - '0';
                b.pb(num);
            }   
            sum = multi(sum, b);
            reverse(sum.begin(), sum.end());
        }
        string number = "";
        for(int i = 0; i < sum.size() ; i++)
            number += to_string(sum[i]);    
        ans.pb(number);
    }
    printarr(ans, 0, ans.size() - 1);
    return 0;
} 