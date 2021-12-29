#include "MyVector.h"

/**
 * Initializes an empty MyVector
 * */
template <class T>
MyVector<T>::MyVector()
{
   array_size = 0;
   array_capacity = 0;
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
   T *new_array = new T[new_size];

   for (int i = 0; i < array_size; i++)
   {
      new_array[i] = array[i];
   }

   delete[] array;
   array = new_array;
   array_capacity = new_size;
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

/**
 * Add data to the end of the MyVector.
 * 
 * @param item  Data to be added
 * */
template <class T>
void MyVector<T>::push_back(T item)
{
   //if the MyVector is currently at-capacity, then allocate it more memory
   if (array_size == array_capacity)
   {
      (array_capacity == 0) ? array_capacity = 1 : array_capacity *= 2;
      resize(array_capacity);
   }

   array[array_size] = item;
   array_size++;
}

/**
 * Returns true if the MyVector is empty
 * 
 * @returns  True if the MyVector is empty
 * */
template <class T>
bool MyVector<T>::empty() const
{
   return array_size == 0;
}

/**
 * Removes the nth element
 * 
 * @param n  The index of the element to remove
 * */
template <class T>
void MyVector<T>::pop_back(int n)
{
   for (int i = n; i < array_size - 2; i++)
   {
      array[i] = array[i + 1];
   }

   array_size--;
}