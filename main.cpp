//Author: Riley Decker

#include<iostream>
#include<string>
#include "bitmap.h"
#include<vector>

using namespace std; 

  int main()
  {
    //Create Bitmap
    Bitmap image;
    Pixel rgb;
    //Create vector of vector of Pixels
    vector< vector<Pixel> > bmp;
    //Collect user input for file name and store
    string fileName;
    cout<<"Please input bmp file as 'fileName.bmp'"<<endl;
    cin>>fileName;
    //Open bmp file as Bitmap image
    image.open(fileName);
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
          //Modifying pixels based on rgb values
          bmp[r][c]=rgb;
          int avg=(rgb.red+rgb.green+rgb.blue)/3;
          rgb.red=avg;
          rgb.green=avg;
          rgb.blue=avg;
          rgb=bmp[r][c];
        }
      }
    //Save the modified image as bmp file
    image.fromPixelMatrix(bmp);
    image.save(fileName);
  }
  else
  {
    cout<<"Invalid file name, please try again."<<endl;
  }
  return 0;
}
