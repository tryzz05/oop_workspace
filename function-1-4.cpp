int sum_two_arrays(int array1[], int array2[], int n) {
    if (n < 1) {
      return 0;
    }
  
    int total_sum = 0;
    for (int i = 0; i < n; i++) {
      total_sum += array1[i] + array2[i];
    }
  
    return total_sum;
  }