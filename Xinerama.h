/* $XdotOrg: xc/include/extensions/Xinerama.h,v 1.1.4.1 2003/12/18 22:59:34 kaleb Exp $ */
/*

Copyright 2003  The Open Group

Permission to use, copy, modify, distribute, and sell this software and its
documentation for any purpose is hereby granted without fee, provided that
the above copyright notice appear in all copies and that both that
copyright notice and this permission notice appear in supporting
documentation.

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
OPEN GROUP BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of The Open Group shall not be
used in advertising or otherwise to promote the sale, use or other dealings
in this Software without prior written authorization from The Open Group.

*/
/* $XFree86: xc/include/extensions/Xinerama.h,v 3.3 2002/09/16 18:05:19 eich Exp $ */

 
#ifndef _XINERAMA_H
#define _XINERAMA_H
 
#include <X11/Xfuncproto.h>
 
_XFUNCPROTOBEGIN
 
Bool XineramaQueryExtension (
    Display *dpy,
    int *event_basep,
    int *error_basep
);
 
Status XineramaQueryVersion(
    Display *dpy,
    int *major_version,
    int *minor_version
);
 
Bool XineramaActive (
    Display *dpy,
    Window window
);
 
Status XineramaGetData(
    Display *dpy,
    Window window,
    XRectangle **framebuffer_rects,
    int *number_framebuffers
);
 
Status XineramaGetCenterHint (
    Display *dpy,
    Window root,
    int *x,
    int *y
);
 
Status XineramaSetCenterHint (
    Display *dpy,
    Window root,
    int x,
    int y
);
 
_XFUNCPROTOEND
 
#endif /* _XINERAMA_H */
