#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <omp.h>

using namespace cv;

int main(int argc, char** argv) {
    
    //create a gui window:
    namedWindow("Output",1);
    
    //initialize a 120X350 matrix of black pixels:
    Mat output = Mat::zeros( 120, 350, CV_8UC3 );
    
    //write text on the matrix:
    putText(output,
            "Hello World :)",
            cv::Point(15,70),
            FONT_HERSHEY_PLAIN,
            3,
            cv::Scalar(0,255,0),
            4);
    
    //display the image:
    imshow("Output", output);
    //imwrite("test.png", output);
    
    //wait for the user to press any key:
    waitKey(0);
    int nthreads, tid;

/* Fork a team of threads giving them their own copies of variables */
#pragma omp parallel private(nthreads, tid)
  {

  /* Obtain thread number */
  tid = omp_get_thread_num();
  printf("Hello World from thread = %d\n", tid);

  /* Only master thread does this */
  if (tid == 0) 
    {
    nthreads = omp_get_num_threads();
    printf("Number of threads = %d\n", nthreads);
    }

  }  /* All threads join master thread and disband */
    return 0;

}
