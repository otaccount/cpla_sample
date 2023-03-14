#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
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