/* NetHack may be freely redistributed.  See license for details. */

#ifndef _objheaderwin_h_
#define _objheaderwin_h_

#include "window.h"

class objheaderwin : public window
{
  public:
    objheaderwin(window *parent, std::string cap);
    virtual bool draw();
};

#endif
