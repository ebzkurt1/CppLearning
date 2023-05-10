
## Build Steps
 Building a project with the opencv required some addtional steps in the project build. First off, you need to have
 opencv installed. While building the project with the `g++` you need to include the opencv libraries.

 ```shell
 g++ reading_an_image.cpp -o readimage -I/usr/local/include/opencv4 -lopencv_core -lopencv_highgui -lopencv_imgproc -lopencv_imgcodecs
 ```

### Notes
I had to re-build the opencv with `libgtk-2.0-dev` so that some of the functions have worked. After re-building the code worked without any errors.

