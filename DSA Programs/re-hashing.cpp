#include <iostream>
#include <conio.h>

using namespace std;

#define N 15

int hashfun(int val) {
    return (val % 10);
}
int rehash(int k) {
    return (k + 3);
}

int main() {
    int htab[N], values[N], ind, i, n, key, x;
    for (i = 0; i < N; i++) {
        htab[i] = -1;
    }
    // clrscr();

    cout << endl << "how many values are there ";
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> values[i];

    for (i = 0; i < n; i++) {
        x = values[i];
        key = hashfun(x);
        while(htab[key] != -1) {
            key = rehash(key);
        }
        htab[key] = x;
    }
    cout << endl << "the hash table";
    for (i = 0; i < N; i++)
        cout << i << " -> " << htab[i] << "\n";
    return 0;
}
