#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {zzz
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                // Nếu arr[i] > arr[j] thì hoán đổi giá trị của arr[i] và arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}