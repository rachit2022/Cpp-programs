#include <iostream>
using namespace std;
class Student
{
public:
    int age, id;
    char name[50];
    void getData();
};
class UgStudent : public Student
{
public:
    int sem, fees, stipend;
    float CGPA;
    void getData();
};
class PgStudent : public Student
{
public:
    int sem, fees, stipend;
    float CGPA;
    void getData();
};
void Student::getData()
{
    cout << "Enter name: ";
    cin >> name;
    cout << "ID is: ";
    cin >> id;
    cout << "Age is: ";
    cin >> age;
}
void UgStudent::getData()
{
    Student::getData();
    cout << "Enter sem: ";
    cin >> sem;
    cout << "Enter fees: ";
    cin >> fees;
    cout << "Enter Stipend: ";
    cin >> stipend;
    cout << "Enter CGPA: ";
    cin >> CGPA;
}
void PgStudent::getData()
{
    Student::getData();
    cout << "Enter sem: ";
    cin >> sem;
    cout << "Enter fees: ";
    cin >> fees;
    cout << "Enter Stipend: ";
    cin >> stipend;
    cout << "Enter CGPA: ";
    cin >> CGPA;
}
int main()
{
    UgStudent ug[20];
    PgStudent pg[20];
    int i, j, n;
    float average;
    cout << "Enter the number of entries for Ug Student: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        ug[i].getData();
    }
    for (int sem = 1; sem <= 8; sem++)
    {
        int sum = 0, count = 0, found = 0;
        for (i = 1; i <= n; i++)
        {
            if (ug[i].sem == sem)
            {
                found = 1;
                sum = sum + ug[i].age;
                count++;
            }
        }
        if (found == 1)
        {
            average = sum / count;
            cout << "Average of sem of age is: " << average << endl;
        }
    }
    cout << "Enter the number of entries for Pg Student: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        pg[i].getData();
    }
    for (int sem = 1; sem <= 8; sem++)
    {
        int sum = 0, count = 0, found = 0;
        for (i = 1; i <= n; i++)
        {
            if (pg[i].sem == sem)
            {
                found = 1;
                sum = sum + pg[i].age;
                count++;
            }
        }
        if (found == 1)
        {
            average = sum / count;
            cout << "Average of sem of age is: " << average << endl;
        }
    }
    return 0;
}