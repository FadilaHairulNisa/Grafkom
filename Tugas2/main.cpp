#include <windows.h>
#include <GL/glut.h>

void userdraw(){
    static int tick=0;

//     BUAT POLA TITIK DENGAN WARNA BERBEDA
    glColor3f(1.0,0.0,0.0);     //warna merah
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(11,16);
    glEnd();

    glColor3f(0.0,1.0,0.0);     //warna hijau
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(12,15);
    glEnd();

    glColor3f(0.0,1.0,0.0);     //warna hijau
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(13,14);
    glEnd();

    glColor3f(1.0,0.0,0.0);     //warna merah
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(14,13);
    glEnd();


    glColor3f(1.0,1.0,0.0);     //warna kuning
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(13,12);
    glEnd();

    glColor3f(1.0,1.0,0.0);     //kuning
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(12,11);
    glEnd();

    glColor3f(0.0,0.0,1.0);     //biru
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(11,10);
    glEnd();


    glColor3f(1.0,0.0,1.0);     //ungu
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(10,11);
    glEnd();

    glColor3f(1.0,0.0,1.0);     //ungu
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(9,12);
    glEnd();

    glColor3f(0.0,0.0,1.0);     //biru
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(8,13);
    glEnd();


    glColor3f(1.0,1.0,0.0);     //warna kuning
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(9,14);
    glEnd();

    glColor3f(1.0,1.0,0.0);     //warna kuning
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(10,15);
    glEnd();

    glColor3f(0.0,1.0,1.0);
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(10,13);
    glEnd();

    glColor3f(0.0,1.0,1.0);
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(12,13);
    glEnd();

    glColor3f(0.0,1.0,1.0);
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(11,14);
    glEnd();

    glColor3f(0.0,1.0,1.0);
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(11,12);
    glEnd();

}

void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    userdraw();
    glutSwapBuffers();
}
int main(int argc, char **argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(500,500);
    glutCreateWindow("E1E120066_FADILAH HAIRUL NISA");
    glClearColor(0,0,0,0);
    gluOrtho2D(0.,24.,0.,24.);
    glutIdleFunc(display);
    glutDisplayFunc(display);
    glutMainLoop();
return 0;
}
