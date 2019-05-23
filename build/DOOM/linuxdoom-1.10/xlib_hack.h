//
// Created by Frodo on 2019-02-26.
//

#ifndef PG_DOOM_XLIB_HACK_H
#define PG_DOOM_XLIB_HACK_H

typedef char *XPointer;

typedef struct XExtData {
    int number;		/* number returned by XRegisterExtension */
    struct _XExtData *next;	/* next item on list of data for structure */
    int (*free_private)();	/* called to free private storage */
    XPointer private_data;	/* data private to this extension. */
} XExtData;

typedef struct {
	unsigned long pixel;			/* pixel value */
	unsigned short red, green, blue;	/* rgb values */
	char flags;				/* DoRed, DoGreen, DoBlue */
	char pad;
} XColor;
typedef struct XGCValues{}XGCValues;
typedef int Bool;
typedef struct {
    XExtData *ext_data;	/* hook for extension to hang data */
    struct _XDisplay *display;/* back pointer to display structure */
    // MARVIN
    // Window root;		/* Root window id. */
    int width, height;	/* width and height of screen */
    int mwidth, mheight;	/* width and height of  in millimeters */
    int ndepths;		/* number of depths possible */
    // Depth *depths;		/* list of allowable depths on the screen */
    int root_depth;		/* bits per pixel */
    // Visual *root_visual;	/* root visual */
    // GC default_gc;		/* GC for the root root visual */
    // Colormap cmap;		/* default color map */
    unsigned long white_pixel;
    unsigned long black_pixel;	/* White and Black pixel values */
    int max_maps, min_maps;	/* max and min color maps */
    int backing_store;	/* Never, WhenMapped, Always */
    Bool save_unders;
    long root_input_mask;	/* initial root input mask */
} Screen;

typedef unsigned long int XID;
typedef XID Cursor;
typedef XID GC;
typedef XID Pixmap;
typedef XID Window;
typedef XID Colormap;

#define False 0
#define True 0
#define PseudoColor	3
#define DoRed	(1<<0)
#define DoGreen (1<<0)
#define DoBlue  (1<<0)
#define AllocNone	0
#define AllocAll	1
#define CWColormap	(1L<<13)
#define CWBorderPixel	(1L<<3)
#define CWEventMask	(1L<<11)

typedef struct Display
{
    XExtData *ext_data;	/* hook for extension to hang data */
    struct _XPrivate *private1;
    int fd;			/* Network socket. */
    int private2;
    int proto_major_version;/* major version of server's X protocol */
    int proto_minor_version;/* minor version of servers X protocol */
    char *vendor;		/* vendor of the server hardware */
    // MARVIN
    /*XID private3;
    XID private4;
    XID private5;*/
    // int private6;
    // XID (*resource_alloc)();/* allocator function */
    int byte_order;		/* screen byte order, LSBFirst, MSBFirst */
    int bitmap_unit;	/* padding and data requirements */
    int bitmap_pad;		/* padding requirements on bitmaps */
    int bitmap_bit_order;	/* LeastSignificant or MostSignificant */
    int nformats;		/* number of pixmap formats in list */
    // ScreenFormat *pixmap_format;	/* pixmap format list */
    int private8;
    int release;		/* release of the server */
    // struct _XPrivate *private9, *private10;
    int qlen;		/* Length of input event queue */
    unsigned long last_request_read; /* seq number of last event read */
    unsigned long request;	/* sequence number of last request. */
    XPointer private11;
    XPointer private12;
    XPointer private13;
    XPointer private14;
    unsigned max_request_size; /* maximum number 32 bit words in request*/
    struct _XrmHashBucketRec *db;
    int (*private15)();
    char *display_name;	/* "host:display" string used on this connect*/
    int default_screen;	/* default screen for operations */
    int nscreens;		/* number of screens on this server*/
    Screen *screens;	/* pointer to list of screens */
    unsigned long motion_buffer;	/* size of motion buffer */
    unsigned long private16;
    int min_keycode;	/* minimum defined keycode */
    int max_keycode;	/* maximum defined keycode */
    XPointer private17;
    XPointer private18;
    int private19;
    char *xdefaults;	/* contents of defaults from server */
    /* there is more to this structure, but it is private to Xlib */
}
        Display;

typedef char * XPointer;

typedef int VisualID;

typedef int Visual;

typedef struct {
    Visual *visual;
    VisualID visualid;
    int screen;
    int depth;
    int class;
    unsigned long red_mask;
    unsigned long green_mask;
    unsigned long blue_mask;
    int colormap_size;
    int bits_per_rgb;
} XVisualInfo;

typedef struct _XImage {
    int width, height;		/* size of image */
    int xoffset;			/* number of pixels offset in X direction */
    int format;			/* XYBitmap, XYPixmap, ZPixmap */
    char *data;			/* pointer to image data */
    int byte_order;			/* data byte order, LSBFirst, MSBFirst */
    int bitmap_unit;		/* quant. of scanline 8, 16, 32 */
    int bitmap_bit_order;		/* LSBFirst, MSBFirst */
    int bitmap_pad;			/* 8, 16, 32 either XY or ZPixmap */
    int depth;			/* depth of image */
    int bytes_per_line;		/* accelerator to next scanline */
    int bits_per_pixel;		/* bits per pixel (ZPixmap) */
    unsigned long red_mask;		/* bits in z arrangement */
    unsigned long green_mask;
    unsigned long blue_mask;
    XPointer obdata;		/* hook for the object routines to hang on */
    struct funcs {			/* image manipulation routines */
        struct _XImage *(*create_image)();
        int (*destroy_image)();
        unsigned long (*get_pixel)();
        int (*put_pixel)();
        struct _XImage *(*sub_image)();
        int (*add_pixel)();
    } f;
} XImage;




#endif //PG_DOOM_XLIB_HACK_H
