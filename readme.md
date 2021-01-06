### OpenGL setup with GLUT

We are setting up the following:
- OpenGL
- GLUT
- GLEW
- GLM (https://sourceforge.net/projects/ogl-math/)
OR https://github.com/g-truc/glm

Download the following:
- OpenGL is included with windows. No need to download.
- Download the freeGLUT for MSVC or MINGW from https://www.transmissionzero.co.uk/software/freeglut-devel/
- Download the GLEW from https://sourceforge.net/projects/glew/
- Download the glm from https://sourceforge.net/projects/ogl-math/. Put it in the project director like so ```prj_dir/glm```.
For clarity, the subbranches looks like: ```project_dir/glm/cmake, project_dir/glm/glm, project_dir/glm/test```, etc.

The lib, dll and bin folder of freeGLUT belong should be pasted in the MINGW directory. It also has the same structure.
So basically lib of freeGLUT and lib of MINGW get merged and so on.

The same goes for GLEW as well.

##### Note: Take your time to go through the CMake. It will save you lot of time.


#### References
- https://stackoverflow.com/questions/9460242/how-to-compile-glut-opengl-project-with-cmake-and-kdevelop-in-linux