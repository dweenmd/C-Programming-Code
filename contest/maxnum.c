
#include <stdio.h>

int check_divisibility(int d, int n, int a[]) {
    for (int i = 0; i < n; i++) {
        if (a[i] % d != 0) {
            return 0;
        }
    }
    return 1;
}

int maximum_number(int n, int a[]) {
    int lo = 1, hi = a[0], mid;
    while (lo <= hi) {
        mid = lo + (hi - lo) / 2;
        if (check_divisibility(mid, n, a)) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return hi;
}

int main() {
    int t, n, a[100000];
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        printf("%d\n", maximum_number(n, a));
    }
    return 0;
}
