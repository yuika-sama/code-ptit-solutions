#include <iostream>
#include <unordered_map>
using namespace std;
const int MAXLIST = 10000;

struct List {
    int n;
    int nodes[MAXLIST];
};

List ds;

void thongKeVaIn() {
    unordered_map<int, int> count;
    for (int i = 0; i < ds.n; i++) {
        count[ds.nodes[i]]++;
    }
    for (const auto& pair : count) {
        cout << pair.first << "   " << pair.second << std::endl;
    }
}

int main() {
	cin >> ds.n;

    for (int i = 0; i < ds.n; i++) {
        cin >> ds.nodes[i];
    }

    thongKeVaIn();

    return 0;
}
