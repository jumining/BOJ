#include <iostream>
#include <set>
using namespace std;
 
set<int> s; //이진트리 역할
 
int main(void)
{
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int A, B;
        cin >> A >> B;
 
        for (int i = 0; i < A; i++)
        {
                 int num;
                 cin >> num;
 
                 s.insert(num);
        }
 
        for (int i = 0; i < B; i++)
        {
                 int num;
                 cin >> num;
 
                 auto it = s.find(num);
                 if (it == s.end())
                         continue;
                 else
                         s.erase(it);
        }
 
        cout << s.size() << "\n";
        for (auto num : s)
                 cout << num << " ";
        cout << "\n";
        return 0;
}



출처: https://jaimemin.tistory.com/1036 [꾸준함]
