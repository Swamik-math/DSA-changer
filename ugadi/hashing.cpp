#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool subSetPresent(vector<int> &a, vector<int> &b)
{

    int m = a.size(), n = b.size();
    for (int i = 0; i < n; i++)
    {
        bool found = false;

        for (int j = 0; j < m; j++)
        {
            if (b[i] == a[j])
            {
                found = true;
                a[j] = -1;
                break;
            }
        }
        if (!found)
            return false;
    }
    return true;
}

bool isSubsetSort(vector<int> &a, vector<int> &b)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0;
    int m = a.size(), n = b.size();

    while (i < m && j < n)
    {
        if (a[i] < b[j])
            i++;

        else if (a[i] == b[j])
        {
            i++;
            j++;
        }
        else
            return false;
    }
    return (j == n);
}

int main(){
    vector<int> a = {11,1,13,21,3,7};
    vector<int> b = {11, 3, 7, 2};

    if(isSubsetSort(a, b))
        cout << "true\n";
    else
        cout << "false\n";
    
    return 0;

}