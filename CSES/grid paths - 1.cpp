#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x) setprecision(x) << fixed

using namespace std;

int p[48];
int dX[4] = {-1, 0, 1, 0};
int dY[4] = {0, 1, 0, -1};
bool path[9][9];

int dfs(int index, int x, int y) {
    if ((path[x][y + 1] == true && path[x][y - 1] == true) && (path[x - 1][y] == false && path[x + 1][y] == false)) {
        return 0;
    }
    if ((path[x][y + 1] == false && path[x][y - 1] == false) && (path[x - 1][y] == true && path[x + 1][y] == true)) {
        return 0;
    }
    if (x == 7 && y == 1) {//vai lon bi nguoc la the deo nao ??????? adu vai l ra la do cai dat toa do no bi nguoc voi cai array mao phac :D
        if (index == 48) {
            return 1;
        }
        return 0;
    }
    if (index == 48)
        return 0;

    int res = 0;
    path[x][y] = true;
    if (p[index] < 4) {
        int new_x = x + dX[p[index]];
        int new_y = y + dY[p[index]];
        if (path[new_x][new_y] == false) {
            res += dfs(index + 1, new_x, new_y);
        }
    } else {
        for (int i = 0; i < 4; i++) {
            int new_x = x + dX[i];
            int new_y = y + dY[i];
    		if (path[new_x][new_y] == true) continue;
    		res+=dfs(index + 1, new_x, new_y);
        }
    }
    path[x][y] = false;
    return res;
}

int main() {
    faster();

    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'U') {
            p[i] = 0;
        } else if (s[i] == 'R') {
            p[i] = 1;
        } else if (s[i] == 'D') {
            p[i] = 2;
        } else if (s[i] == 'L') {
            p[i] = 3;
        } else
            p[i] = 4;
    }

    for (int i = 0; i < 9; i++) {
        path[0][i] = true;
        path[8][i] = true;
        path[i][8] = true;
        path[i][0] = true;
    }

    for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= 7; j++) {
            path[i][j] = false;
        }
    }

    int ans = dfs(0, 1, 1);
    cout << ans;

    return 0;
}