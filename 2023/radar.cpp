/* Interfatec 2023
H - Radar 
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define f first 
#define s second
typedef long long ll;

void solve(){
    int n; cin >> n;
    if (n < 107)
        cout << n+7 << endl;
    else
        cout << round(n*(1.07)) << endl;
}

int main(){
    solve();
    return 0;
}


// ate 107 - 7km
// >107 - 7%
