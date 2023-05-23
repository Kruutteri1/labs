#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

/**
 * Текстовий файл містить результати складання студентами однієї групи іспитів
зимової сесії (номер залікової книжки, прізвище, ім’я, по батькові студента,
дисципліна, оцінка в балах за 100-бальною системою, оцінка за державною
шкалою). Знайти 5 найкращих студентів, а також що й на скільки вони склали. Якщо
5-те місце посідають кілька студентів одночасно, то вивести інформацію по всіх
них. У заголовку вказується кількість студентів, у підсумковому рядку через
роздільник – кількість записів у файлі й сумарний бал.
 */

struct Student {
    string id;
    string surname;
    string name;
    string middle_name;
    string discipline;
    int score_100;
    int score_national_scale;
};

bool compare_students(const Student& s1, const Student& s2) {
    return s1.score_100 > s2.score_100;
}

int main() {
    ifstream fin("C:\\Users\\Shelten\\source\\repos\\Zaiets-Lab01\\Zaiets-222.1-Lab08\\results.txt");
    if (!fin.is_open()) {
        cout << "Error: file not found!" << endl;
        return 1;
    }

    vector<Student> students;
    string line;
    while (getline(fin, line)) {
        istringstream iss(line);
        Student s;
        iss >> s.id >> s.surname >> s.name >> s.middle_name >> s.discipline >> s.score_100 >> s.score_national_scale;
        students.push_back(s);
    }
    fin.close();

    sort(students.begin(), students.end(), compare_students);

    int num_students = min(static_cast<int>(students.size()), 5); // обмеження до 5 студентів
    cout << "Top " << num_students << " students:" << endl;

    int total_score = 0;
    for (int i = 0; i < num_students; i++) {
        total_score += students[i].score_100;
    }

    for (int i = 0; i < num_students; i++) {
        cout << i + 1 << ". " << students[i].surname << " " << students[i].name << " " << students[i].middle_name
            << " " << students[i].discipline << " " << students[i].score_100 << endl;
    }

    cout << "Total number of records: " << students.size() << endl;
    cout << "Total score: " << total_score << endl;

}