//
// solved by zero on 24. 4. 12.
//

#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int num) {
    bool answer = true;

    // 1. int 8개를 담는 amount 배열을 선언하고, 배열의 값을 첫 3개는 0,1,2로, 나머지는 0으로 초기화하세요.

    int amount[8] = {0,1,2};


    // 2. amount 배열의 3번부터 7번 요소의 값을 index 번호와 동일하게 수정하세요.

    amount[3] = 3;


    amount[4] = 4;


    amount[5] = 5;


    amount[6] = 6;


    amount[7] = 7;


    // 3. oneAmount라는 int 변수를 정의하고 amount 배열의 마지막 요소를 담아주세요.

    int oneAmount = amount[7];


    // 4. bool [2][2]개를 담는 2차원 배열 right 를 선언하고 true, false / false, true로 초기화 하세요.

    bool right[2][2] = {{true, false}, {false, true}};


    // 5. right 배열의 [0][0] 요소를 false로 수정하세요.

    right[0][0] = false;


    // 6. oneBool 이라는 bool 변수를 정의하고 right 배열의 [1][0]의 값을 담아주세요.

    bool oneBool = right[1][0];



    int errorCount = 0;
    for(int i = 0; i < 8 ;i++)
    {
        if(amount[i] != i)
        {
            errorCount += 1;
            cout << "[Error : " << errorCount << "]" << endl;
            cout << i << "번째 값이 틀렸습니다." << endl;
            cout << "기댓값 : " << i << endl;
            cout << "현재값 : " << amount[i] << endl;
            answer = false;

        }
    }

    if(oneAmount != 7)
    {
        errorCount += 1;
        cout << "[Error : " << errorCount << "]" << endl;
        cout << "oneAmount의 값이 틀렸습니다." << endl;
        cout << "기댓값 : " << 7 << endl;
        cout << "현재값 : " << oneAmount << endl;
        answer = false;
    }

    if (right[0][0] != false ||
        right[0][1] != false ||
        right[1][0] != false ||
        right[1][1] != true)
    {
        errorCount += 1;
        cout << "[Error : " << errorCount << "]" << endl;
        cout << "oneAmount의 값이 틀렸습니다." << endl;
        cout << "기댓값 : false false false true" << endl;
        cout << "현재값 : " << right[0][0] << " " << right[0][1] << " " << right [1][0] << " " << right[1][1] << endl;
    }


    if (oneBool != right[1][0])
    {
        errorCount += 1;
        cout << "[Error : " << errorCount << "]" << endl;
        cout << "oneBool의 값이 틀렸습니다." << endl;
        cout << "기댓값 : " << right[1][0] << endl;
        cout << "현재값 : " << oneBool << endl;
        answer = false;
    }

    return answer;
}
