//
// Created by zero on 24. 4. 23.
//

// 사용자가 월(month)을 입력하면, 해당 월의 마지막 날짜를 반환하는 함수를 작성해보세요.
// 단, 윤년은 없다고 가정하여 2월은 28일이 마지막 날이라고 반환하면 됩니다.
//  1~12월이 아닌 이상한 값이 들어올 경우 -1을 반환하면 됩니다.

#include <iostream>

using namespace std;

int solution(int month)
{
    int answer = 0;
    cin >> month;

    switch (month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            answer = 31;
            break;
        case 2:
            answer = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            answer = 30;
            break;
        default:
            answer = -1;
            break;
    }

    return answer;
}
