#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
    vec.resize(M);
    int idx = 0;
    while (idx >= 0) {
        if (idx == M) {
            for (int i = 0; i < M; ++i) {
                cout << vec[i] << " ";
            }
            cout << endl;
        }

        if (idx < 0) break;

        vec[idx]++;

        if (vec[idx] > N) {
            vec[idx] = 0;
            idx--;
        } else if (idx == 0 || vec[idx] > vec[idx - 1]) {
            idx++;
        }
    }
}

int main() {
   cin >> N >> M;
   func(0);
}
