#include<iostream>
#include<cmath> // round
using namespace std;
 
int main(int argc, char** argv)
{
    int test_case;
    int T;
     
    cin>>T;
 
    for(test_case = 1; test_case <= T; ++test_case)
    {
        int sum=0;
        for(int i=0; i<10; i++)
        {
            int num;
            cin >> num;
            sum+=num;
        }
 
        cout << "#" << test_case << " " << round(sum/10.0) << endl;
    }
    return 0;
}
