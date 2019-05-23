#ifndef WORKER_H_
#define WORKER_H_
#include <iostream>
#include <string>
using std::string;

class Worker
{
private:
    string fullname;
    long id;

public:
    Worker() : fullname("default name"), id(0L) {}
    Worker(const string &fullname, long id) : fullname(fullname), id(id) {}
    // 纯虚函数的析构函数也必须要定义
    virtual ~Worker() = 0;
    virtual void Set();
    virtual void Show() const;
};

class Waiter : public Worker
{
private:
    int panache;

public:
    Waiter() : Worker(), panache(0) {}
    Waiter(const string &fullname, long id, int panache = 0) : Worker(fullname, id), panache(panache) {}
    Waiter(const Worker &w, int panache = 0) : Worker(w), panache(panache) {}
    void Set();
    void Show() const;
};

class Singer : public Worker
{
protected:
    enum
    {
        other,
        alto,
        contralto,
        soprano,
        bass,
        barithone,
        tenor
    };
    enum
    {
        Vtypes = 7
    };

private:
    static char *pv[Vtypes];
    int voice;

public:
    Singer() : Worker(), voice(other) {}
    Singer(const string &fullname, long id, int voice = other) : Worker(fullname, id), voice(voice) {}
    Singer(const Worker &w, int voice = other) : Worker(w), voice(voice) {}
    void Set();
    void Show() const;
};
#endif