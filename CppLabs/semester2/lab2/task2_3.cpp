#include <iostream>
#include <string>

using namespace std;

struct student{
    string FLF; // first last father
    int age;
    int course;
    int marks[3];
};

student read();
int get_students_age(student st);
double average_age(student* students, int length, int course);

void readAllStudent(student* students, int count_of_students){
        for(int i = 0; i < count_of_students; ++i){
        cout << "INPUT DATA OF " << i+1 << "STUDENT: " << endl;
        students[i] = read();
    }
}

int main(){
    int count_of_students;

    cout << "Input count of students: ";
    cin >> count_of_students;

    student* students = new student[count_of_students];

    readAllStudent(students, count_of_students);
    int course;
    do{
    cout << "Input course of students: ";
    cin >> course;
    } while(course <= 0);
    
    if(average_age(students, count_of_students, course) >= 0)
        cout << "Average age: " << average_age(students, count_of_students, course) << endl;
    else
        cout << "Student on " << course << " course is not found" << endl;

    delete[] students;

    return 0;
}

student read(){
    student new_student;

    string FLF; // first last father
    int age;
    int course;
    int marks[3];

    cout << "Input first, last and father name: ";

    cin.ignore(); // ignoring \n before input
    getline(cin, FLF);

    cout << "Input age: ";
    cin >> age;

    cout << "Input course: ";
    cin >> course;

    cout << "Input 3 marks: ";
    for(int i = 0; i < 3; ++i){
        cin >> marks[i];
        new_student.marks[i] = marks[i];
    }
    
    new_student.FLF = FLF;
    new_student.age = age;
    new_student.course = course;

    return new_student;
}

int get_students_age(student st){
    return st.age;
}

double average_age(student* students, int length, int course){
    int sum = 0;
    int count = 0;

    double average;

    for(int i = 0; i < length; ++i)
        if(students[i].course == course){
            sum += get_students_age(students[i]);
            count++;
        }
        if(sum == 0){
            return -1;
        }
    
    return (double)sum / (double)count;
}
