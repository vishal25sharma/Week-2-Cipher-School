#include <iostream>
using namespace std;

void minandmax(int *a, int *min, int *max) {
    int i;
    int small = a[0], large = a[0];

    for (i = 0; i < 6; i++) {
        if (a[i] > large) {
            large = a[i];
        }
        if (a[i] < small) {
            small = a[i];
        }
    }

    // Update the min and max values
    *min = small;
    *max = large;
}

int main() {
    int a[6]; // Corrected array size
    int min, max;

    for (int i = 0; i < 6; i++) {
        a[i] = i;
    }

    minandmax(a, &min, &max);

    cout << "Minimum value: " << min << endl;
    cout << "Maximum value: " << max << endl;

    return 0;
}
