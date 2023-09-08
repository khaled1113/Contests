#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Trap {
    int d, s;
};

bool cmp(const Trap& a, const Trap& b) {
    return a.s < b.s;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<Trap> traps(n);
        for (int i = 0; i < n; i++) {
            cin >> traps[i].d >> traps[i].s;
        }

        sort(traps.begin(), traps.end(), cmp);

        int max_k = 0;
        int current_time = 0;
        for (int i = 0; i < n; i++) {
            int time_to_trap = traps[i].d - 1 - current_time;
            if (time_to_trap >= 0) {
                max_k = max(max_k, traps[i].d - 1 + min(time_to_trap, traps[i].s));
                current_time = traps[i].d - 1 + traps[i].s;
            }
        }

        max_k = max(max_k, current_time);
        cout << max_k << endl;
    }

    return 0;
}
