//
// Created by zero on 24. 4. 18.
//

#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int num) {
    bool answer = true;
    // 1. double 1,000개를 가진 price 벡터를 선언하세요.
    // 2. price의 모든 요소를 -4.2로 초기화하세요.

    vector <double> price(1000, -4.2);


    // 3. price의 마지막 요소를 10.9로 수정하세요.

    price.at(999) = 10.9;


    // 4. price의 499번 요소를 출력하세요.

    cout << price.at(499) << endl;


    // 5. bool 2차원 벡터 collegeStudent를 선언하세요.
    // 6. collegeStudent 벡터를 다음과 같이 초기화 하세요 true, false, false / false, true / true.

    vector <vector<bool>> collegeStudent = {{true, false, false}, {false, true}, {true}};


    // 7. collegeStudent의 1번 벡터에 false라는 요소를 추가하세요.

    collegeStudent.at(1).push_back(false);


    // 8. collegeStudent의 2번 벡터에 true라는 요소를 2개 추가하세요.

    collegeStudent.at(2).push_back(true);


    collegeStudent.at(2).push_back(true);


    // 9. collegeStudent의 0번 벡터의 마지막 요소를 출력하세요.

    cout << collegeStudent.at(0).at(2) << endl;


    int errorCount = 0;
    if (price.size() != 1000)
    {
        errorCount += 1;
        cout << "[Error : " << errorCount << "]" << endl;
        cout << "Price의 요소 개수가 틀렸습니다." << endl;
        cout << "기댓값 : " << 1000 << endl;
        cout << "현재값 : " << price.size() << endl;
        answer = false;
    }
    for(int i = 0; i < price.size() - 1 ;i++)
    {
        if(price.at(i) != -4.2)
        {
            errorCount += 1;
            cout << "[Error : " << errorCount << "]" << endl;
            cout << "Price 벡터의 " << i << "번째 값이 틀렸습니다." << endl;
            cout << "기댓값 : " << -4.2 << endl;
            cout << "현재값 : " << price.at(i) << endl;
            answer = false;
        }
    }

    if(price.at(price.size() - 1) != 10.9)
    {
        errorCount += 1;
        cout << "[Error : " << errorCount << "]" << endl;
        cout << "Price 벡터의 " << price.size() - 1 << "번째 값이 틀렸습니다." << endl;
        cout << "기댓값 : " << 10.9 << endl;
        cout << "현재값 : " << price.at(price.size() - 1) << endl;
        answer = false;
    }

    vector<vector<bool>> answerVector = {{true, false, false}, {false, true, false}, {true, true, true}};

    for(int i = 0; i < answerVector.size(); i++)
    {
        vector<bool> curVector = answerVector.at(i);
        for (int j = 0; j< curVector.size(); j++)
        {
            if (curVector.at(j) != collegeStudent.at(i).at(j))
            {
                errorCount += 1;
                cout << "[Error : " << errorCount << "]" << endl;
                cout << "answerVector의 " << i << "번째 벡터, " << j << "번째 요소의 값이 틀렸습니다." << endl;
                cout << "기댓값 : " << curVector.at(j) << endl;
                cout << "현재값 : " << collegeStudent.at(i).at(j) << endl;
                answer = false;
            }
        }
    }

    return answer;
}