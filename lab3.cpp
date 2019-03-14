//Kenny Chhoeun
//Partner: Yash Bhure, Rigoberto Canales Maldonado
//Date: March 13, 2019
//Lab 3
//Calculate area of triangle from data from "triangle.dat"

#include <iostream>
#include "Triangle.h"
#include <fstream>// in order to input/output file
using namespace std;

short counter = 1;
float base;
float height;

float area()
{
   float area = 0.5*base*height;
   return area ;
}

float Triangle(float base, float height)  //definition of Triangle function
{
   cout <<"Triangle " << counter <<": b = "<< base <<", h = " << height << " area: " << area() << endl;
   counter++;
   return 0.0;
}

int main()
{
   ifstream inputFile;
   inputFile.open("triangles.dat");
   //open the input file

   if(inputFile.fail())
   {
      cout << "Input File\"triangles.dat\" not found\n";
      return -1;
   }
   else
   {
      while(inputFile >> base >> height)
      {
         Triangle(base, height);
      }
   }

   //Close the input File//
   inputFile.close();
}

