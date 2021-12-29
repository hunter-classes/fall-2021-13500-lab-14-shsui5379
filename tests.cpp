#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "MyVector.h"

TEST_CASE("size, resize, capacity, push_back")
{
   MyVector<int> v;

   CHECK(v.size() == 0);
   CHECK(v.capacity() == 0);

   v.push_back(1);

   CHECK(v.size() == 1);
   CHECK(v.capacity() == 1);

   v.push_back(2);

   CHECK(v.size() == 2);
   CHECK(v.capacity() == 2);

   v.push_back(3);

   CHECK(v.size() == 3);
   CHECK(v.capacity() == 4);

   v.push_back(4);

   CHECK(v.size() == 4);
   CHECK(v.capacity() == 4);

   v.push_back(5);

   CHECK(v.size() == 5);
   CHECK(v.capacity() == 8);

   for (int i = 6; i <= 8; i++)
   {
      v.push_back(i);

      CHECK(v.size() == i);
      CHECK(v.capacity() == 8);
   }

   for (int i = 9; i < 16; i++)
   {
      v.push_back(i);

      CHECK(v.size() == i);
      CHECK(v.capacity() == 16);
   }
}

TEST_CASE("empty")
{
   MyVector<int> v;

   CHECK(v.empty() == true);

   v.push_back(1);

   CHECK(v.empty() == false);
}