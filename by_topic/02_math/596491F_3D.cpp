// Problem: F. 3D
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
    ll n;
    cin >> n;

    int x[1000], y[1000], z[1000];
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i] >> z[i];
    }

    int x_count[201] = {0};
    int y_count[201] = {0};
    int z_count[201] = {0};

    for (int i = 0; i < n; i++) x_count[x[i] + 100]++;
    for (int i = 0; i < n; i++) y_count[y[i] + 100]++;
    for (int i = 0; i < n; i++) z_count[z[i] + 100]++;

    for (int i = 0; i < n; i++) {
        cout << x_count[x[i] + 100] - 1 << " ";
        cout << y_count[y[i] + 100] - 1 << " ";
        cout << z_count[z[i] + 100] - 1 << "\n";
    }

    return 0;
}
