/*
Resizing the 256-level gray image into a 64X image
using [the nearest neighbor interpolation], [the bilinear
interpolation], and [the bicubic interpolation],respectively

<!-------info---------------->
Student: 60247059s chen-lin-yu 
Date:2013/10/01
<!-------info---------------->
*/

#include "cv.h"
#include "highgui.h"
int scaleRate = 8;
void resizeInLinear(IplImage *sourceImage){
	IplImage* resizeImgLinear = cvCreateImage(cvSize(sourceImage->width * scaleRate, sourceImage->height *scaleRate), sourceImage->depth, sourceImage->nChannels);
	cvResize(sourceImage, resizeImgLinear, CV_INTER_LINEAR); //interpolation
	cvNamedWindow("Linear");
	cvShowImage("Linear", resizeImgLinear);
	
}
void resizeInNearest_neighbor(IplImage *sourceImage){
	IplImage* resizeImgNN = cvCreateImage(cvSize(sourceImage->width * scaleRate, sourceImage->height *scaleRate), sourceImage->depth, sourceImage->nChannels);
	cvResize(sourceImage, resizeImgNN, CV_INTER_NN); //interpolation
	cvNamedWindow("Nearest Neightbor");
	cvShowImage("Nearest Neightbor", resizeImgNN);

}
void resizeInCubic(IplImage *sourceImage){
	IplImage* resizeImgCubic = cvCreateImage(cvSize(sourceImage->width * scaleRate, sourceImage->height *scaleRate), sourceImage->depth, sourceImage->nChannels);
	cvResize(sourceImage, resizeImgCubic, CV_INTER_CUBIC);  //interpolation
	cvNamedWindow("Cubic");
	cvShowImage("Cubic", resizeImgCubic);

}
int main()
{    
	// Load input image
	IplImage* sourceImage = cvLoadImage("test.jpg",CV_LOAD_IMAGE_GRAYSCALE);
	// Resize method =>interpolation
	resizeInLinear(sourceImage);
	resizeInNearest_neighbor(sourceImage);
	resizeInCubic(sourceImage);
	// Wait for user input
	cvWaitKey(0);
	// Destroy windows   Release memory
	// cvDestroyWindow("Source");
	// cvReleaseImage(&sourceImage);
     
    return 0;
}