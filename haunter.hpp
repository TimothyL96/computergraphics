#ifndef RC_HAUNTER_HPP
#define RC_HAUNTER_HPP
#include "main.hpp"

namespace haunter{

    class ForceField
    {
            public:
            void draw();
    };

    class GrassField
    {
            public:
            void draw();
    };

    class Moon
    {
            public:
            void draw();
    };

    class HaunterFace
    {
        public:
            void drawLeftEyes();
            void drawRightEyes();
            void drawFace();
            void drawMouth();

    };

    class Haunter_Hand
    {
        public:
            void draw();
    };

    /*class MyBezierLine
    {
        public:
            MyBezierLine() { }
            ~MyBezierLine() { }
            void setup(const GLfloat* controlPoints,
            GLint uOrder);
            void draw(GLenum draw_mode = GL_LINE, //or GL_POINT
            GLint ures = 100);
            void drawControlPoints();

        private:
            GLint uorder;
            const GLfloat* controlpoints;
    };*/

    class MyBezierSurface
    {
        public:
                MyBezierSurface() { }
                ~MyBezierSurface() { }
                void setup(const GLfloat* controlPoints,
                GLint uOrder, GLint vOrder,
                const bool autonormal = false);
                void draw(GLenum draw_mode = GL_FILL, //or GL_LINE or GL_POINT
                GLint ures = 100,GLint vres = 100);
                void drawControlPoints();

            private:
                GLint uorder, vorder;
                const GLfloat* controlpoints;
    };

    class HauntedHouse
    {
        public :
            ForceField field;
            GrassField rumput;
            HaunterFace haunterFace;
            Haunter_Hand haunterHand;
            Moon moon;
            //MyBezierLine mybezierline;
            MyBezierSurface mybeziersurface;

        public:
            void draw(){
                field.draw();
                rumput.draw();
                moon.draw();
                haunterFace.drawLeftEyes();
                haunterFace.drawRightEyes();
                haunterFace.drawFace();
                //haunterFace.drawMouth();
                haunterHand.draw();
                init();
                glColor3f(1.0f, 1.0f, 0.0f);
                glColor3f(1,0.41,0.71);
                mybeziersurface.draw(GL_FILL); //or GL_LINE or GL_POINT
                glColor3f(1.0f, 1.0f, 1.0f);
                //mybeziersurface.drawControlPoints();

                init1();
                glColor3f(0.5,0.0,0.75);
                mybeziersurface.draw(GL_FILL); //or GL_LINE or GL_POINT
                glColor3f(1.0f, 1.0f, 1.0f);
                //mybeziersurface.drawControlPoints();

                init2();
                glColor3f(0.5,0.0,0.75);
                mybeziersurface.draw(GL_FILL); //or GL_LINE or GL_POINT
                glColor3f(1.0f, 1.0f, 1.0f);
                //mybeziersurface.drawControlPoints();

                init3();
                glColor3f(0.5,0.0,0.75);
                mybeziersurface.draw(GL_FILL); //or GL_LINE or GL_POINT
                glColor3f(1.0f, 1.0f, 1.0f);
                //mybeziersurface.drawControlPoints();

                init4();
                glColor3f(0.5,0.0,0.75);
                mybeziersurface.draw(GL_FILL); //or GL_LINE or GL_POINT
                glColor3f(1.0f, 1.0f, 1.0f);
                //mybeziersurface.drawControlPoints();

                //glColor3f(1.0f, 0.0f, 1.0f);
                //mybezierline.draw(GL_LINE); //or GL_POINT
                //glColor3f(0.0f, 1.0f, 1.0f);
                //mybezierline.drawControlPoints();
            }

            void init()
            {
              /*  static GLfloat controlpoints1[] =
                {
                    -15.0f, -10.0f, 5.0f,
                    -10.0f, -5.0f, 10.0f,
                    -5.0f, 0.0f, 10.0f,
                    0.0f, 5.0f,5.0f
                };
                mybezierline.setup(controlpoints1, 4);*/
                static GLfloat controlpoints2[] =
                {
                  //  -5.0f, 0.0f, 10.0f,
                  //  -8.0f, 10.0f, 10.0f,
                 //   8.0f, 10.0f, 10.0f,
                 //   5.0f, 0.0f, 10.0f,

                    -9.0f,-3.0f, 6.8f,
                    -6.0f, -4.0f, 13.15f,
                    6.0f, -4.0f, 13.15f,
                    9.0f,-3.0f, 6.8f,


                    -6.0f,-5.0f, 9.0f,
                    -6.0f, -8.0f, 9.9f,
                    6.0f, -8.0f, 9.9f,
                    6.0f,-5.0f, 9.0f,


                    //-5.0f, 0.0f,-10.0f,
                    //-8.0f, 5.0f,-10.0f,
                    //8.0f, 5.0f,-10.0f,
                    //5.0f, 0.0f,-10.0f
                };
                mybeziersurface.setup(controlpoints2, 4, 2);
            }

            void init1()
            {
                static GLfloat controlpoints3[] =
                {
                  //  -5.0f, 0.0f, 10.0f,
                  //  -8.0f, 10.0f, 10.0f,
                 //   8.0f, 10.0f, 10.0f,
                 //   5.0f, 0.0f, 10.0f,

                    -5.7f,-5.0f, 9.57f, // Lower
                    -7.0f, -3.39f, 9.35f, // Top left
                    //-5.0f, -4.0f, 10.15f,


                    -5.0f,-3.58f, 10.57f, // Top right
                    -6.2f, -3.46f, 9.98f, // top center
                    //-2.0f, -4.0f, 11.9f,


                    //-5.0f, 0.0f,-10.0f,
                    //-8.0f, 5.0f,-10.0f,
                    //8.0f, 5.0f,-10.0f,
                    //5.0f, 0.0f,-10.0f
                };
                mybeziersurface.setup(controlpoints3, 2, 2);
            }

            void init2()
            {
                static GLfloat controlpoints3[] =
                {
                  //  -5.0f, 0.0f, 10.0f,
                  //  -8.0f, 10.0f, 10.0f,
                 //   8.0f, 10.0f, 10.0f,
                 //   5.0f, 0.0f, 10.0f,

                    5.7f,-5.0f, 9.57f, // Lower
                    7.0f, -3.39f, 9.35f, // Top left
                    //-5.0f, -4.0f, 10.15f,


                    5.0f,-3.58f, 10.57f, // Top right
                    6.2f, -3.46f, 9.98f, // top center
                    //-2.0f, -4.0f, 11.9f,
                };
                mybeziersurface.setup(controlpoints3, 2, 2);
            }

            void init3()
            {
                static GLfloat controlpoints3[] =
                {
                  //  -5.0f, 0.0f, 10.0f,
                  //  -8.0f, 10.0f, 10.0f,
                 //   8.0f, 10.0f, 10.0f,
                 //   5.0f, 0.0f, 10.0f,

                    -2.3f,-5.13f, 10.67f, // Lower
                    -3.5f, -3.67f, 11.13f, // Top left
                    //-5.0f, -4.0f, 10.15f,


                    -1.5f,-3.73f, 11.5f, // Top right
                    -2.7f, -3.69f, 11.33f, // top center
                    //-2.0f, -4.0f, 11.9f,
                };
                mybeziersurface.setup(controlpoints3, 2, 2);
            }

            void init4()
            {
                static GLfloat controlpoints3[] =
                {
                  //  -5.0f, 0.0f, 10.0f,
                  //  -8.0f, 10.0f, 10.0f,
                 //   8.0f, 10.0f, 10.0f,
                 //   5.0f, 0.0f, 10.0f,

                    2.3f,-5.13f, 10.67f, // Lower
                    3.5f, -3.67f, 11.13f, // Top left
                    //-5.0f, -4.0f, 10.15f,


                    1.5f,-3.73f, 11.5f, // Top right
                    2.7f, -3.69f, 11.33f, // top center
                    //-2.0f, -4.0f, 11.9f,
                };
                mybeziersurface.setup(controlpoints3, 2, 2);
            }
    };
};

#endif
