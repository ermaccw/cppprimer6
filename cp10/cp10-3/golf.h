// golf.h
#ifndef GOLF_H_
#define GOLF_H_

class Golf
{
private:
    static const int Len = 40; //用户名长度
    char fullname[Len];        //用户名
    int handicap;              //等级
public:
    Golf();
    //非交互版本-用户信息输入
    Golf(const char *name, int hc = 0);
    //交互版本-标准输入输入用户信息
    const Golf &setgolf(Golf &g);
    ~Golf();
    //重置用户等级
    void sethandicap(int hc);
    //显示用户内容
    void showgolf() const;
};

#endif // !GOLF_H_