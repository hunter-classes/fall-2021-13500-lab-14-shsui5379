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
 * @param new_size  Number of elements the MyVector should be able to hold
 * */
template <class T>
void MyVector<T>::resize(std::size_t new_size)
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

/**
 * Returns the number of elements in the MyVector
 * 
 * @returns  The number of elements in the MyVector
 * */
template <class T>
std::size_t MyVector<T>::size() const
{
   return array_size;
}

/**
 * Returns the total number of elements that the MyVector can
 * hold before needing to allocate more memory.
 * 
 * @returns  The total number of elements that the MyVector can currently hold
 * */
template <class T>
std::size_t MyVector<T>::capacity() const
{
   return array_capacity;
}