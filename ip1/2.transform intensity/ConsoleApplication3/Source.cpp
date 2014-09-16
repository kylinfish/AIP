/*
Transforming the 256-level gray image into 128, 64,and 32 intensity level

<!-------info---------------->
Student: 60247059s chen-lin-yu 
Date:2013/10/01
<!-------info---------------->
*/

#include <cv.h>
#include <highgui.h>
 
uchar B[1000][1000];
uchar G[1000][1000];
uchar R[1000][1000];
uchar Gray[1000][1000];
void intensityScale(int scale){
	IplImage *Image1;
    Image1 = cvLoadImage("lena.jpg",1);
    /* Load Image RGB Values */
    for(int i=0;i<Image1->height;i++){
        for(int j=0;j<Image1->widthStep;j=j+3){
            B[i][(int)(j/3)]=Image1->imageData[i*Image1->widthStep+j];
            G[i][(int)(j/3)]=Image1->imageData[i*Image1->widthStep+j+1];
            R[i][(int)(j/3)]=Image1->imageData[i*Image1->widthStep+j+2];
        }
    }
    /* Implement Algorithms */
    for(int i=0;i<Image1->height;i++){
        for(int j=0;j<Image1->width;j++){
            Gray[i][j]=(uchar)(0.299*R[i][j]/scale + 0.587*G[i][j] /scale + 0.114*B[i][j]/scale)*scale;
            R[i][j]=Gray[i][j];
            G[i][j]=Gray[i][j];
            B[i][j]=Gray[i][j];
        }
    }
    /* Save Image RGB Values */
    for(int i=0;i<Image1->height;i++){
        for(int j=0;j<Image1->widthStep;j=j+3){
            Image1->imageData[i*Image1->widthStep+j]=B[i][(int)(j/3)];
            Image1->imageData[i*Image1->widthStep+j+1]=G[i][(int)(j/3)];
            Image1->imageData[i*Image1->widthStep+j+2]=R[i][(int)(j/3)];
        }
    }
 
	cvNamedWindow("Gray Level"+scale,1);
    cvShowImage("Gray Level"+scale,Image1);

   //cvReleaseImage(&Image1);
   //cvDestroyWindow("Gray Level");

}
int main()
{
	intensityScale(128);
	intensityScale(64);
	intensityScale(32);
	cvWaitKey(0);
    return EXIT_SUCCESS;
}