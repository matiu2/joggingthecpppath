/** \file greet.cpp
   * \brief A brief file description of greet.cpp
    * A more elaborated file description.
    * using latex tricks in this file
 The distance between \f$(x_1,y_1)\f$ and \f$(x_2,y_2)\f$ is 
  \f$\sqrt{(x_2-x_1)^2+(y_2-y_1)^2}\f$.
* and \n
* more documention if needed on new line
* tghis is a hello world in c++ part of the \b joggingthecpppath project 
 .\n
* \b compiles with \code gcc greep.c  -o prg \endcode \n
* \b generate  documentation  with
* \code  make doc \endcode \n
* or directly 
* \code doxygen  Doxyfile \endcode \n 
*  always test code quality for memory leaks !!
\code valgrind --leak-check=full ./prg \endcode \n
* this complete documentation is followed by autor version and date tags\n
* \author lyase damasked
* \version 0.1
* \date 26 jan 2013
* \bug       None known to date \n
* \copyright GNU Public License. \n
* =====================================================================================
*/
#include <stdio.h>
#include <iostream>
using namespace std;

main(int argc, char *argv[])
{
    int i;
    for(i=0;i<10;i++)
    /* int DONE;
    DONE=0 
    while(!DONE){}
    */
    {
    cout<<"hello, how are you userxxx ? I am a prg compiled on :  "__DATE__ <<" \n";

    cout <<"DEBUGINFO  in file:"<<__FILE__ <<" at LINE:"<< __LINE__ <<"  binary compiled on : "<< __DATE__<<" at: "<< __TIME__<<endl;
    }
    /* this is a commented paragraph in C
     */
    return 0;
    // 0 is normal exit 1 is error 

}

