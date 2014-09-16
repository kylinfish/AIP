/*
1.Reading and showing a color image
2.Transferring the color image to a gray image

<!-------info---------------->
Student: 60247059s chen-lin-yu 
Date:2013/10/01
<!-------info---------------->
*/

#include <opencv2\opencv.hpp>  
#include<iostream>
using namespace cv;
void main()
{
	IplImage *src_original,*src_grayLevel; 

	src_original = cvLoadImage("lena.jpg"); 
	cvShowImage("Original Image",src_original);

	src_grayLevel = cvLoadImage("lena.jpg",CV_LOAD_IMAGE_GRAYSCALE); 
	cvShowImage("GrayLevel Image",src_grayLevel);
	

	cvWaitKey(0);
	cvReleaseImage(&src_original);
	cvReleaseImage(&src_grayLevel);
}