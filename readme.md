### OpenGL setup with GLUT

The three files for glut
* glut.h – This is the file you’ll have to include in your source code. The common place to put this file is in the gl folder which should be inside the include folder of your system.
* Platform specific files:
if you build them from source, you can use them on any platform otherwise they are platform specific.    
    * glut32.lib (Windows version) – This file must be linked to your application so make sure to put it your lib folder.
    * glut32.dll (Windows) – You could place the dll file in your exe’s folder.

Download the freeGLUT for MSVC or MINGW from https://www.transmissionzero.co.uk/software/freeglut-devel/

The lib, dll and bin folder of freeGLUT belong should be pasted in the MINGW directory. It also has the same structure.
So basically lib of freeGLUT and lib of MINGW get merged and so on.