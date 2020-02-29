//betelgeusean_plorg.h
#ifndef BETELGEUSEAN_PLORG_H
#define BETELGEUSEAN_PLORG_H

class Plorg
{
private:
    enum
    {
        MAX = 20
    };
    char name[20];
    int CI;

public:
    Plorg(const char *ar = "Plorga", int num = 50);
    void setCI(int num);
    void show() const;
};

#endif // !BETELGEUSEAN_PLORG_H
