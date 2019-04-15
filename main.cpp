#include <iostream>
#include <vector>

#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"

struct pixel{
  unsigned char r;
  unsigned char g;
  unsigned char b;
};

unsigned int coords(unsigned int x, unsigned int y, unsigned int sizeX){
  return x+y*sizeX;
}

void putCircle(unsigned int x, unsigned int y, unsigned int radius,
			   unsigned int r, unsigned int g, unsigned int b, std::vector<pixel> &target){
  
}

int main(){
  std::vector<pixel> myCoolImage;
  const unsigned int height=200;
  const unsigned int width=300;
  myCoolImage.reserve(height*width*3);

  for(unsigned int x=0;x<10;x++){

  }

  stbi_write_png("myImage.png", width, height, 3, &myCoolImage[0], 3);
  std::cout << "Hello world!\n";

  return 0;
}
