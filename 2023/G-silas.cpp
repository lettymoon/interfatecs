#include <bits/stdc++.h>

using namespace std;

const int MAXN = 80;

char matrix[MAXN][MAXN];

int _solve(int x, int y, int steps, int force, int tamX, int tamY){
    if (x < 0 and x >= tamX and y < 0 and y >= tamY)
        return 0;
    if (matrix[x][y] == '#')
        return 0;
    if (matrix[x][y] != '.' and matrix[x][y] - '0' > 10)
        return 0;
    
    if(matrix[x][y] - '0' <= 10){
        int num = matrix[x][y] - '0';
        if (force > steps)
            return 0;
    }

    if (matrix[x][y] == 'K'){
        return steps;
    }
    _solve(x-1,y,steps+1,force,tamX,tamY);
    _solve(x,y-1,steps+1,force,tamX,tamY);
    _solve(x,y+1,steps+1,force,tamX,tamY);
    _solve(x+1,y,steps+1,force,tamX,tamY);

    return -1;
}


void solve(){
    int p; cin>>p;
    int x,y; cin>>x>>y;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cin >> matrix[i][j];
        }
    }
    _solve(0,0,0,p,x,y);


}

int main(){
    solve();
    return 0;
}