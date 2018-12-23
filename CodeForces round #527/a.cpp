#include <iostream>
#include "math.h"
#include "cmath"
#include "string"
#include "string.h"
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, k;
    string s = "";
    char alpha[35] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;
        int index = 0;
        for (int j = 0; j < n; j++)
        {
            s += alpha[index];
            index++;
            if (index == k)
                index = 0;
        }
        cout << s << endl;
        s = "";
    }
}