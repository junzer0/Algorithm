//
// Created by 장준영 on 4/19/24.
//

#include <iostream>

using namespace std;

int main() {
    int total;
    cin >> total;
    // 1. 거스름돈 계산 - 이 아래의 코드만 수정하세요
    int count50000 = total/50000;
    total %= 50000;

    int count10000 = total/10000;
    total %= 10000;

    int count5000 = total/5000;
    total %= 5000;

    int count1000 = total/1000;
    total %= 1000;

    int count500 = total/500;
    total %= 500;

    int count100 = total/100;
    total &= 100;


    // 2. 운수 좋은 날
    int paper_count = count50000 + count10000 + count5000 + count1000;
    int coin_count = count500 + count100;

    bool condition1 = (count50000 >= 1 and paper_count >= 3);
    bool condition2 = ((coin_count % 2) != 0);

    bool lucky = condition1 or condition2;


    // 이 위의 코드만 수정하세요 (아래 출력문은 변경하면 안됩니다)
    cout << "5만원 : " << count50000 << endl;
    cout << "1만원 : " << count10000 << endl;
    cout << "5천원 : " << count5000 << endl;
    cout << "1천원 : " << count1000 << endl;
    cout << "500원 : " << count500 << endl;
    cout << "100원 : " << count100 << endl;

    if (lucky){
        cout << "오늘은 좋은 하루가 될 것 같네요 :)" << endl;
    }
    else{
        cout << "오늘은 조심하는 하루가 되세요! :D" << endl;
    }

    return 0;
}