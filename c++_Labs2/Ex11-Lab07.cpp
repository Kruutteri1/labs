#include <iostream>
#include <list>
using namespace std;

// Функція, що додає після кожного елемента заданого контейнера-списку lst ще один такий самий елемент,
// але зі зворотним знаком, а потім виключає зі списку всі негативні елементи та друкує результат.
void add_reverse(list<int>& lst) {
    auto it = lst.begin();
   
    while (it != lst.end()) {
        // Якщо елемент додатний, то до списку додаємо доповнення до нього зі зворотнім знаком.
        lst.insert(next(it), -*it);
        // Переміщуємо ітератор на два елементи вправо, щоб пропустити недавно доданий елемент.
        std::advance(it, 2);
    }
}

void remove_negative(list<int>& lst) {
    auto it = lst.begin();

    while (it != lst.end()) {
        // Якщо поточний елемент менший за 0, то видаляємо його зі списку.
        if (*it < 0) {
            it = lst.erase(it);
        }
        else {
            it++;
        }
    }
}

// Функція для виводу елементів списку на екран.
void print(list<int>& lst) {
    for (auto i : lst) {
        cout << i << " ";
    }
    cout << endl;
}


int main() {
    // Створюємо 2 списока для перевірки із заданими елементами.
    list<int> lst = { 1, -2, 3, -4, 5 };
    list<int> lst2 = { -11, 12, -13, 14, -15 };
    // Викликаємо функцію, яка додає елементи зі зворотнім знаком та видаляє негативні елементи.
    cout << "lst:" << endl;
    add_reverse(lst);
    remove_negative(lst);
    print(lst);

    cout << "lst2:" << endl;
    add_reverse(lst2);
    remove_negative(lst2);
    print(lst2);

   
}