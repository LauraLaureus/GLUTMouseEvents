//
//  main.c
//  GLUTMouseEvents
//
//  Created by Laura del Pino Díaz on 17/2/16.
//  Copyright © 2016 Laura del Pino Díaz. All rights reserved.
//

#include <stdio.h>
#include <GLUT/glut.h>

float red = 1.0, green = 1.0, blue = 10.0;
int win1, win2;


void Init1(){
    glClearColor(1.0, 0.0, 0.0, 0.0);
    
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0f, 1.0f, -1.0f, 1.0f, 1.0f, 0.0f);
}

void Init2(){
    glClearColor(0.0, 0.0, 1.0, 0.0);
    
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0f, 1.0f, -1.0f, 1.0f, 1.0f, 0.0f);
}

void Display1(){
    glClear(GL_COLOR_BUFFER_BIT); //fondo negro
    glFlush();
}

void Display2(){
    glClear(GL_COLOR_BUFFER_BIT); //fondo negro
    glFlush();
}

void MouseVentana1(int button, int state, int x, int y){
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    printf("Ventana1, boton izquierdo presionado\n");
}
void MouseVentana2(int button, int state, int x, int y){
    if (button == GLUT_RIGHT_BUTTON && state == GLUT_UP)
    printf("Ventana2, boton derecho liberado\n");
}

int main(int argc, char *argv[]){
    glutInit(&argc, argv);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(300, 300);
    glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE);
    
    win1 = glutCreateWindow("OpenGL Practica 2_2 window 1 Laura del Pino Díaz");
    Init1();
    glutDisplayFunc(Display1); // define la funcion de rendering
    glutMouseFunc(MouseVentana1);
    
    win1 = glutCreateWindow("OpenGL Practica 2_2 window 1 Laura del Pino Díaz");
    Init2();
    glutDisplayFunc(Display2); // define la funcion de rendering
    glutMouseFunc(MouseVentana2);
    
    glutMainLoop();
    
    return 0;
}
