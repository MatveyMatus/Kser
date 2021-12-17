#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int size_array,
        key,
        mid_idx = 0,
        left = 0,
        right = 0;
    left = 1;
    right = pow(2,31)-1;
    while (left < right) {
        mid_idx = left + (right - left) / 2;
        //mid_idx = (right + left) / 2;
        cout << mid_idx;
        if (0 <= mid_idx) {
            cout<< "\ngood :)";
            return 0;
        }
        else {
            cout << "\nbad :(";
            return -1;
        }
    }
    cout << right;
}


