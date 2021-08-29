#include <iostream>

using namespace std;

int main()
{
    int n1;
    cin >> n1;
    for (int f = 0; f < n1; f++)
    {
        int n;
        cin >> n;
        int arr[26] = {0};
        for (int i = 0; i < n; ++i)
        {
            char c;
            cin >> c;
            arr[c - 'a']++;
        }
        int ind = -1, mx = INT_MIN;
        for (int i = 0; i < 26; ++i)
        {
            if (arr[i] != 0 && arr[i] != 1 && arr[i] > mx)
            {
                ind = i;
                mx = arr[i];
            }
        }
        if (ind >= 0)
            cout << char('a' + ind) << " - " << arr[ind] << endl;
        else
            cout << "No Duplicates Present" << endl;
    }
    return 0;
}