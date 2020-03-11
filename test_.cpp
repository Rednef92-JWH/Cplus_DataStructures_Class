//
//  main.cpp
//  test_xCode
//
//  Created by Root_ on 2/25/20.
//  Copyright © 2020 Root_. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

void compareCstrings(const char str1[], const char str2[], int &count);

int main(int argc, const char *argv[])
{

   int count = 0;
   //compareCstrings("tacocat", "TACOCAT", count);
   compareCstrings("Harry", "Malfoy", count);
   //compareCstrings("SMC", "SBCC", count);

   cout << "the answer is : " << count << endl;

   return 0;
}

void compareCstrings(const char str1[], const char str2[], int &count)
{
   using namespace std;
   // &count = 0;
   int index = 0;
   while (str1[index] != '\0' || str2[index] != '\0') // Okay
   {
      if (str1[index] == str2[index])
      {
         count++;
         cout << "str1 = " << str1[index] << " number of index :  " << index << " str2 = " << str2[index]
              << " number of index :  " << index << endl;
         index++;
      }
      else
      {
         index++;
      }
   }
}
