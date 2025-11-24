 #include <stdio.h>

int Even(int arr[], int n) {
    int even = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even++;
    }
    return even;
}


int Odd(int arr[], int n) {
    int odd = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0)
            odd++;
    }
    return odd;
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int even = Even(arr, n);
    int odd = Odd(arr, n);

    printf("\nTotal even numbers: %d", even);
    printf("\nTotal odd numbers: %d\n", odd);

    return 0;
}
