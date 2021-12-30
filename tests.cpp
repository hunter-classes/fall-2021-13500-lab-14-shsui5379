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

TEST_CASE("empty and clear")
{
   MyVector<double> v;

   CHECK(v.empty() == true);

   v.push_back(1.5);
   CHECK(v.empty() == false);

   v.clear();
   CHECK(v.empty() == true);
}

TEST_CASE("pop_back and size")
{
   MyVector<int> v;

   for (int i = 0; i < 5; i++)
   {
      v.push_back(i);
   }

   CHECK(v.size() == 5);

   v.pop_back();
   CHECK(v.size() == 4);

   v.pop_back(2);
   CHECK(v.size() == 3);

   v.pop_back(10);
   CHECK(v.size() == 2);
}

TEST_CASE("[] operator")
{
   MyVector<int> v;

   for (int i = 0; i < 5; i++)
   {
      v.push_back(i);
   }

   CHECK(v[2] == 2);

   v[3] = 100;
   CHECK(v[3] == 100);
}

TEST_CASE("[] and push_back")
{
   MyVector<std::string> v;

   v.push_back("a");
   v.push_back("b");

   CHECK(v[0] == "a");
   CHECK(v[1] == "b");
}

TEST_CASE("[] and pop_back(n)")
{
   MyVector<int> v;

   for (int i = 0; i < 4; i++)
   {
      v.push_back(i);
   }

   v.pop_back(1);

   CHECK(v[0] == 0);
   CHECK(v[1] == 2);
   CHECK(v[2] == 3);
}