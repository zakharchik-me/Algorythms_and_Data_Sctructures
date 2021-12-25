#include <iostream>
#include <fstream>

using namespace std;

struct StackNode /// структур с 2 эл
{
    int info; /// инф
    StackNode *next; /// адрес на след эл
};

class Stack /// cтэк
{
private:
    StackNode *top; /// адрес на верхний элемент
public:
    Stack()
    {
        top = NULL; /// вверхний эл = нулл
    }

    void push(int elem) /// добавление элемента - push
    {
        StackNode *node = new StackNode(); /// переменная тип StackNode
        node->next = top; /// адрес след эл -  нов вершина
        node->info = elem; /// запись нинф
        top = node; /// обновление верх эл
    }

    int pop() /// поп верх эл
    {
        int result = top->info; /// сохр результат
        StackNode *del = top; /// объявляем переменную и привязываем адрес чтоб её потом удалить и очистить память
        top = top->next; /// указатель на следующий элемент после верхнего
        delete del; /// удалить адрес
        return result; /// вернуть результат
    }
};

int main(){
    Stack st;

    ifstream fin("stack.in.txt");
    ofstream fout("stack.out.txt");

    int m;
    fin >> m; /// считываем количестов оппераций

    for (int i = 0; i < m; i++){
        string command;
        fin >> command; /// получаем на вход команду если + то пуш, иначе поп
        if (command == "+") {
            int n;
            fin >> n;
            st.push(n);
        }
        else{
            fout << st.pop() << endl;
        }
    }
}