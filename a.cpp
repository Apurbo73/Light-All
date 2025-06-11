#include <iostream>

#include <string>

#include <vector>

using namespace std;

bool isPossibleToLightAllCells(int N,
    const string & S) {
    vector < bool > lit(N, false);

    for (int i = 0; i < N; ++i) {
        if (S[i] == '1') {
            if (i > 0 && !lit[i - 1]) {
                lit[i - 1] = true;
                lit[i] = true;
            } else if (i + 1 < N && !lit[i + 1]) {
                lit[i] = true;
                lit[i + 1] = true;
            } else {
                lit[i] = true;
            }
        }
    }

    for (int i = 0; i < N; ++i) {
        if (!lit[i]) return false;
    }
    return true;
}

int main() {
    int T;
    cin >> T;
    bool first = true;
    while (T--) {
        int N;
        string S;
        cin >> N >> S;
        if (first) {
            first = false;
        }
        cout << (isPossibleToLightAllCells(N, S) ? "Yes" : "No") << endl;
    }
    return 0;
}