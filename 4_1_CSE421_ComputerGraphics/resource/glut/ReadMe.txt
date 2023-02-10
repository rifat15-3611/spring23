<< Step to install OpenGL >>
............................

1. Download and Install CodeBlocks 10.05 MinGW

2. Download Glut 3.7.6 file


<< Create Environment >>
........................

1. Copy glut32.dll to C:\Windows\System32 (for 32-bit OS)

2. Copy glut32.dll to C:\Windows\SysWOW64 (for 64-bit OS)

3. Copy glut32.lib to C:\Program Files(x86)\CodeBlocks\MinGW\lib

4. Copy glut.h to C:\Program Files(x86)\CodeBlocks\MinGW\include\GL


<< CodeBlocks Build Option >>
.............................

build option > addlinker > find glut.lib again
if any problem to build just copy glut.lib to your project/obj/debug
