//#include <iostream>
//#include <fstream>
//#include <vector>
//using namespace std;
//void qsort2(int l, int r, vector<int>& v, int k){
//    if (l >= r) return;
//    int x = v[(l+r)/2];
//    int i = l, j = r;
//    while (i <= j){
//        while (v[i] < x){ i++; }
//        while (v[j] > x){ j--; }
//        if (i <= j) swap(v[i++], v[j--]);
//    }
//    if (k <= j) return qsort2(l, j, v, k);
//    else return qsort2(i, r, v, k);
//}
//int main(){
//    ifstream fin("kth.in");
//    ofstream fout("kth.out");
//    int n, k;
//    fin>>n>>k;
//    vector<int> v(n);
//    fin>>a>>b>>c>>v[0]>>v[1];
//    for (int i=2; i < n; i++){ v[i] = a*v[i-2] + b*v[i-1] + c;}
//    qsort2(0, n-1, v, k-1);
//    cout<<v[k-1];
//}