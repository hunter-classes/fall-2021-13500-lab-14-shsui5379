#include "MyVector.h"

/**
 * Initializes an empty MyVector
 * */
template <class T>
MyVector<T>::MyVector()
{
   size = 0;
   capcity = 0;
   array = nullptr;
}

/**
 * Destructs a MyVector
 * */
template <class T>
MyVector<T>::~MyVector()
{
   delete[] array;
}

/**
 * Resizes the MyVector to the specified number of elements.
 * 
 * @param __new_size  Number of elements the MyVector should be able to hold
 * */
template <class T>
void MyVector<T>::resize(std::size_t __new_size)
{
   T *new_array = new T[__new_size];

   for (int i = 0; i < size; i++)
   {
      new_array[i] = array[i];
   }

   delete[] array;
   array = new_array;
   capacity = __new_size;
}