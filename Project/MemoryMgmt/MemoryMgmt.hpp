#pragma once
#include <string>

namespace MemoryMgmt
{
class StrVec
{
public:
    StrVec():elements(nullptr), first_free(nullptr), cap(nullptr){}
    StrVec(const StrVec&);
    StrVec &operator=(const StrVec&);
    ~StrVec();

    void push_back(const std::string&);
    size_t size() const { return first_free - elements; }
    size_t capacity() const { return cap - elements; }
    std::string *begin() const { return elements; }
    std::string *end() const { return first_free; }

private:
    std::string *cap;
    std::string *first_free;
    std::string *elements;

    void reallocate();
    void free();
    std::pair<std::string*, std::string*> alloc_n_copy (const std::string*, const std::string*);
    void chk_n_alloc()
    {if (size() == capacity()) reallocate();}
    static std::allocator<std::string> alloc;
};
}