#include<cv.h>
#include<stdio.h>
#include<highgui.h>
using namespace cv;
using namespace std;
int main(int argc,char* argv[])
{
  Mat image=imread("lena.jpg",-1);
	cout<<"the image has been read!"<<endl;
  imshow("image",image);
  waitKey();
	return 0;
}
