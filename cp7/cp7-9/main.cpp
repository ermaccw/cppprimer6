//7-9
#include <iostream>
using namespace std;

const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student *ps);
void display3(const student pa[], int n);

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;
    student *ptr_stu = new student[class_size];
    int enterd = getinfo(ptr_stu, class_size);
    for (int i = 0; i < enterd; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, enterd);
    delete[] ptr_stu;
    cout << "Done\n";

    system("pause");
    return 0;
}

int getinfo(student pa[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "输入姓名：";
        cin.getline((pa[i].fullname), SLEN);
        cout << "输入爱好：";
        cin.getline((pa[i].hobby), SLEN);
        cout << "输入ooplevel：";
        cin >> pa[i].ooplevel;
        cin.get();
    }
    return i;
}

void display1(student st)
{
    cout << st.fullname << " "
         << st.hobby << " "
         << st.ooplevel << endl;
}

void display2(const student *ps)
{
    cout << ps->fullname << " "
         << ps->hobby << " "
         << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << pa[i].fullname << " "
             << pa[i].hobby << " "
             << pa[i].ooplevel << endl;
    }
}