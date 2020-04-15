//7-2
#include <iostream>
using namespace std;
const int SIZE = 10;

int inputRank(double[]);
double avgRank(const double *, int n);
void disRank(const double *, double, int n);

int main()
{
    double *Rank = new double[SIZE];
    int n = inputRank(Rank);
    double avgrank = avgRank(Rank, n);
    disRank(Rank, avgrank, n);
    delete[] Rank;
    system("pause");
    return 0;
}

int inputRank(double arr[])
{
    cout << "输入最多10个高尔夫成绩：\n";
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (cin >> arr[i])
            count++;
        else
            break;
    }
    return count;
}

double avgRank(const double *Rank, int n)
{
    double total = 0;
    double avg = 0;
    for (int i = 0; i < n; i++)
        total += Rank[i];
    avg = total / n;
    return avg;
}

void disRank(const double *inputRank, double avg, int n)
{
    cout << "高尔夫成绩：";
    for (int i = 0; i < n; i++)
        cout << inputRank[i] << " ";
    cout << endl;
    cout << "平均成绩：" << avg << endl;
}