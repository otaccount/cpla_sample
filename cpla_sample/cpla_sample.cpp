#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    cout << "hello world";
}

void test03() {
    int N = 0, M = 0;
    cin >> N >> M;

    vector<int> AN(N);
    vector<int> BM(M);
    for (auto& i : AN) {
        cin >> i;
    }
    for (auto& i : BM) {
        cin >> i;
    }

    int ans = 0;
    for (auto i : BM) {
        ans += AN[i - 1];
    }
    cout << ans;
}
void test02() {
    int N;
    cin >> N;

    vector<int> a(N);
    for (auto& ai : a) {
        cin >> ai;
    }

    int ans = 0;
    for (auto i : a) {
        ans += i;
    }

    cout << ans;
}
void test01() {
    int N; // NLISTの要素数
    int N1, N2;
    cin >> N >> N1 >> N2;

    vector<int> NLIST(N);

    for (int i = 0; i < N; i++) {
        cin >> NLIST[i];
    }

    // 出力
    cout << "1行目:" << N << "\n";
    cout << "2行目合計:" << N1 + N2 << "\n";
    int sum = accumulate(NLIST.begin(), NLIST.end(), 0);
    cout << "3行目合計:" << sum << endl;
}