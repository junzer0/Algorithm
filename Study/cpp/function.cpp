//
// Created by zero on 24. 4. 20.
//

#include <iostream>

using namespace std;
const double rate = 1400.96;
// dollarToWon 함수를 여기에 정의하세요
int dollarToWon(double dollar)
{
    return dollar * rate;
}

// wonToDollar 함수를 여기에 정의하세요
double wonToDollar(int won)
{
    return won / rate;
}

// 이 아래 코드는 수정하지 마세요

int main(void) {
    int won;
    double dollar;
    cin >> won >> dollar;

    double resultDollar = wonToDollar(won);
    int resultWon = dollarToWon(dollar);

    cout << resultDollar << " " << resultWon << endl;
    return 0;
}