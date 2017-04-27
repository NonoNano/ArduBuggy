#ifndef GFX_H
#define GFX_H


const uint8_t Ardu[] PROGMEM =
{
// width, height,
// 69, 22,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xe0, 0xf8, 0xfc, 0xfe, 0xfc, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe, 0xff, 0x7f, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0xc0, 0xe0, 0xf0, 0xfc, 0xfe, 0xff, 0xe7, 0xe3, 0xf1, 0x73, 0x7f, 0xff, 0xfe, 0xf0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xfe, 0xf8, 0x7c, 0x1c, 0x1e, 0x0e, 0x0e, 0x0e, 0xcc, 0xfc, 0xfc, 0x7e, 0x1f, 0x07, 0x83, 0xc3, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x80, 0xc0, 0xe0, 0xf0, 0xf8, 0xfe, 0xff, 0x1f, 0x07, 0x80, 0xc0, 0xf0, 0xfc, 0xfe, 0xff, 0x06, 0x00, 0x00, 0x00, 0x80, 0x80, 
0x38, 0x38, 0x3e, 0x1f, 0x0f, 0x07, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0f, 0x1f, 0x1e, 0x1c, 0x00, 0x0e, 0x0f, 0x0f, 0x0f, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x0f, 0x0e, 0x0e, 0x07, 0x07, 0x03, 0x01, 0x00, 0x00, 0x03, 0x03, 0x07, 0x03, 0x03, 0x01, 0x01, 0x07, 0x0f, 0x1f, 0x0e, 0x0f, 0x07, 0x03, 0x01, 0x01, 0x03, 0x07, 0x07, 0x07, 0x07, 0x07, 0x03, 0x00, 
};

const unsigned char Buggy[] PROGMEM =
{
// width, height,
// 67, 24,
0x00, 0xf8, 0xfc, 0xfe, 0x9e, 0x8e, 0x8e, 0x8e, 0xcf, 0xcf, 0xff, 0xfe, 0x7e, 0x1c, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 
0xfc, 0xff, 0xff, 0xff, 0x83, 0x83, 0x83, 0x03, 0x03, 0x83, 0xc3, 0xe7, 0xff, 0xfe, 0x3c, 0x00, 0x40, 0xff, 0xff, 0xff, 0xc3, 0xc0, 0xe0, 0x78, 0x3c, 0x3f, 0x7f, 0xff, 0xe0, 0xe0, 0x70, 0x78, 0x78, 0xfc, 0xfe, 0xff, 0xe7, 0xe3, 0xf1, 0xfd, 0xff, 0xff, 0xef, 0xe0, 0xf8, 0xfe, 0xff, 0xe7, 0xe3, 0xf1, 0xff, 0xff, 0xff, 0x61, 0x60, 0xfe, 0xff, 0xff, 0xc3, 0xc0, 0xe0, 0xe0, 0xf0, 0xfe, 0xff, 0x1f, 0x03, 
0x01, 0x03, 0x03, 0x03, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x3c, 0x39, 0x71, 0x71, 0x70, 0x70, 0x78, 0x3f, 0x1f, 0x0f, 0x1c, 0x38, 0x38, 0x71, 0x70, 0x70, 0x70, 0x7c, 0x3f, 0x1f, 0x03, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x41, 0xf8, 0xff, 0x7f, 0x07, 0x00, 0x00, 0x00, 
};



const unsigned char Dpad[] PROGMEM =
{
// width, height,
// 32, 32,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xf0, 0xf8, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xf8, 0xf1, 0xe3, 0xc7, 0x8f, 0x1f, 0x3f, 0x3f, 0x1f, 0x8f, 0xc7, 0xe3, 0xf1, 0xf8, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xf8, 0xf0, 
0x0f, 0x1f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x1f, 0x8f, 0xc7, 0xe3, 0xf1, 0xf8, 0xfc, 0xfc, 0xf8, 0xf1, 0xe3, 0xc7, 0x8f, 0x1f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x1f, 0x0f, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};



const uint8_t MEZZO[] PROGMEM =
{0x80, 0xe0, 0x70, 0x58, 0x4c, 0x44, 0x50, 0x9f,
0x90, 0x84, 0x8c, 0x48, 0x48, 0x4c, 0x44, 0x46,
0x92, 0x93, 0x39, 0x7d, 0x85, 0x05, 0x45, 0x05,
0x09, 0x93, 0x66, 0x4c, 0x58, 0x50, 0x10, 0x20,
0x60, 0xc0, 0x00, 0x00,0x03, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x1e,
0x10, 0x17, 0x14, 0x14, 0x03, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x1b, 0x06, 
};

const uint8_t RUOTA[] PROGMEM =
{
  8, 8,
0x1c, 0x7e, 0xe6, 0xdb, 0xcb, 0x67, 0x7e, 0x38,
0x2c, 0x7e, 0xe7, 0xca, 0x5b, 0xe7, 0x7e, 0x34,
0x34, 0x7e, 0xe7, 0x53, 0xda, 0xe7, 0x7e, 0x2c, 
0x38, 0x7e, 0x67, 0xdb, 0xd3, 0xe6, 0x7e, 0x1c,
};

const uint8_t TERRENO[] PROGMEM =
{
 8, 6,
0x2a, 0x16, 0x2a, 0x14, 0x2c, 0x16, 0x2a, 0x16, 
0x2a, 0x16, 0x2a, 0x15, 0x2b, 0x16, 0x2a, 0x16,
0x3e, 0x30, 0x20, 0x10, 0x28, 0x16, 0x2a, 0x16,
0x3e, 0x10, 0x20, 0x20, 0x20, 0x20, 0x20, 0x1e, 
};

/*const uint8_t SHIP[] PROGMEM =
{
// width, height,
24, 16,
0x00, 0x30, 0x00, 0x08, 0x00, 0x70, 0xdc, 0x86, 0x03, 0xd9, 0x55, 0x43, 0x55, 0xd9, 0x07, 0x86, 0xdc, 0x70, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 
0x70, 0x58, 0x4c, 0x46, 0x4b, 0x45, 0xc5, 0x48, 0x48, 0x44, 0x44, 0x48, 0x48, 0x44, 0x44, 0x48, 0x49, 0x45, 0x4b, 0x42, 0x46, 0x4d, 0x78, 0x70, 

0x00, 0x30, 0x00, 0x08, 0x00, 0x70, 0xdc, 0x86, 0x03, 0xd9, 0x55, 0x43, 0x55, 0xd9, 0x07, 0x86, 0xdc, 0x70, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 
0x70, 0x58, 0x4c, 0x46, 0x43, 0x4b, 0x45, 0x44, 0x68, 0x2c, 0x25, 0x24, 0x68, 0x48, 0x44, 0x44, 0x69, 0x2d, 0x63, 0x23, 0xe6, 0x4c, 0x78, 0x70,

0x00, 0x30, 0x00, 0x08, 0x00, 0x70, 0xdc, 0x86, 0x03, 0xd9, 0x55, 0x43, 0x55, 0xd9, 0x07, 0x86, 0xdc, 0x70, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 
0x70, 0x58, 0x4c, 0x46, 0x43, 0x49, 0xc5, 0x84, 0x88, 0xa8, 0xc4, 0x44, 0x48, 0x4c, 0xc4, 0x84, 0xa9, 0x89, 0xc3, 0x4a, 0x46, 0x4c, 0x78, 0x70,

0x00, 0x30, 0x00, 0x08, 0x00, 0x70, 0xdc, 0x86, 0x03, 0xd9, 0x55, 0x43, 0x55, 0xd9, 0x07, 0x86, 0xdc, 0x70, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 
0x70, 0x58, 0x4c, 0x66, 0x27, 0x29, 0x25, 0x64, 0x4a, 0x4c, 0x45, 0xe4, 0x28, 0x28, 0x24, 0x64, 0x49, 0x49, 0x53, 0x42, 0x46, 0x4c, 0xf8, 0x70,

0x00, 0x30, 0x00, 0x08, 0x00, 0x70, 0xdc, 0x86, 0x03, 0xd9, 0x55, 0x43, 0x55, 0xd9, 0x07, 0x86, 0xdc, 0x70, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 
0x70, 0x58, 0xcc, 0x86, 0x83, 0x9d, 0xc5, 0x44, 0x48, 0x48, 0x44, 0x44, 0x48, 0x48, 0x44, 0x44, 0x49, 0x49, 0xc7, 0x82, 0x86, 0x8c, 0xf8, 0x70,
};
 */

const unsigned char Ali[] PROGMEM =
{
// width, height,
16, 16,
// FRAME 00
0x00, 0x40, 0xf0, 0xf0, 0xf8, 0xf0, 0xf0, 0x40, 0x08, 0x3e, 0x3e, 0x7f, 0x3e, 0x3e, 0x08, 0x00, 
0x00, 0x00, 0x01, 0x01, 0x03, 0x01, 0x01, 0x08, 0x3e, 0x3e, 0x7f, 0x3e, 0x3e, 0x08, 0x00, 0x00, 
// FRAME 01
0x00, 0x10, 0x7c, 0x7c, 0xfe, 0x7c, 0x7c, 0x10, 0x00, 0x20, 0xf8, 0xf8, 0xfc, 0xf8, 0xf8, 0x20, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x7c, 0x7c, 0xfe, 0x7c, 0x7c, 0x10, 0x01, 0x00, 0x00, 0x00, 
// FRAME 02
0x00, 0x00, 0x08, 0x3e, 0x3e, 0x7f, 0x3e, 0x3e, 0x08, 0x80, 0xe0, 0xe0, 0xf0, 0xe0, 0xe0, 0x80, 
0x00, 0x00, 0x00, 0x08, 0x3e, 0x3e, 0x7f, 0x3e, 0x3e, 0x08, 0x03, 0x03, 0x07, 0x03, 0x03, 0x00, 
// FRAME 03
0x00, 0x00, 0x80, 0x80, 0xc0, 0x80, 0x88, 0x3e, 0x3e, 0x7f, 0x3e, 0x3e, 0x08, 0x00, 0x00, 0x00, 
0x00, 0x02, 0x0f, 0x0f, 0x1f, 0x0f, 0x0f, 0x02, 0x00, 0x08, 0x3e, 0x3e, 0x7f, 0x3e, 0x3e, 0x08,
};

const unsigned char Bomb[] PROGMEM =
{
// width, height,
8, 8,
0x01, 0x3b, 0x7f, 0xc2, 0xfe, 0x47, 0x3b, 0x01, 
0x01, 0x3b, 0x47, 0xfe, 0xc2, 0x7f, 0x3b, 0x01,
};




 

 
#endif