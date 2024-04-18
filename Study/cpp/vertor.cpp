//
// Created by zero on 24. 4. 18.
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> price (100);

    // price[77] = 10000;
    price.at(77) = 10000;

    cout << price.size() << endl;
    cout << price[0] << endl;
    cout << price[99] << endl;

    price.push_back(12345678);

    // cout << price[77] << endl;
    cout << price.at(77) << endl;

    // cout << price[100] << endl; // 검사 수행 X
    cout << price.at(100) << endl;  // 검사 수행


    vector <int> v1 = {1,2,3,4,5};
    vector <vector<int>> price1 = {{1,2,3,4,5},
                                  {6,7,8,9,10},
                                  {11,12,13,14,15}};

    cout << price1.at(2).at(4) << endl;

    price1.at(1).at(0) = 4;
    price1.at(2).push_back(16);

    cout << price1.at(2).at(5) << endl;


    return 0;
}