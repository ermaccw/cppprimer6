//7-3
#include <iostream>
using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void structbox(box);
void pstructbox(box *);

int main()
{
    box cube = {"karl max", 15, 10, 20, 5};
    box *pcube = &cube;

    cout << "按值传递：\n";
    structbox(cube);

    cout << "传递结构指针：\n";
    pstructbox(pcube);

    system("pause");
    return 0;
}

void structbox(box cube)
{
    cout << cube.maker << endl;
    cout << cube.height << endl;
    cout << cube.width << endl;
    cout << cube.length << endl;
    cout << cube.volume << endl;
}

void pstructbox(box *cube)
{
    cout << cube->maker << endl;
    cout << cube->height << endl;
    cout << cube->width << endl;
    cout << cube->length << endl;
    cube->volume = cube->height * cube->width * cube->length;
    cout << cube->volume << endl;
}