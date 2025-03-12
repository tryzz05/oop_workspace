bool is_fanarray(int array[], int n) {
    if (n < 1) return false; // Size must be at least 1

    int mid = n / 2; // Midpoint of the array

    // Check if the array is a palindrome
    for (int i = 0; i < mid; i++) {
        if (array[i] != array[n - 1 - i]) {
            return false;
        }
    }

    // Check if the first half is in ascending order
    for (int i = 1; i <= mid; i++) {
        if (array[i] < array[i - 1]) {
            return false;
        }
    }

    return true;
}