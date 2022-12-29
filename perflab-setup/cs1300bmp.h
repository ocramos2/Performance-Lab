//-*-c++-*-
#ifndef _cs1300bmp_h_
#define _cs1300bmp_h_

//
// Maximum image size
//
// Letting max image size be 1025 improved performance
// because it has less rows and columns to process
// and anything less than 1025 didn't work well
#define MAX_DIM 1025

//
// The specific colors
//
#define COLOR_RED 0
#define COLOR_GREEN 1
#define COLOR_BLUE 2
#define MAX_COLORS 3

struct cs1300bmp {
  //
  // Actual width used by this image
  //
  short width;
  //
  // Actual height used by this image
  //
  short height;
  //
  // R/G/B fields
  // 
  short color[MAX_COLORS][MAX_DIM][MAX_DIM];
};

//
// routines to read and write BMP images
//

#ifdef __cplusplus
extern "C" {
#endif

int cs1300bmp_readfile(char *filename, struct cs1300bmp *image);
int cs1300bmp_writefile(char *filename, struct cs1300bmp *image);

#ifdef __cplusplus
}
#endif


#endif
