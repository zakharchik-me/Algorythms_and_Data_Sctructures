#include <fstream>
using namespace std;

/// Спускаемся и поднимаемся по дереву, спускаемся до листа, поднимаемся обратно к корню, добавляя 1

struct element{  /// структура элемента
    int l; /// левый
    int r; /// правый
    int value; /// эл
};

int height(element* tree, int h){
    if (h == -1)  /// нет потомка - нет спуска
        return 0;
    else{
        int h1 = height(tree, tree[h].l) + 1; /// рекурсия по левому дереву
        int h2 = height(tree, tree[h].r) + 1; /// правому /// за каждый подъем +1
        if (h1 > h2) /// сравниваем возможные высоты и выбираем большую
            return h1;
        else
            return h2;
    }}


int main(){
    ifstream fin("height.in");
    ofstream fout("height.out");
    int n;
    fin >> n;
    element* tree = new element[n];
    for (int i; i < n; i++){
        fin >> tree[i].value >> tree[i].l >> tree[i].r;
        tree[i].l--;
        tree[i].r--;
    }
    if (n == 0)  /// если нет детей, то высота равна 0
        fout << 0;
    else
        fout << height(tree, 0); /// если дети есть, вызываем функцию для поиска высоты
    return 0;
}