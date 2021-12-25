#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream fin("antiqs.in.txt");
    ofstream fout("antiqs.out.txt");
    long n;
    fin >> n;
    int a[300000];
    for (int i = 0; i < n; i++)
        a[i] = i + 1;
    for (int i = 2; i < n; i++)
        swap(a[i], a[i / 2]);
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
}
// допустимо опускание скобок на более новых версиях с++