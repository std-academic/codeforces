#include <bits/stdc++.h>

int main() {
    int t; scanf("%d", &t);
    while (t--) {
        int n; scanf("%d", &n);
        for (int i=1; i<=n; ++i)
            printf("%d ", 2*i-1);
        puts("");
    }
    return 0;
}