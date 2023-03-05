#include <iostream>
using namespace std;

int n, i, j;

struct Student
{

    char name[50];

    int roll_num;

    int m1, m2, m3, m4, m5;

    int total;

    float average;

    void total_sort();

    void average_sort();

    void roll_number_sort();
}s[100],temp;
void total_sort()
{
    for(i=0;i<n;i++)
    {
        for(j=i+1;i<n;j++)
        {
            if(s[i].total>s[j].total)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<"***Details of student in sorted(total) manner***"<<endl;
        cout<<"Name is: "<<s[i].name<<endl;
        cout<<"Roll number is: "<<s[i].roll_num<<endl;
        cout<<"Marks in 5 subject is: "<<s[i].m1<<endl<<s[i].m2<<endl<<s[i].m3<<endl<<s[i].m4<<endl<<s[i].m5<<endl;
        cout<<"Total is: "<<s[i].total<<endl;
        cout<<"Average is: "<<s[i].average<<endl;
    }
}
void average_sort()
{
    for(i=0;i<n;i++)
    {
        for(j=i+1;i<n;j++)
        {
            if(s[i].average>s[j].average)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<"***Details of student in sorted(average) manner***"<<endl;
        cout<<"Name is: "<<s[i].name<<endl;
        cout<<"Roll number is: "<<s[i].roll_num<<endl;
        cout<<"Marks in 5 subject is: "<<s[i].m1<<endl<<s[i].m2<<endl<<s[i].m3<<endl<<s[i].m4<<endl<<s[i].m5<<endl;
        cout<<"Total is: "<<s[i].total<<endl;
        cout<<"Average is: "<<s[i].average<<endl;
    }
}
void roll_number_sort()
{
    for(i=0;i<n;i++)
    {
        for(j=i+1;i<n;j++)
        {
            if(s[i].roll_num>s[j].roll_num)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<"***Details of student in sorted(roll_num) manner***"<<endl;
        cout<<"Name is: "<<s[i].name<<endl;
        cout<<"Roll number is: "<<s[i].roll_num<<endl;
        cout<<"Marks in 5 subject is: "<<s[i].m1<<endl<<s[i].m2<<endl<<s[i].m3<<endl<<s[i].m4<<endl<<s[i].m5<<endl;
        cout<<"Total is: "<<s[i].total<<endl;
        cout<<"Average is: "<<s[i].average<<endl;
    }
}
int main()
{

    printf("Enter the number of student: ");

    scanf("%d", &n);

    for (i = 0; i < n; i++)

    {

        cout << "Enter the name of student " << i + 1 << ": ";

        cin >> s[i].name;

        cout << "Enter the roll  of student " << i + 1 << ": ";

        cin >> s[i].roll_num;

        cout << "Enter the marks of student " << i + 1 << ": "<<endl;

        cin >> s[i].m1 >> s[i].m2 >> s[i].m3 >> s[i].m4 >> s[i].m5;

        s[i].total = s[i].m1 + s[i].m2 + s[i].m3 + s[i].m4 + s[i].m5;

        cout << "Total marks scored by student " << i + 1 << " is: " << s[i].total << endl;

        s[i].average = s[i].total / 5;

        cout << "The average marks of student " << i + 1 << " is: " << s[i].average << endl;
    }

    int choice;

    cout << "Enter your choice of sorting:\n1.By total\n2.By average\n3.By roll number\n ";

    cin >> choice;

    switch (choice)

    {

    case 1:

        total_sort();

        break;

    case 2:

        average_sort();

        break;

    case 3:

        roll_number_sort();

        break;

    default:

        cout << "Invalid choice...." << endl;

        break;
    }

    return 0;
}
