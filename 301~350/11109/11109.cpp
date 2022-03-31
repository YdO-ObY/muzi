#include <iostream>
using namespace std;
int T, d, n, s, p;
int main() {
    cin >> T;
    while (T--) {
        cin >> d >> n >> s >> p;
        printf("%s\n",d + n * p > n* s ? "do not parallelize" : d + n * p < n * s ? "parallelize" : "does not matter");
    }
}
