// Problem: I. Three Numbers Sum
// Contest: 596491
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void speeding() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    speeding();
    ll k, s;
    cin >> k >> s;

    ll counter = 0;
    for (ll i = 0; i <= k; i++) {
        for (ll j = 0; j <= k; j++) {
            ll z = s - i - j;
            if (z >= 0 && z <= k) {
                counter++;
            }
        }
    }

    cout << counter;
    return 0;
}
