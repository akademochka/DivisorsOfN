#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int n;
    int d, dlim;
    cin >> n;
    dlim = sqrt( n );
    for (d = 1; d <= dlim; ++d) {
        if (n%d == 0) {
            cout << d << " ";

            if ( d != n/d )

            cout << n/d << " ";
        }
    }
    return 0;
}
