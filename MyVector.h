#pragma once

#include <iostream>

template <class T>
class MyVector
{
private:
   T *array;
   std::size_t array_size;
   std::size_t array_capacity;

public:
   MyVector();
   ~MyVector();
   void resize(std::size_t new_size);
   std::size_t size() const;
   std::size_t capacity() const;
   bool empty() const;
   void push_back(T item);
   void pop_back(int n);
   void pop_back();
   void clear();
   T &operator[](int i);
};

#include "MyVector.cxx"