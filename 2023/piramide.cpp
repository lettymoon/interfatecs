/* Interfatec 2023
C - Pirâmide Completa
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define f first
#define s second
typedef long long ll;
// maiusculas 41
// minusculas 61

void solve(){
    int n;cin >> n;
    string str;cin >> str;

    vector<string> arr(n, string(26, '.'));

    if(str == "maiuscula"){
        for (int i = 0; i < arr.size(); i++){
            char c = 'A';

            int temp = i+1;
            while(temp--) arr[i].pop_back();
            temp = i+1;
            while(temp--) arr[i].push_back(c++);

            for (int j = 0; j < arr[i].size(); j++){
                cout << arr[i][j];
            }
            cout << endl;
        }
    }

    if(str == "minuscula"){
        for (int i = 0; i < arr.size(); i++){
            char c = 'a';

            int temp = i+1;
            while(temp--) arr[i].pop_back();
            temp = i+1;
            while(temp--) arr[i].push_back(c++);

            for (int j = 0; j < arr[i].size(); j++){
                cout << arr[i][j];
            }
            cout << endl;
        }
    } 
} 

int main()
{
    solve();
    return 0;
}

/*
n <= 26
..........................AB [26]


...........................A [26]
..........................AB [26]
.........................ABC [26]
retiro o ultimo caracter do vetor
adiciono o valor da tabela ascii
if maiuscula??
41
if minuscula??
61

*/