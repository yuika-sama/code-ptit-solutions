#include <iostream>
using namespace std;

int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};
int p[48];
bool onPath[9][9];

int tryPath(int pathIdx, int curR, int curC) {
	// Optimization 3
	if ((onPath[curR][curC - 1] && onPath[curR][curC + 1]) && (!onPath[curR - 1][curC] && !onPath[curR + 1][curC]))
		return 0;
	if ((onPath[curR - 1][curC] && onPath[curR + 1][curC]) && (!onPath[curR][curC - 1] && !onPath[curR][curC + 1]))
		return 0;

	if (curR == 7 && curC == 1) {  // reached endpoint before visiting all
		if (pathIdx == 48) return 1;
		return 0;
	}

	if (pathIdx == 48) return 0;

	int ret = 0;
	onPath[curR][curC] = true;

	// turn already determined:
	if (p[pathIdx] < 4) {
		int nxtR = curR + dr[p[pathIdx]];
		int nxtC = curC + dc[p[pathIdx]];
		if (!onPath[nxtR][nxtC]) ret += tryPath(pathIdx + 1, nxtR, nxtC);
	}
	// see Java solution for optimization 4 implementation
	else {  // iterate through all four possible turns
		for (int i = 0; i < 4; i++) {
			int nxtR = curR + dr[i];
			int nxtC = curC + dc[i];
			if (!onPath[nxtR][nxtC]) ret += tryPath(pathIdx + 1, nxtR, nxtC);
		}
	}
	// reset and return
	onPath[curR][curC] = false;
	return ret;
}

int main() {
	string line;
	getline(cin, line);

	// convert path to ints
	for (int i = 0; i < 48; i++) {
		if (line[i] == 'U') p[i] = 0;
		else if (line[i] == 'R') p[i] = 1;
		else if (line[i] == 'D') p[i] = 2;
		else if (line[i] == 'L') p[i] = 3;
		else p[i] = 4;  // cur == '?'
	}

	// set borders of grid
	for (int i = 0; i < 9; i++) {
		onPath[0][i] = true;
		onPath[8][i] = true;
		onPath[i][0] = true;
		onPath[i][8] = true;
	}
	// initialize the inside of the grid to be completely empty
	for (int i = 1; i <= 7; i++) {
		for (int j = 1; j <= 7; j++) { 
			onPath[i][j] = false; 
		}
	}
	int ans = tryPath(0, 1, 1);
	cout << ans;
}
