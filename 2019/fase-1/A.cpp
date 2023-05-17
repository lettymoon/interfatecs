#include <bits/stdc++.h>

using namespace std;

void _solve()
{
    int n;
    cin >> n;
    int he, me, hs, ms;
    int min_he = INT_MAX;
    int min_me = INT_MAX;
    int max_hs = INT_MIN;
    int max_ms = INT_MIN;
    while (n--)
    {
        cin >> he >> me >> hs >> ms;
        if (he*60+me < min_he*60+min_me){
            min_he = he;
            min_me = me;
        }     
        if (hs*60+ms > max_hs*60+max_ms){
            max_hs = hs;
            max_ms = ms;
        }
    }

    // cout << max_hs << " " << max_ms << endl;
    // cout << min_he << " " << min_me << endl; 

    int entryMinutes = (min_he * 60) + min_me;
    int exitMinutes = (max_hs * 60) + max_ms;

    int res = exitMinutes - entryMinutes;

    cout << res << '\n';
}

int main()
{
    int t = 1; // cin >> t;
    while (t--)
    {
        _solve();
    }
    return 0;
}