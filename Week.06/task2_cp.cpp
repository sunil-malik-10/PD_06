#include <iostream>
using namespace std;

string calculateGrade(int sum);

int main() 
{
    string name;
    int eng, math, chem, social, bio;
    float sum;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter marks for English: ";
    cin >> eng;

    cout << "Enter marks for Maths: ";
    cin >> math;

    cout << "Enter marks for Chemistry: ";
    cin >> chem;

    cout << "Enter marks for Social Sciences: ";
    cin >> social;

    cout << "Enter marks for Biology: ";
    cin >> bio;

    sum = eng + math + chem + social + bio;

    cout << "Student Name: " << name << endl;
    cout << "Percentage: " << ((sum) / 500) * 100 << "%" << endl;
    cout << "Grade: " << calculateGrade(sum) << endl;

    return 0;
}

string calculateGrade(int sum)
{  
    float average = (sum) / 5;
    string grade;

    if (average >= 90)
    {
        grade = "A+";
    }
    else if (average >= 80)
    {
        grade = "A";
    }
    else if (average >= 70)
    {
        grade = "B+";
    }
    else if (average >= 60)
    {
        grade = "B";
    }
    else if (average >= 50)
    {
        grade = "C";
    }
    else if (average >= 40)
    {
        grade = "D";
    }
    else
    {
        grade = "F";
    }

    return grade;
}
