//coordinate.h
#ifndef COORDINATE_H_
#define COORDINATE_H_
class Move
{
private:
    double x;
    double y;

public:
    Move(double a = 0, double b = 0);
    void showmove() const;
    Move add(const Move &m) const;
    void reset(double a = 0, double b = 0);
};
#endif // !COORDINATE_H_