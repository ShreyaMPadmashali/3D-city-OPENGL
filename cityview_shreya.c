#include<GL/glu.h>
#include<GL/glut.h>
#include<stdlib.h>

GLfloat T = 0;

void Spin()
{
    T = T + 0.1;
    if(T>360)
        T = 0;
    glutPostRedisplay();
}

void keyboard (unsigned char key, int x, int y)
{
    GLfloat colors[][3] = { { 0.0, 0.0, 0.0}, {0.0, 0.0, 1.0 } };
    static int back;
    switch (key) 
    {
    case 27: 
        exit(0);
    default:
        back ^= 1;
        glClearColor(colors[back][0], colors[back][1], colors[back][2], 1.0f);
        glutPostRedisplay();
    }
}

void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
         
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);

    
    glColorMaterial(GL_FRONT,GL_DIFFUSE);
    glEnable(GL_COLOR_MATERIAL);
    gluLookAt(0,1,3,0,0,0,0,1,0);
    glRotatef(T,0,1,0);
    
    
    
    glPushMatrix();
        glColor3f(0,1,0);
        glScalef(2,0.02,2);
        glutSolidCube(1);
    glPopMatrix();
    

   //1st building
    
    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glPushMatrix();
          glColor3f(0.5,0.5,0.5);
          glTranslatef(0.1,0.2,0.4);
          glScalef(0.25,0.36,0.25);
          glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();

    
    //2nd building
   
    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glPushMatrix();
         glColor3f(0.5,0.5,0.5);
         glTranslatef(.6,0.2,.6);
         glScalef(0.25,.4,0.25);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
    
   //3rd building
   
    glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();        
        glColor3f(0.5,0.5,0.5);
         glTranslatef(.5,0.2,-.5);
         glScalef(0.2,.5,0.2);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
   //4th building
   
    glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();        
        glColor3f(0.5,0.5,0.5);
         glTranslatef(.3,0.2,-.5);
         glScalef(0.27,.55,0.27);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
    //4th building top
    glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();        
        glColor3f(0.5,0.5,0.5);
         glTranslatef(.3,0.2,-.5);
         glScalef(0.1,.6,0.1);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
  

    //building 6 near road
    glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();        
        glColor3f(0.5,0.5,0.5);
         glTranslatef(-0.7,0.2,-0.7);
         glScalef(0.25,.47,0.25);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
    
    //5th building
        glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();        
        glColor3f(0.5,0.5,0.5);
         glTranslatef(-.7,0.2,.3);
         glScalef(0.24,.4,0.24);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
  
    
     
    //road 1
       glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();
        glColor3f(0,0,0);
         glTranslatef(-.4,0.01,0);
         glScalef(0.2,.04,2.0);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
    
    //road 2 small
    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glPushMatrix();
         glColor3f(0,0,0);
         glTranslatef(0.28,0,0);
         glScalef(1.4,.04,0.2);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
    
    //disable lighting effect
    glDisable(GL_LIGHTING);
    glDisable(GL_LIGHT0);
    
    
    //road 1 lines 
    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glPushAttrib(GL_ENABLE_BIT); 
    glLineStipple(8, 0xAAAA); 
    glEnable(GL_LINE_STIPPLE);
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex3f(-0.4,0.035,-1);
    glVertex3f(-0.4,0.035,1);
    glEnd();
    glPopAttrib();
    
    //road 2 lines
    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glPushAttrib(GL_ENABLE_BIT); 
    glLineStipple(8, 0xAAAA); 
    glEnable(GL_LINE_STIPPLE);
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex3f(1,0.035,0);
    glVertex3f(-0.4,0.035,0);
    glEnd();
    glPopAttrib();
    
    
    //tree
    glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();        
        glColor3f(0.64,0.164,0.164);
         glTranslatef(-.7,0.1,.8);
         glScalef(0.06,.2,0.06);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();

    //bush1
     glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();        
        glColor3f(0,0.5,0);
         glTranslatef(-.7,0.14,.8);
         glScalef(0.15,.035,0.15);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
    //bush2
     glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();        
        glColor3f(0,0.5,0);
         glTranslatef(-.7,0.16,.8);
         glScalef(0.15,.05,0.1);
         glutSolidCube(1);
    glPopMatrix();
    
    //bush3
    glPopAttrib();
      glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();        
        glColor3f(0,0.5,0);
         glTranslatef(-.7,0.18,.8);
         glScalef(0.16,.04,0.06);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
    //bush4
    glPopAttrib();
      glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();        
        glColor3f(0,0.5,0);
         glTranslatef(-.7,0.19,.8);
         glScalef(0.13,.05,0.14);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
    //bush5
    glPopAttrib();
      glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();        
        glColor3f(0,0.5,0);
         glTranslatef(-.7,0.20,.8);
         glScalef(0.09,.07,0.05);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();

    //tree2   
    glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();        
        glColor3f(0.64,0.164,0.164);
         glTranslatef(-.9,0.1,.7);
         glScalef(0.06,.2,0.06);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
    //bush1
     glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();        
        glColor3f(0,0.5,0);
         glTranslatef(-.9,0.3,.7);
         glScalef(0.06,.07,0.06);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
      //bush2
     glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();        
        glColor3f(0,0.5,0);
         glTranslatef(-.9,0.27,.7);
         glScalef(0.1,.07,0.1);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
        
     //bush3
     glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();        
        glColor3f(0,0.5,0);
         glTranslatef(-.9,0.24,.7);
         glScalef(0.15,.07,0.15);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
     //bush4
     glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();        
        glColor3f(0,0.5,0);
         glTranslatef(-.9,0.21,.7);
         glScalef(0.17,.07,0.17);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();

     //bush5
     glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();        
        glColor3f(0,0.5,0);
         glTranslatef(-.9,0.2,.7);
         glScalef(0.1,.09,0.1);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
    
    
    //tree3
    glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();        
        glColor3f(0.64,0.164,0.164);
         glTranslatef(-0.1,0.1,-.5);
         glScalef(0.06,.2,0.06);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
    //bush
    glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();        
        glColor3f(0,0.5,0);
         glTranslatef(-0.1,0.2,-0.5);
         glScalef(0.23,.05,0.22);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
       
    glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();        
        glColor3f(0,0.5,0);
         glTranslatef(-0.1,0.24,-0.5);
         glScalef(0.25,.05,0.25);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
         
    glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();        
        glColor3f(0,0.5,0);
         glTranslatef(-0.1,0.26,-0.5);
         glScalef(0.22,.05,0.22);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
    glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();        
        glColor3f(0,0.5,0);
         glTranslatef(-0.1,0.28,-0.5);
         glScalef(0.16,.05,0.16);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
    glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();        
        glColor3f(0,0.5,0);
         glTranslatef(-0.1,0.3,-0.5);
         glScalef(0.05,.026,0.05);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
    
    glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();        
        glColor3f(0,0.5,0);
         glTranslatef(-0.1,0.32,-0.5);
         glScalef(0.045,.026,0.045);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
    
    
    //buliding 6 near road window
      glPushAttrib(GL_ALL_ATTRIB_BITS);
    glPushMatrix();        
        glColor3f(0,0,0);
         glTranslatef(-0.7,0.35,-0.7);
         glScalef(0.27,.08,0.08);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glPushMatrix();        
        glColor3f(0,0,0);
         glTranslatef(-0.7,0.25,-0.7);
         glScalef(0.27,.08,0.08);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
       
    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glPushMatrix();        
        glColor3f(0,0,0);
         glTranslatef(-0.7,0.15,-0.7);
         glScalef(0.27,.08,0.08);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glPushMatrix();        
        glColor3f(0,0,0);
         glTranslatef(-0.7,0.35,-0.7);
         glScalef(0.08,.08,0.27);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glPushMatrix();        
        glColor3f(0,0,0);
         glTranslatef(-0.7,0.25,-0.7);
         glScalef(0.08,.08,0.27);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib(); 
    
    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glPushMatrix();        
        glColor3f(0,0,0);
         glTranslatef(-0.7,0.15,-0.7);
          glScalef(0.08,.08,0.27);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
    // building 5 near road
    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glPushMatrix();        
        glColor3f(0,0,0);
         glTranslatef(-0.7,0.35,0.3);
         glScalef(0.26,.08,0.08);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glPushMatrix();        
        glColor3f(0,0,0);
         glTranslatef(-0.7,0.25,0.3);
         glScalef(0.26,.08,0.08);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
       
    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glPushMatrix();        
        glColor3f(0,0,0);
         glTranslatef(-0.7,0.15,0.3);
         glScalef(0.26,.08,0.08);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glPushMatrix();        
        glColor3f(0,0,0);
         glTranslatef(-0.7,0.35,0.3);
         glScalef(0.08,.08,0.27);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glPushMatrix();        
        glColor3f(0,0,0);
         glTranslatef(-0.7,0.25,0.3);
         glScalef(0.08,.08,0.27);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib(); 
    
    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glPushMatrix();        
        glColor3f(0,0,0);
         glTranslatef(-0.7,0.15,0.3);
          glScalef(0.08,.08,0.27);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
    
    //building 2 window
    
    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glPushMatrix();
         glColor3f(0,0,0);
         glTranslatef(.6,0.35,.6);
         glScalef(0.26,.08,0.15);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glPushMatrix();
         glColor3f(0,0,0);
         glTranslatef(.6,0.35,.6);
         glScalef(0.15,.08,0.26);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib(); 
    
    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glPushMatrix();
         glColor3f(0,0,0);
         glTranslatef(.6,0.25,.6);
         glScalef(0.26,.08,0.15);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
     glPushAttrib(GL_ALL_ATTRIB_BITS);
    glPushMatrix();
         glColor3f(0,0,0);
         glTranslatef(.6,0.25,.6);
         glScalef(0.15,.08,0.26);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glPushMatrix();
         glColor3f(0,0,0);
         glTranslatef(.6,0.15,.6);
         glScalef(0.26,.08,0.15);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glPushMatrix();
         glColor3f(0,0,0);
         glTranslatef(.6,0.15,.6);
         glScalef(0.15,.08,0.26);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib(); 
    
    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glPushMatrix();
         glColor3f(0,0,0);
         glTranslatef(.6,0.05,.6);
         glScalef(0.26,.08,0.15);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
     glPushAttrib(GL_ALL_ATTRIB_BITS);
    glPushMatrix();
         glColor3f(0,0,0);
         glTranslatef(.6,0.05,.6);
         glScalef(0.15,.08,0.26);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
    
    
    
    //1st building window
    
    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glPushMatrix();
          glColor3f(0,0,0);
          glTranslatef(0.1,0.2,0.4);
          glScalef(0.26,0.08,0.1);
          glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glPushMatrix();
          glColor3f(0,0,0);
          glTranslatef(0.1,0.2,0.4);
          glScalef(0.1,0.08,0.26);
          glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
     glPushAttrib(GL_ALL_ATTRIB_BITS);
    glPushMatrix();
          glColor3f(0,0,0);
          glTranslatef(0.1,0.1,0.4);
          glScalef(0.26,0.08,0.1);
          glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glPushMatrix();
          glColor3f(0,0,0);
          glTranslatef(0.1,0.1,0.4);
          glScalef(0.1,0.08,0.26);
          glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
     glPushAttrib(GL_ALL_ATTRIB_BITS);
    glPushMatrix();
          glColor3f(0,0,0);
          glTranslatef(0.1,0.3,0.4);
          glScalef(0.26,0.08,0.1);
          glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glPushMatrix();
          glColor3f(0,0,0);
          glTranslatef(0.1,0.3,0.4);
          glScalef(0.1,0.08,0.26);
          glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
 
   //4th building window
  
     glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();        
        glColor3f(0,0,0);
         glTranslatef(.3,0.2,-.5);
         glScalef(0.28,.08,0.15);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
         glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();        
        glColor3f(0,0,0);
         glTranslatef(.3,0.4,-.5);
         glScalef(0.28,.08,0.15);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
         glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();        
        glColor3f(0,0,0);
         glTranslatef(.3,0.3,-.5);
         glScalef(0.28,.08,0.15);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
         glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();        
        glColor3f(0,0,0);
         glTranslatef(.3,0.1,-.5);
         glScalef(0.28,.08,0.15);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
    //3rd building window
    
    glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();        
        glColor3f(0,0,0);
         glTranslatef(.5,0.2,-.5);
         glScalef(0.1,.08,0.23);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
     glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();        
        glColor3f(0,0,0);
         glTranslatef(.5,0.3,-.5);
         glScalef(0.1,.08,0.23);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
     glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();        
        glColor3f(0,0,0);
         glTranslatef(.5,0.4,-.5);
         glScalef(0.1,.08,0.23);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
    
    
     glPushAttrib(GL_ALL_ATTRIB_BITS);
        glPushMatrix();        
        glColor3f(0,0,0);
         glTranslatef(.5,0.1,-.5);
         glScalef(0.1,.07,0.23);
         glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();
   
   
   
    
    glutSwapBuffers();
}

void MyInit()
{
    
    glEnable(GL_DEPTH_TEST);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-1,1,-1,1,1.8,10);
    glMatrixMode(GL_MODELVIEW);
  
  
}

int main(int argC,char *argV[])
{
    glutInit(&argC,argV);
    glutInitWindowSize(900,900);
    glutInitWindowPosition(100,100);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("city");
    MyInit();
    glutDisplayFunc(Draw);
    glutKeyboardFunc(keyboard);
    //glutMouseFunc(mouse);
    glutIdleFunc(Spin);
    //glutIdleFunc(SpinCube);
    glutMainLoop();
    return 0;
}

