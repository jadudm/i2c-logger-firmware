#ifndef CACHEH
#define CACHEH

#include "Arduino.h"
#include "SPI.h"
#include <SRAM_23LC.h>
#include <SdFat.h>

#define SPI_PERIPHERAL    SPI
#define SRAM_SS_PIN 5

// 32768
const uint16_t SRAM_SIZE = 32700;

bool sram_init();
void sram_reset_pointer();
bool sram_cache_data(byte *specifiers, int num_spec, byte *data, int bytes);
bool sram_copy_data (SdFile* the_file);
bool sram_has_space (int num_bytes);

#endif
