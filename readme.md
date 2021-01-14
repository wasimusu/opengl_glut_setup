### OpenGL setup with GLUT

We are setting up the following:
- OpenGL
- GLUT
- GLEW
- GLM (https://sourceforge.net/projects/ogl-math/)
OR https://github.com/g-truc/glm

Download the following:
- OpenGL is included with windows. No need to download.
- Download freeGLUT for MSVC or MINGW from https://www.transmissionzero.co.uk/software/freeglut-devel/
- Download the GLEW from https://sourceforge.net/projects/glew/
- Download the glm from https://sourceforge.net/projects/ogl-math/. Put it in the project director like so ```prj_dir/glm```.
For clarity, the subbranches looks like: ```project_dir/glm/cmake, project_dir/glm/glm, project_dir/glm/test```, etc.

The lib, include, and bin folder of freeGLUT belong should be pasted in the MINGW directory. It also has the same structure.
So basically lib of freeGLUT and lib of MINGW get merged and so on.

The same goes for GLEW as well.


#### Installing OpenCV by building the OpenCV library
- It's simple to install the prebuilt binary. Simply download the binary from https://sourceforge.net/projects/opencvlibrary/files/opencv-win/
and install it. Extract it in ```C:/```. The final structure should look like the following: ```C:/opencv/build, C:\opencv\sources```
- Set up the environment path so that windows can find OpenCV. Depending on the installation you'll have files similar to the following:
    - C:\opencv\build\x64\vc14
    - C:\opencv\build\x64\vc15
    
If you have 32 bit system, you will see x84 instead. You need to add these to the environment variables. So that the libraries are discoverable by the compiler.

You might have multiple versions of MinGW installed.
While the CMAKE compiles and builds your program you need to make sure that uses MinGW-64

#### Thread setup works if you comment out everything else in the CMAKE.

#### Threads
OpenCV requires threads. Threads are quite complicated to get working on Windows.
They should not be that hard!

If you used MinGW on Windows and you cannot find threads, you 
need to open the MinGW Installation Manager and install search for "mingw32-pthreads-w32" packages and install them all.

The threads are properly supported by MinGW-64 so we will install MinGW-64 by downloading it from here.
https://mingw-w64.org/doku.php/download/mingw-builds

##### Note: Take your time to go through the CMake. It will save you lot of time.


#### References
- https://stackoverflow.com/questions/9460242/how-to-compile-glut-opengl-project-with-cmake-and-kdevelop-in-linux
- https://docs.opencv.org/master/d3/d52/tutorial_windows_install.html
- https://medium.com/@bhargav.chippada/how-to-setup-opengl-on-mingw-w64-in-windows-10-64-bits-b77f350cea7e