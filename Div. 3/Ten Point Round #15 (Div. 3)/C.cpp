#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<ll,ll> ma;
    for (ll i = 0; i < n; i++) {
        for (ll j = i+1; j < n; j++) {
            for (ll k = j+1; k < n; k++) {
                ma[a[i]+a[j]+a[k]]++;
            }
        }
    }
    cout << ma.size() << "\n";
}