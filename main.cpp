#include <opencv/cv.h>
#include <iostream>
#include <stdio.h>
#include <opencv/cxcore.hpp>
#include "/Users/andrewadams/opencv/modules/highgui/include/opencv2/highgui.hpp"
#include </Users/andrewadams/opencv/modules/core/include/opencv2/core.hpp>
#include <opencv/cv.h>
#include </Users/andrewadams/opencv/modules/imgproc/include/opencv2/imgproc.hpp>
#include </Users/andrewadams/opencv/modules/imgproc/include/opencv2/imgproc/imgproc_c.h>
#include </Users/andrewadams/opencv/modules/imgcodecs/include/opencv2/imgcodecs/imgcodecs_c.h>
#include <thread>
#include </Users/andrewadams/Desktop/Pinto/sloth_comp_read.cpp/cpp-sockets/net/serversocket.hpp>


using namespace cv;
using namespace std;


int main( int argc, char** argv)
{
    
    //int cntr = 1;
    //std::string i = "/Users/andrewadams/Desktop/pinto/sloth_comp_read.cpp/sloth_comp_read.cpp/sloths/images (" + std::to_string(++cntr) + ").jpg";
    //this calls the images in one string, it's also possible to manually enter them from a vector.  in this case i went with manually reading and writing them one by one as the documentation asked, also it adds a reason for me to build the multithreading functionality.
    
    
    //grabs the image from the root file, it's also possible to just include your image directory
    
    Mat read_image;
    read_image = imread("/Users/andrewadams/Desktop/pinto/sloth_comp_read.cpp/sloth_comp_read.cpp/sloths/images.jpg", cv::IMREAD_COLOR);
    read_image = imread("/Users/andrewadams/Desktop/pinto/sloth_comp_read.cpp/sloth_comp_read.cpp/sloths/images (1).jpg", cv::IMREAD_COLOR);
    read_image = imread("/Users/andrewadams/Desktop/pinto/sloth_comp_read.cpp/sloth_comp_read.cpp/sloths/images (2).jpg", cv::IMREAD_COLOR);
    read_image = imread("/Users/andrewadams/Desktop/pinto/sloth_comp_read.cpp/sloth_comp_read.cpp/sloths/images (3).jpg", cv::IMREAD_COLOR);
    
    // Call the source and apply your changes to the image using OpenCV (i.e. greyscale, tracking, rotating etc etc)
    
    
    if(! read_image.data )   // Check for invalid input
    {
        cout <<  "No sloths in these woods" << std::endl ;
        return -1;
    }
    
    Mat compress;
    int p[3];  //writes out parameters within the compress Mat
    p[0] = IMWRITE_JPEG_QUALITY;
    p[1] = 50; //decide on quality ranging from 0-->100
    compress = imread("/Users/andrewadams/Desktop/pinto/sloth_comp_read.cpp/sloth_comp_read.cpp/sloths/images.jpg", p[1]);
    
    Mat compress1;
    int p1[3];  //writes out parameters within the compress Mat
    p1[0] = IMWRITE_JPEG_QUALITY;
    p1[1] = 50; //decide on quality ranging from 0-->100
    compress1 = imread("/Users/andrewadams/Desktop/pinto/sloth_comp_read.cpp/sloth_comp_read.cpp/sloths/images (1).jpg", p1[1]);
    
    Mat compress2;
    int p2[3];  //writes out parameters within the compress Mat
    p2[0] = IMWRITE_JPEG_QUALITY;
    p2[1] = 50; //decide on quality ranging from 0-->100
    compress2 = imread("/Users/andrewadams/Desktop/pinto/sloth_comp_read.cpp/sloth_comp_read.cpp/sloths/images (2).jpg", p2[1]);
    
    Mat compress3;
    int p3[3];  //writes out parameters within the compress Mat
    p3[0] = IMWRITE_JPEG_QUALITY;
    p3[1] = 50; //decide on quality ranging from 0-->100
    compress3 = imread("/Users/andrewadams/Desktop/pinto/sloth_comp_read.cpp/sloth_comp_read.cpp/sloths/images (3).jpg", p3[1]);
    
    
    //apply the changes you made to your images quality by calling the char const up above.
    
    //std::string out = ("/Users/andrewadams/Desktop/pinto/sloth_comp_read.cpp/sloth_comp_read.cpp/squishedsloths/out" + std::to_string(++cntr) + ".jpg");
    //line 27
    
    Mat save;
    save = imwrite("/Users/andrewadams/Desktop/pinto/sloth_comp_read.cpp/sloth_comp_read.cpp/squishedsloths/out.jpg", compress);
    save = imwrite("/Users/andrewadams/Desktop/pinto/sloth_comp_read.cpp/sloth_comp_read.cpp/squishedsloths/out1.jpg", compress1);
    save = imwrite("/Users/andrewadams/Desktop/pinto/sloth_comp_read.cpp/sloth_comp_read.cpp/squishedsloths/out2.jpg", compress2);
    save = imwrite("/Users/andrewadams/Desktop/pinto/sloth_comp_read.cpp/sloth_comp_read.cpp/squishedsloths/out3.jpg", compress3);
    //saves the compression above


}

