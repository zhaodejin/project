#include <boost/version.hpp>
#include <boost/config.hpp>
#include <iostream>
#include <fstream>
#include <vector>
#include <boost/progress.hpp>
#include <boost/date_time/gregorian/gregorian.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/smart_ptr.hpp>
#include <algorithm>

class abstract
{
public:
    virtual void f() = 0;
    virtual void g() = 0;

protected:
    virtual ~abstract() = default;
};
class impl : public abstract
{
public:
    impl() = default;
    virtual ~impl() = default;

public:
    virtual void f()
    {
        std::cout << "class impl f" << std::endl;
    }
    virtual void g()
    {
        std::cout << "class impl g" << std::endl;
    }
};

boost::shared_ptr<abstract> create()
{
    return boost::make_shared<impl>();
}
bool bool_test()
{
    auto p = boost::make_shared<int>(776);
    assert(p);
    if (p)
    {
        std::cout << "explict cast" << std::endl;
    }
    return static_cast<bool>(p);
}
int main()
{
    auto p = create();
    p->f();
    p->g();
    abstract *q = p.get();
    impl *t = (impl *)(q);
    bool_test();
    return 0;
}