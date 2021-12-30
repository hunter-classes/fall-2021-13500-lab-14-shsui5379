#include <iostream>
#include "MyVector.h"

int main()
{
   std::cout << "Making an empty vector\n";

   MyVector<int> v;

   std::cout << "Its size now: " << v.size() << std::endl;
   std::cout << "Its capacity now: " << v.capacity() << std::endl;
   std::cout << "Is it empty? " << v.empty() << std::endl;

   std::cout << "Lets fill it with ints from 0 to 4\n";

   for (int i = 0; i < 5; i++)
   {
      v.push_back(i);
   }

   std::cout << "Its size now: " << v.size() << std::endl;
   std::cout << "Its capacity now: " << v.capacity() << std::endl;
   std::cout << "Is it empty? " << v.empty() << std::endl;
   std::cout << "It contains: " << v[0] << ", " << v[1] << ", " << v[2] << ", " << v[3] << ", " << v[4] << std::endl;

   std::cout << "Lets modify the element at index 1 to be 100\n";

   v[1] = 100;

   std::cout << "It contains: " << v[0] << ", " << v[1] << ", " << v[2] << ", " << v[3] << ", " << v[4] << std::endl;

   std::cout << "Lets remove the last element\n";

   v.pop_back();

   std::cout << "Its size now: " << v.size() << std::endl;
   std::cout << "It contains: " << v[0] << ", " << v[1] << ", " << v[2] << ", " << v[3] << std::endl;

   std::cout << "Lets remove the element at index 2\n";

   v.pop_back(2);

   std::cout << "Its size now: " << v.size() << std::endl;
   std::cout << "It contains: " << v[0] << ", " << v[1] << ", " << v[2] << std::endl;

   std::cout << "Lets clear the whole vector\n";

   v.clear();

   std::cout << "Is it empty? " << v.empty() << std::endl;

   return 0;
}
