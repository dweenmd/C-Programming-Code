#include <stdio.h>

int main() {
    long long int n,i;
    scanf("%lld", &n);
    long long int arr[n];
    long long int sum = 0;
    for(i=0; i<n; i++) {
        scanf("%lld", &arr[i]);
        sum += arr[i];
    }
    long long int expected_sum = (n+1) * (n+2) / 2; // sum of first N+1 natural numbers
    long long int missing_num = expected_sum - sum;
    printf("%lld", missing_num);
    return 0;
}
