#pragma once

#include <driver/i2s.h>
#include "esp_log.h"
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "i2sconfig.h"

#define I2S_WS 15        // 共用LRCLK
#define I2S_SD_IN 13     // 麦克风输入数据
#define I2S_SCK 2        // 共用BCLK
#define I2S_PORT I2S_NUM_0

// #define I2S_SAMPLE_RATE   (16000)
// #define I2S_SAMPLE_BITS   (16)
// #define I2S_READ_LEN      (16 * 1024)



#define RECORD_TIME       (3) // Seconds
#define I2S_CHANNEL_NUM   (1)
#define FLASH_RECORD_SIZE (I2S_CHANNEL_NUM * I2S_SAMPLE_RATE * I2S_SAMPLE_BITS / 8 * RECORD_TIME)
#define WAV_HEADER_SIZE 44

void i2s_adc();
void i2sInitInput();
static void wavHeader(uint8_t* header, int wavSize);