#include <unordered_map>

double weighted_average(int array[], int n) {
    if (n < 1) return 0.0; // Return 0 if the size is less than 1

    std::unordered_map<int, int> frequency;
    double sum = 0.0;

    // Calculate frequencies
    for (int i = 0; i < n; i++) {
        frequency[array[i]]++;
    }

    // Compute weighted sum
    for (std::unordered_map<int, int>::iterator it = frequency.begin(); it != frequency.end(); ++it) {
        sum += it->first * (static_cast<double>(it->second) / n);
    }

    return sum;
}