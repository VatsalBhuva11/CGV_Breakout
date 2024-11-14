//
//  MyObjects.h
//  dtiBreakout
//
//  Created by Group 3 on 9/23/14.
//  dti
//

#ifndef dtiBreakout_MyObjects_h
#define dtiBreakout_MyObjects_h

// Ball
struct Ball
{
    GLfloat xpos, ypos;
    GLfloat xvel, yvel;
    GLfloat radius;
    GLfloat r, g, b;
};

// Paddle
struct Paddle
{
    GLfloat xpos, ypos;
    GLfloat width, height;
    GLfloat r, g, b;
};

// Brick
struct Brick
{
    GLfloat xpos, ypos;
    GLfloat width, height;
    GLfloat r, g, b;
    GLint health;
    GLint value;
};

#endif
