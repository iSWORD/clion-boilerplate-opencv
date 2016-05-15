#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char **argv) {

    if (argc != 2) {
        printf("Usage: %s <path-to-image>\n", argv[0]);
        return 0;
    }

    String filename = argv[1];
    imshow("Hello World", imread(filename));

    while (1) if (waitKey(30) >= 0) return 0;
}