#include <iostream>

using namespace std;

int main()
{
    int testcase = 0, sum = 0, num = 0;
    cin >> testcase;

    for(int i=0; i<testcase; ++i)
    {
        for(int j=0; j<10; ++j)
        {
            cin >> num;
            if(num == 0 || num == 1)
            {
                sum += num;
                continue;
            }
            if(num % 2 != 0) sum += num;
            num = 0;
        }
        cout << "#" << i+1 << " " << sum << "\n"; sum = 0;
    }
}
