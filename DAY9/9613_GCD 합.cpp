#include <iostream>
#include <vector>

using namespace std;

int getGCD(int a, int b)
{
    if (b == 0)
        return a;
    else
        return getGCD(b, a%b);
}

int main()
{
    int T;
    cin >> T;

    for (int test_case = 0; test_case < T; test_case++)
    {
        int n;
        cin >> n;

        vector<int> nums_vec(n);
        for (int i = 0; i < nums_vec.size(); i++)
            cin >> nums_vec[i];

        long long sum = 0;                                
        for (int i = 0; i < nums_vec.size()-1; i++)
            for (int j = i+1; j < nums_vec.size(); j++)
                sum += getGCD(nums_vec[i], nums_vec[j]);   //유클리드 호제법

        cout << sum << endl;
    }
}
