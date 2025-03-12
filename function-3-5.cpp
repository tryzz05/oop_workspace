double sum_even(double array[], int n) {
    if (n < 1) return 0.0; // Return 0 if n is less than 1

    double sum = 0.0;
    for (int i = 0; i < n; i += 2) { // Iterate over even indices (0, 2, 4, ...)
        sum += array[i];
    }

    return sum;
}