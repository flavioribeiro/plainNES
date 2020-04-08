#pragma once

#include <stdint.h>

namespace RENDER {

uint8_t* convertNTSC2RGB(uint8_t* outputBuffer, uint8_t* inputPixelMap, int size);
int init();

uint32_t* convertNTSC2ARGB(uint32_t* outputBuffer, uint8_t* inputPixelMap, int size);

}
