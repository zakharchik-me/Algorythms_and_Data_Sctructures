#include <fstream>
#include <string>

using namespace std;

/// читаем клаву - выполняем команду | добавка - проверка сущ спуск по дереву опр его поддерева(лев прав)
/// удаление - ? есть/нет - ? дети есть/нет
/// проверка сущ - поиск в дереве
/// след - макс > x || прев -  мин < x

struct element /// для эл бин дерева
{
    int value;
    element* par; /// родитель
    element* l; /// левый
    element* r; /// правый
};

class search_tree /// класс поиска
{
private:
    element* base = nullptr; /// корень - пустота
public:
    element* search(int x){ /// поиск элемента в бин дереве поиска
        element* current_el = base; /// тек = корню
        while (current_el != nullptr && x != current_el->value){ /// цикл поиска эл или его отсутствия
            if (x < current_el->value)
                current_el = current_el->l;  /// поиск в левом и правой поддереве
            else
                current_el = current_el->r;
        }
        return current_el;
    } /// поиск в дереве

    void add_el(int x){ /// функ добавки эл
        if (check_el(x)) /// проверка сущ эл
            return;
        element* new_el = new element; /// новая ветка
        new_el->value = x;
        new_el->par = nullptr;         ///  заполнение стуктуры
        new_el->l = nullptr;
        new_el->r = nullptr;
        element* current_el = base; /// структура для добавляемого элемента
        /// поиск места для элемента
        while (current_el != nullptr){  /// если тек > доб ? лев || прав
            new_el->par = current_el;
            if (new_el->value < current_el->value)
                current_el = current_el->l;
            else
                current_el = current_el->r;
        }
        if (new_el->par == nullptr) /// если дерево пустое -> эл - корень
            base = new_el;
        else{
            if (new_el->value < new_el->par->value) /// если тек < доб ? лев || прав
                new_el->par->l = new_el;
            else
                new_el->par->r = new_el;
        }
    } /// добавка

    void del(int x){ /// функ удаления{
        element* del_el = search(x); /// поиск эл
        if (del_el == nullptr){ /// если его нет
            return;
        }
        element* previous_el; /// структура  прев
        element* hepl_el; /// структура хелп
        if (del_el->l == nullptr || del_el->r == nullptr) /// если у удал эл нет детей
            previous_el = del_el; /// то прев -> удал
        else
            previous_el = next(x); /// иначе ищем мин > x
        if (previous_el->l != nullptr) /// если прев != пустоте
            hepl_el = previous_el->l;
        else
            hepl_el = previous_el->r;
        if (hepl_el != nullptr) /// если хелп != пустоте
            hepl_el->par = previous_el->par;
        if (previous_el->par == nullptr) /// если родитель = пусто
            base = hepl_el;
        else{
            if (previous_el == previous_el->par->l)
                previous_el->par->l = hepl_el;
            else
                previous_el->par->r = hepl_el;
        }
        if (previous_el != del_el) /// если предыдущий элемент != удаляемому
            del_el->value = previous_el->value; /// удаляемый становиться предыдущим
        delete previous_el; /// удаляем предыдущий элемент
    } /// удаление

    bool check_el(int x) /// проверяем равен ли нужный нам элемент пустоте
    {
        return search(x) != nullptr;
    }

    element* next(int x) /// Функция возвращает макс эл > x || null - такого элемента нет
    {
        element* current_el = base;   /// текущий элемент равен корню
        element* successor_el = nullptr; /// следующий - пустоте
        while (current_el != nullptr)
        {
            if (current_el->value > x){ /// условие{
                successor_el = current_el;
                current_el = current_el->l;
            }
            else
                current_el = current_el->r;
        }
        return successor_el; /// возвращаем значение
    }

    element* Previous(int x) /// Функция возвращает макс эл < x || null (нет эл)
    {
        element* current_el = base; /// текущий элемент равен корню
        element* previous_el = nullptr; /// предыдущий - пустоте
        while (current_el != nullptr){
            if (current_el->value < x){
                previous_el = current_el;
                current_el = current_el->r;
            }
            else
                current_el = current_el->l;
        }
        return previous_el;
    }
};

int main()
{
    ifstream fin("bstsimple.in");
    ofstream fout("bstsimple.out");
    search_tree tree;
    string in;
    int key;
    while (fin >> in >> key)
    {
        if (in == "insert")
            tree.add_el(key);

        if (in == "delete")
            tree.del(key);

        if (in == "exists"){
            if (tree.search(key))
                fout << "true\n";
            else
                fout << "false\n";
        }

        if (in == "next"){
            element* res = tree.next(key);
            if (res == nullptr)
                fout << "none\n";
            else
                fout << res->value << "\n";
        }

        if (in == "prev"){
            element* res = tree.Previous(key);
            if (res == nullptr)
                fout << "none\n";
            else
                fout << res->value << "\n";
        }
    }
}
