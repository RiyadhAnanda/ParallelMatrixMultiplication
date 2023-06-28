//Riyadh Ananda
//HW 2
//Parallel Programming

#include <iostream>
#include <stdio.h>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int i = 0;
  int j = 0;
  int n = 10;
  int k = 0;
  int r = 0;
  double sum = 0.0;
  vector<vector <int>> matrix_a(10, vector<int>(10, 0));
  vector<vector <int>> matrix_b(10, vector<int>(10, 0));
  vector<vector <int>> matrix_c(10, vector<int>(10, 0));
  

  
    //IJK Test
    clock_t start = clock();
    long long time = 0;
    for (int i = 0; i < matrix_a.size();i++)
     {

       for (int j = 0; j < 10; j++)
       {
         cout << matrix_a.at(i).at(j) << "";
       }
         cout << endl;
     }
   for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
        {
          sum = 0;

          for (int k = 0; k < n; k++)
            {
               sum += matrix_a[i][j] * matrix_b[k][j];
         }

          matrix_c[i][j] = sum;
        }
    }
   std::cout << endl;
   std::cout <<"Matrix Size: ";
   std::cout << matrix_c.size() << endl;
   double elapsedTime_ijk=static_cast<double>(clock()-start)/ CLOCKS_PER_SEC;
  

   //JIK Test
   for (int i = 0; i < matrix_a.size();i++)
   {

     for (int j = 0; j < 10; j++)
     {
       cout << matrix_a.at(i).at(j) << "";
     }
      cout << endl;
   } 
   for (int j = 0; j < n; j++)
   {
     for (int i = 0; i < n; i++)
     {
       sum = 0;

       for (int k = 0; k < n; k++)
       {
         sum += matrix_a[i][j] * matrix_b[k][j];
       }

       matrix_c[i][j] = sum;
     }
   }
   std::cout << endl;
   std::cout << "Matrix Size: ";
   std::cout << matrix_c.size() << endl;
   double elapsedTime_jik = static_cast<double>(clock() - elapsedTime_ijk) / CLOCKS_PER_SEC;
  


   //KIJ Test
   for (int i = 0; i < matrix_a.size();i++)
   {

     for (int j = 0; j < 10; j++)
     {
       cout << matrix_a.at(i).at(j) << "";
     }
     cout << endl;
   }
   for (int k = 0; k < n; k++)
   {
     for (int i = 0; i < n; i++)
     {
        matrix_a[i][k]= r;

       for (int j = 0; j < n; j++)
       {
         matrix_c[i][j] += r* matrix_b[k][j];
       }
     }
   }
   std::cout << endl;
   std::cout << "Matrix Size: ";
   std::cout << matrix_c.size() << endl;
   double elapsedTime_kij = static_cast<double>(clock() - elapsedTime_jik) / CLOCKS_PER_SEC;
 

   //IKJ Test
   for (int i = 0; i < matrix_a.size();i++)
   {

     for (int j = 0; j < 10; j++)
     {
       cout << matrix_a.at(i).at(j) << "";
     }
     cout << endl;
   }
   for (int i = 0; i < n; i++)
   {
     for (int k = 0; k < n; k++)
     {
       matrix_a[i][k] = r;

       for (int j = 0; j < n; j++)
       {
         matrix_c[i][j] += r * matrix_b[k][j];
       }
     }
   }
   std::cout << endl;
   std::cout << "Matrix Size: ";
   std::cout << matrix_c.size() << endl;
   double elapsedTime_ikj = static_cast<double>(clock() - elapsedTime_kij) / CLOCKS_PER_SEC;
 


  //JKI Test
  for (int i = 0; i < matrix_a.size();i++)
  {

    for (int j = 0; j < 10; j++)
    {
      cout << matrix_a.at(i).at(j) << "";
    }
    cout << endl;
  }
  for (int j = 0; j < n; j++)
  {
    for (int k = 0; k < n; k++)
    {
      matrix_b[k][j] = r;

      for (int i = 0; i < n; i++)
      {
        matrix_c[i][j] += r * matrix_a[i][k];
      }
    }
  }
  std::cout << endl;
  std::cout << "Matrix Size: ";
  std::cout << matrix_c.size() << endl;
  double elapsedTime_jki = static_cast<double>(clock() - elapsedTime_ikj) / CLOCKS_PER_SEC;



  //KJI Test
  for (int i = 0; i < matrix_a.size();i++)
  {

    for (int j = 0; j < 10; j++)
    {
      cout << matrix_a.at(i).at(j) << "";
    }
    cout << endl;
  }
  for (int k = 0; k < n; k++)
  {
    for (int j = 0; j < n; j++)
    {
      matrix_b[k][j] = r;

      for (int i = 0; i < n; i++)
      {
        matrix_c[i][j] += r * matrix_a[i][k];
      }
    }
  }
  std::cout << endl;
  std::cout << "Matrix Size: ";
  std::cout << matrix_c.size() << endl;
  double elapsedTime_kji = static_cast<double>(clock() - elapsedTime_jki) / CLOCKS_PER_SEC;
  std::cout << "Time taken by IJK: ";
  std::cout << elapsedTime_ijk << std::endl;
  std::cout << "Time taken by JIK: ";
  std::cout << elapsedTime_jik << std::endl;
  std::cout << "Time taken by KIJ: ";
  std::cout << elapsedTime_kij << std::endl;
  std::cout << "Time taken by IKJ: ";
  std::cout << elapsedTime_ikj << std::endl;
  std::cout << "Time taken by JKI: ";
  std::cout << elapsedTime_jki << std::endl;
  std::cout << "Time taken by KJI: ";
  std::cout << elapsedTime_kji << std::endl;
  return 0;
}