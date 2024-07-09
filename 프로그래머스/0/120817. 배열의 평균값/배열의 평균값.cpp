#include <string>
#include <vector>
#include <numeric>

using namespace std;

double solution(vector<int> numbers) {
    int total = std::accumulate(numbers.begin(), numbers.end(), 0);
    return static_cast<double>(total) / numbers.size();
}