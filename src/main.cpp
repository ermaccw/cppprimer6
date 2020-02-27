//main.cpp
//从栈中添加和删除customer结构。每次customer结构被删除时，其payment的值都被加入到总数中，并报告总数。应可以直接使用Stack类而不作修改；
//只需修改typedef声明，使item的类型为customer，而不是unsigned long皆可。
#include "stack.h"
#include <iostream>
#include <cctype>

int main()
{
    using namespace std;
    Stack st;
    char ch;
    customer po;
    cout << "Please enter A to add a purchase order,\n"
         << "P to process a PO, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << "\a";
            continue;
        }
        switch (ch)
        {
        case 'A':
        case 'a':
            cout << "Enter a PO username to add: ";
            cin.getline(po.fullname, 35);
            cout << "Enter a PO number to add: ";
            cin >> po.payment;
            cin.get();
            if (st.isfull())
                cout << "stack already full\n";
            else
                st.push(po);
            break;
        case 'P':
        case 'p':
            if (st.isempty())
                cout << "stack already empty\n";
            else
            {
                st.pop(po);
                cout << "PO #" << po.fullname << " "
                     << po.payment << " popped\n";
            }
            break;
        }
        cout << "Please enter A to add a purchase order,\n"
             << "P to process a PO, or Q to quit.\n";
    }
    cout << "Bye\n";

    system("pause");
    return 0;
}