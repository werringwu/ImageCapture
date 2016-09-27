#include<cv.h>
#include<stdio.h>
#include<highgui.h>
using namespace cv;
using namespace std;
int main(int argc,char* argv[])
{
  Mat image=imread(argv[0],-1);
	cout<<"the image has been read!"<<endl;
	return 0;
}
