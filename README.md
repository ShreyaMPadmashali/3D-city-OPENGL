# 3D-city-view

It’s a Scenario base 3D project using OpenGL. A City scenario with apartments, buildings, road, trees. 
Additionally, the background light will change from day mode to night mode.
The software used in this project is CodeBlocks and C programming language with libraries 
offered that will be used to achieve the required results. The user interface design will be
simple window with a 3D view of city.

Sample output:
<img src="https://github.com/ShreyaMPadmashali/3D-city-view/blob/main/output-screenshot/s2.png" width="500" height="500">
<img src="https://github.com/ShreyaMPadmashali/3D-city-view/blob/main/output-screenshot/s3.png" style="width=500px; length=500px;">
<img src="https://github.com/ShreyaMPadmashali/3D-city-view/blob/main/output-screenshot/s4.png" style="width=500px; length=500px;">
<img src="https://github.com/ShreyaMPadmashali/3D-city-view/blob/main/output-screenshot/s5.png" style="width=500px; length=500px;">
<img src="https://github.com/ShreyaMPadmashali/3D-city-view/blob/main/output-screenshot/s6.png" style="width=500px; length=500px;">

Various OpenGL functions are used to create the objects like apartments, trees and road.
The stages of implementation include:

Stage-1: Rotational view of 3D city
The rotation of the city is done along the axis and this is implemented using 
the Spin() function. It is designed such that only the side view is visible 
while rotation.

Stage-2: Apartments
The Apartments are created using OpenGL functions like glutSolidCube() 
which creates a solid cube. It is then translated and scaled using 
glTranslatef() and glScalef() functions. The colours are added using 
glColor3f() function.

Stage-3: Roads
For road glutSolidCube() is used and glLineStipple() is used to add the lines 
on the road. The colours are added using the glColor3f() function.

Stage-4: Trees
The trees are made using similar functions that are used by apartments like
glutSolidCube() to create the bark and the crown of the tree. The brown and 
green colours are added respectively using glColor3f() function.

Stage-5: Formulation of light reflection to predict day and night using 
mouse and keyboard handler
