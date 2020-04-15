//golf.h
const int Len = 40; //用户名长度

struct golf //用户信息格式
{
    char fullname[Len]; //用户名
    int handicap;       //等级
};

//非交互版本-用户信息输入
void setgolf(golf &g, const char *name, int hc);

//交互版本-标准输入输入用户信息
int setgolf(golf &g);

//重置用户等级
void handicap(golf &g, int hc);

//显示用户内容
void showgolf(const golf &g);