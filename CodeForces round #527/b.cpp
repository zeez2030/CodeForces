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
    int n;
    cin >> n;
    vector<int> skill(n);
    for (int i = 0; i < n; i++)
        cin >> skill[i];
    sort(skill.begin(), skill.end());
    int problem = 0;
    for (int i = 0; i < n; i += 2)
    {
        problem += abs(skill[i] - skill[i + 1]);
    }
    cout << problem << endl;
}
