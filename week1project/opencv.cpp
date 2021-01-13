include<opencv2/opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main()
{
	Mat img = imread("tree.jpg");
	if (img.empty())
	{
		cout << "eroor no image found";
		return -1;
	}
	namedWindow("tree", WINDOW_AUTOSIZE);
	imshow("original tree image", img);
	Mat img2 = imread("tree.jpg", IMREAD_GRAYSCALE);
	imshow("Grayscale tree image", img2);
	waitKey();
	return 0;
}