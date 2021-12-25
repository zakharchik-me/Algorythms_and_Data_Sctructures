#include <fstream>
#include <vector>
using namespace std;

/// Проверяем условие бин дерева поска - рекурсивный спуск с записью вершин - проверка на сор - да-да(нет-нет)

struct element
{
    int l; /// индекс левого
    int r; /// индекс правого
    int value; /// знач
};

bool checking(vector <int>& peak) /// рекурсия корректности
{
    for(int i = 1; i < peak.size(); i++)
    {
        if (peak[i] <= peak[i-1]) /// тек <= past
            return false; /// break
    }
    return true;
}

void func_peak(element *tree, vector <int>& peak, int a) /// рекурсия записи вершин
{
    if (a != -1) /// если не лист
    {
        func_peak(tree, peak, tree[a].l); /// рекурсия для лева
        peak.push_back(tree[a].value);       /// добавлям корень в век массив
        func_peak(tree, peak, tree[a].r); /// рекурсия для права
    }
}
bool vec(element* tree, int a) /// вектор + функ проверки
{
    vector <int> peak;               /// сам вектор
    func_peak(tree, peak, 0);  /// запись вершин
    return checking(peak);        /// корректность (1 || 0)
}

int main(){
    ifstream fin("check.in");
    ofstream fout("check.out");
    int n;
    fin >> n;
    element* tree = new element[n]; /// массив для хранения дерева
    for (int i = 0; i < n; i++){
        fin >> tree[i].value >> tree[i].l >> tree[i].r;
        tree[i].l--;
        tree[i].r--;
    }
    if (n == 0 || vec(tree, 0) == true)   /// если дерево пустое или проверка корректности выполнена
        fout << "YES";
    else
        fout << "NO";
    return 0;
}