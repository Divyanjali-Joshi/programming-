 #include <stdio.h>


float Average(int arr[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return (float)sum / n;     
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    float avg = Average(arr, n);

    printf("\nAverage of the numbers = %.2f\n", avg);

    return 0;
}
