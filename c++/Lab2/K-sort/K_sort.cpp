#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void qsort2(int l, int r, vector<int>& v, int k) {
    if (l >= r) return;
    int x = v[(l + r) / 2];
    int i = l, j = r;
    while (i <= j) {
        while (v[i] < x) { i++; }
        while (v[j] > x) { j--; }
        if (i <= j) swap(v[i++], v[j--]);
    }
    if (k <= j) return qsort2(l, j, v, k);
    else return qsort2(i, r, v, k);
}
int main() {
    ifstream fin("kth.in");
    ofstream fout("kth.out");
/*    int n, k, kk;
    fin >> n;
    fin >> kk;
    n = 5;
    k = kk -2;
    vector <int> v(n);
    int a[n], b[n+k], c[n+k+n];

    for (int i = 0; i < n; i++) { fin >> a[i]; }
//    for (int i = 0; i < n; i++) { b[i] = a[i]; }

    for (int i = 0; i < n; i++) {
        if(i==0){ b[i] = a[0]*a[i+3] + a[1]*a[i+4] + a[2]; }
        else if (i==1){b[i] = a[0]*a[i+3] + a[1]*b[i-1] + a[2]; }
        else{b[i] = a[0]*b[i-2] + a[1]*b[i-1] + a[2]; }}

//    for (int i = 0; i < kk; i++) { cout << b[i]<<" "; }

//    cout << "\n";

    for (int i = 0; i<k; i++){
        for(int j = i; j>0 && b[j-1]>b[j]; j--){
            swap(b[j], b[j-1]);
        }
    }
/*      for (int i = 0; i<n; i++) {
        for (int j = i; j > 0 && a[j - 1] > a[j]; j--) {
            swap(a[j], a[j - 1]);
        }
    }
*/
/*    for (int i = 0; i < n; i++) { cout << a[i]<<" "; }
    cout<<"\n";
    for (int i = 0; i < k; i++) { cout << b[i]<<" "; }
    cout<<"\n"<<b[k-1]; */
/*    for (int i = 0; i<n+k+n; i++){
        if (i<n){c[i] = a[i];}
        else{c[i] = b[i];}
    }
    cout<<"\n";
    for (int i = 0; i < n+k+n; i++) { cout << c[i]<<" "; }
    cout<<"\n";

    cout<<c[kk-1];*/
    int n, k, a, b, c;
    fin>>n>>k>>a>>b>>c;
    vector<int> v(n);
    fin>>v[0]>>v[1];
//    cout<<c[0];
//    for (int  i = 2; i<n+2; i++){ c[i] = b[i-2]; }
//    cout<<"\n";
//    for(int i = 0; i<n; i++){cout<<c[i]<<" ";}
/*    for (int i =0; i<n; i++){
        for(int j = i; j>0 && c[j-1]>c[j]; j--){
            swap(c[j], c[j-1]);
        }
    }*/
//    cout<<"\n";
//    for(int i = 0; i<n; i++){cout<<c[i]<<" ";}
//    for (int i = 0; i<n; i++){ v[i] = c[i];}
    for (int f=2; f < n; f++){ v[f] = a*v[f-2] + b*v[f-1] + c;}
    qsort2(0, n-1, v, k-1);
    fout<<v[k-1];
}