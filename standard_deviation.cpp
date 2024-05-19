#include <iostream>
#include <cmath>     // For mathematical functions
#include <vector>   
#include <numeric>   

using namespace std;


double calculateMean(const vector<int>& numbers) {
    double sum = accumulate(numbers.begin(), numbers.end(), 0.0);
    return sum / numbers.size();
}


double calculateStandardDeviation(const vector<int>& numbers) {
    double mean = calculateMean(numbers);
    double varianceSum = 0.0;


    for (int number : numbers) {
        varianceSum += pow(number - mean, 2);
    }

 
    double variance = varianceSum / numbers.size();
    return sqrt(variance);
}

int main() {
    vector<int> numbers = {2, 3, 7, 5, 4, 6};

 
    double mean = calculateMean(numbers);
    double standardDeviation = calculateStandardDeviation(numbers);


    cout << "Mean: " << mean << endl;
    cout << "Standard Deviation: " << standardDeviation << endl;

    return 0;
}
