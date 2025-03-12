#include <unordered_map>

double weighted_average(int array[], int n) {
  if (n < 1) return 0;  // Return 0 if the size is less than 1

  int weight=0;
  
  std::unordered_map<int, int> frequency;  // To store frequencies of elements
  double weight_sum = 0.0;
  double total_weight=0.0;

  // Calculate frequencies
  for (int i = 0; i < n; i++) {
    frequency[array[i]]++;
  }

  for (int i = 0; i < n; i++) {
    weight = (array[i] * frequency[array[i]]);
    weight_sum = weight + weight_sum;
    total_weight = frequency[array[i]] + total_weight;
  }

  double weighted_average = weight_sum/total_weight;

  return weighted_average;
}