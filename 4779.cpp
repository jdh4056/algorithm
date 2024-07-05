#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<char> v;

void cantor(int start, int end)
{
    if (end - start == 1) return;

    int erase_start = start + (end - start) / 3;
    int erase_end = end - (end - start) / 3;

    for (int i = erase_start; i < erase_end; i++)
    {
        v[i] = ' ';
    }

    cantor(start, erase_start);
    cantor(erase_start + (end - start) / 3, end);
}

int main()
{
    int N = 0;
    while (cin >> N)
    {

        for (int i = 0; i < pow(3, N); i++)
        {
            v.push_back('-');
        }


        cantor(0, pow(3, N));


        for (int i = 0; i < pow(3, N); i++)
        {
            cout << v[i];
        }
        cout << "\n";


        v.clear();
    }
    return 0;
}
