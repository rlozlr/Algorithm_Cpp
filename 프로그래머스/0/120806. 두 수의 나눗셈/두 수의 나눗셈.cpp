#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = (static_cast<double> (num1) / num2) * 1000;
    return static_cast<int> (answer);
}