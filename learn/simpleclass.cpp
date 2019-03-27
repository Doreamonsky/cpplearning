#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <algorithm>

using namespace std;
struct RectData
{
    /* data */
    float x, y;

    RectData(float _x, float _y) : x(_x), y(_y) {}
};

struct Product
{
    /* data */
    string name;
    float price;

    Product(string _n, float _p) : name(_n), price(_p) {}
};

class Rect
{
  private:
    /* data */
    float width, height;

  public:
    Rect(float _width, float _heigth);
    float Area();
    ~Rect();
};

Rect::Rect(float _width, float _heigth)
{
    width = _width;
    height = _heigth;
}

float Rect::Area()
{
    return width * height;
}

Rect::~Rect()
{
}

int main()
{
    auto myRect = Rect(12, 12);
    cout << myRect.Area() << endl;

    auto *ptr = &myRect;
    cout << ptr->Area() << endl;

    cout << "Array Test" << endl;

    auto myRects = vector<Rect>();

    array<RectData, 4> rectData = {
        RectData(1, 3),
        RectData(5, 9),
        RectData(2, 2),
        RectData(2, 3)};

    for (auto rectD : rectData)
    {
        myRects.push_back(Rect(rectD.x, rectD.y));
    }

    for (auto rect : myRects)
    {
        cout << rect.Area() << endl;
    }
    //Item list
    vector<Product> items = {
        Product("Banna", 12),
        Product("Apple", 7),
        Product("Ice-Cream", 8)};

    //Sort by Price
    sort(items.begin(), items.end(), [](Product &a, Product &b) {
        return a.price < b.price;
    });

    for (auto item : items)
    {
        cout << "Name:" << item.name << "Price:" << item.price << endl;
    }

    //Sort by Reverse Alphabet
    sort(items.begin(), items.end(), [](Product &a, Product &b) {
        return a.name > b.name;
    });

    for (auto item : items)
    {
        cout << "Name:" << item.name << "Price:" << item.price << endl;
    }

    return 0;
}