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
    left = 10;
    right = pow(2,31)-1;
    //cout << right + 10;
    cin >> key;
    while (left < right) {
        //mid_idx = left + (right - left) / 2;
        mid_idx = (right + left) / 2;
        cout << mid_idx;
        if (key <= mid_idx) {
            right = mid_idx;
        }
        else {
            left = mid_idx + 1;
        }
    }
    cout << right;
}


