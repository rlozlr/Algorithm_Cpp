#include <string>
#include <vector>
// #include <chrono>
// #include <iostream>
#include <ctime>

using namespace std;

int solution(int age) {
    int answer = 0;
    // const chrono::time_point<chrono::system_clock> now = chrono::system_clock::now();   // 현재시간
    // const chrono::year_month_day ymd = chrono::floor<chrono::days>(now);
    // answer = ymd.year() - age + 1;
    
    time_t now = time(nullptr);     // 현재 시스템 시간을 초 단위로 가져옴
    tm* local_now = localtime(&now);    // tm 구조체로 현재 시간을 변환

    // 현재 연도 구하기 (tm_year은 1900년을 기준으로 된 연도를 나타냄)
    int current_year = local_now->tm_year + 1900;
    answer = current_year - (age + 1);
    return answer;
}