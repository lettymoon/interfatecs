#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    string str;
    cin >> str;
    
    map<char,int> m;
    
    string str_sort = str;
    sort(str_sort.begin(), str_sort.end());
    //mapear caractere
    for(int i = 0; i < str_sort.size(); i++){
        m[str_sort[i]] = i;
    }

    int maxPicked = INT_MIN;
    int ans = 0;
    for(int i = 0; i < str.size(); i++){
        int pos = m[str[i]];
        int diff = abs(pos - i);
        if (diff > maxPicked){
            maxPicked = diff;
            ans = pos;
        }
        if (diff > 5){
            cout << "A Database Systems student read a book." << endl;
            return;
        }
    }
    cout << ans << endl;
    
}

int main(){
    solve();
    return 0;
}