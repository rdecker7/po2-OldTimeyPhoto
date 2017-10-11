//Author: Riley Decker

#include<iostream>
#include<string>
#include "bitmap.h"
#include<vector>

using namespace std; 
{
 //Create Bitmap
 Bitmap image;
 //Create vector of vector of Pixels
 vector< vector<Pixel> > bmp;
 //Collect user input for file name and store
 string fname;
 cout<<"Please input bmp file as 'fileName.bmp'"<<endl;
 cin>>fname;
 //Open bmp file as Bitmap image
 image.open("fname")
 //Check if image is valid
 bool validBmp=image.isImage();
 //Loop if image was valid
 if (validBmp==1)
 {
   bmp=image.toPixelMatrix();
   //Create loop to go through each row of pixels and modify them
   for(int r=0;r<bmp.size();r++)
   {
     for(int c=0;c<bmp[r].size();c++)
     {
       bmp[r][c]=rgb;
       //Loop to modify pixels depending on their color
       if(rgb.red>120 && rgb.green>75 && rgb.blue>10)
       {
         rgb.red=120;
         rgb.green=105;
         rgb.blue=80
       }
       
     }
   }
 }
//Save the modified image as bmp file

 return 0;
}
