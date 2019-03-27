#include <map>
#include <list>
#include <iostream>
#include <algorithm>
#include <vector>

// vector
// 　　vector与数组类似，拥有一段连续的内存空间，并且起始地址不变。便于随机访问，时间复杂度为O（1），但因为内存空间是连续的，所以在进入插入和删除操作时，会造成内存块的拷贝，时间复杂度为O（n）。

// 　　此外，当数组内存空间不足，会采取扩容，通过重新申请一块更大的内存空间进行内存拷贝。

// List
// 　　list底层是由双向链表实现的，因此内存空间不是连续的。根据链表的实现原理，List查询效率较低，时间复杂度为O（n），但插入和删除效率较高。只需要在插入的地方更改指针的指向即可，不用移动数据。

// 迭代器支持不同
// 异：vector中，iterator支持 ”+“、”+=“，”<"等操作。而list中则不支持。

// 同：vector<int>::iterator和list<int>::iterator都重载了 “++ ”操作。

using namespace std;

int main()
{
    //http://www.cplusplus.com/reference/map/map/
    //Map
    map<int, string> mList;

    mList[0] = "January";
    mList[1] = "February";
    mList[2] = "March";
    mList[3] = "April";
    mList[4] = "May";

    map<int, string>::iterator it;

    // Why ++it ? for performance  https://blog.csdn.net/yangxuan0261/article/details/50414855
    for (it = mList.begin(); it != mList.end(); ++it)
    {
        cout << "key" << it->first << "value" << it->second << endl;
    }

    it = mList.find(2);

    cout << "val:" << it->second << endl;

    it = mList.find(6); //Get iterator to element

    //没有找到元素位置则返回end
    //end是map的尾部,没有实际元素,可以 iter = map.end(); iter --;指向map中最后一个元素

    if (it == mList.end())
    {
        cout << "Not Found" << endl;
    }

    mList.erase(it);

    //Count elements with a specific key
    int mCount = mList.count(6);

    //This can be used as contains
    if (mCount == 0)
    {
        cout << "Not Containing key 6" << endl;
    }

    //List

    //http://www.cplusplus.com/reference/list/list/

    // Sequence
    //      Elements in sequence containers are ordered in a strict linear sequence. Individual elements are accessed by their position in this sequence.
    // Doubly-linked list
    //      Each element keeps information on how to locate the next and the previous elements, allowing constant time insert and erase operations before or after a specific element (even of entire ranges), but no direct random access.
    // Allocator-aware
    //      The container uses an allocator object to dynamically handle its storage needs.
    list<int> nList;
    nList.push_back(23);
    nList.push_back(82);
    nList.push_back(12);

    list<int>::reverse_iterator nIt;

    for (nIt = nList.rbegin(); nIt != nList.rend(); nIt++)
    {
        cout << *nIt << endl;
    }

    cout << "Use Auto to foreach" << endl;

    for (auto p : nList)
    {
        cout << p << endl;
    }

    //下面是各种变量截取的选项：
    // [] 不截取任何变量
    // [&} 截取外部作用域中所有变量，并作为引用在函数体中使用
    // [=] 截取外部作用域中所有变量，并拷贝一份在函数体中使用
    // [=, &foo]   截取外部作用域中所有变量，并拷贝一份在函数体中使用，但是对foo变量使用引用
    // [bar]   截取bar变量并且拷贝一份在函数体重使用，同时不截取其他变量
    // [this]            截取当前类中的this指针。如果已经使用了&或者=就默认添加此选项。

    for_each(nList.begin(), nList.end(), [](int &val) {
        cout << val << endl;
    });

    vector<int> valList = {12, 32, -2, -5, -32};

    cout << "Sor number by abs val" << endl;

    sort(valList.begin(), valList.end(), [=](int &a, int &b) { return abs(a) < abs(b); });

    for (auto p : valList)
    {
        cout << p << endl;
    }
    //Lambda
    auto lambda = [](int x, int y) { return x + y; };

    cout << lambda(1, 2) << endl;

    cout << "2nd: " << *++nList.begin() << endl;
}