//3-2
#include <iostream>
using namespace std;

int incHeight(int f, int i)
{
    const short foot2inch = 12;
    int footinch_inch = f * foot2inch + i;
    return footinch_inch;
}

double height_mi(int i)
{
    const double inch2m = 0.0254;
    double inch_mi = i * inch2m; //身高英寸转成米
    return inch_mi;
}

double weight_kg(double p)
{
    const float pound2kg = 2.2;
    double pound_kg = p / pound2kg; //体重磅转成千克
    return pound_kg;
}

double BMIdisplay(double h, double w)
{
    double BMI = w / (h * h);
    return BMI;
}

int main()
{
    cout << "请输入您的身高体重信息：\n";

    unsigned short height_foot;
    double height_inch;
    double weight_pound;
    double BMI;

    cout << "首先输入身高（英尺）：___\b\b\b";
    cin >> height_foot;
    cout << "再输入身高（英寸）：___\b\b\b";
    cin >> height_inch;
    cout << "输入体重（磅）:___\b\b\b";
    cin >> weight_pound;
    cout << endl;
    cout << "您的身高是" << incHeight(height_foot, height_inch) << "英寸，";
    cout << "您的体重是" << weight_pound << "磅，";

    BMI = BMIdisplay(height_mi(incHeight(height_foot, height_inch)), weight_kg(weight_pound));

    cout << "您的BMI为： " << BMI << "，";

    if (BMI < 18.5)
        cout << "您的体重过轻\n";
    else if (BMI >= 18.5 && BMI < 23.9)
        cout << "您的体重正常\n";
    else if (BMI >= 24 && BMI < 27.9)
        cout << "您的体重过重\n";
    else if (BMI >= 28 && BMI < 32)
        cout << "您的体重肥胖\n";
    else
        cout << "您的体重非常肥胖！\n";

    system("pause");
    return 0;
}