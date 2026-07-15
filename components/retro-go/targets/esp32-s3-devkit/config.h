// Target definition
#define RG_TARGET_NAME             "VIHAAN-S3"

// Storage
#define RG_STORAGE_ROOT             "/sd"
#define RG_STORAGE_SDSPI_HOST       SPI3_HOST
#define RG_STORAGE_SDSPI_SPEED      SDMMC_FREQ_DEFAULT

// Audio
#define RG_AUDIO_USE_INT_DAC        0
#define RG_AUDIO_USE_EXT_DAC        1

// Video
#define RG_SCREEN_DRIVER            0
#define RG_SCREEN_HOST              SPI2_HOST
#define RG_SCREEN_SPEED             SPI_MASTER_FREQ_40M
#define RG_SCREEN_BACKLIGHT         1
#define RG_SCREEN_WIDTH             320
#define RG_SCREEN_HEIGHT            240
#define RG_SCREEN_ROTATE            0
#define RG_SCREEN_VISIBLE_AREA      {0, 0, 0, 0}
#define RG_SCREEN_SAFE_AREA         {0, 0, 0, 0}

#define RG_SCREEN_INIT()                                                                                         \
    ILI9341_CMD(0xCF, 0x00, 0xc3, 0x30);                                                                         \
    ILI9341_CMD(0xED, 0x64, 0x03, 0x12, 0x81);                                                                   \
    ILI9341_CMD(0xE8, 0x85, 0x00, 0x78);                                                                         \
    ILI9341_CMD(0xCB, 0x39, 0x2c, 0x00, 0x34, 0x02);                                                             \
    ILI9341_CMD(0xF7, 0x20);                                                                                     \
    ILI9341_CMD(0xEA, 0x00, 0x00);                                                                               \
    ILI9341_CMD(0xC0, 0x1B);                                                                                     \
    ILI9341_CMD(0xC1, 0x12);                                                                                     \
    ILI9341_CMD(0xC5, 0x32, 0x3C);                                                                               \
    ILI9341_CMD(0xC7, 0x91);                                                                                     \
    ILI9341_CMD(0x36, 0x68);                                                                                     \
    ILI9341_CMD(0xB1, 0x00, 0x10);                                                                               \
    ILI9341_CMD(0xB6, 0x0A, 0xA2);                                                                               \
    ILI9341_CMD(0xF6, 0x01, 0x30);                                                                               \
    ILI9341_CMD(0xF2, 0x00);                                                                                     \
    ILI9341_CMD(0x26, 0x01);                                                                                     \
    ILI9341_CMD(0xE0, 0x0F, 0x31, 0x2B, 0x0C, 0x0E, 0x08, 0x4E, 0xF1, 0x37, 0x07, 0x10, 0x03, 0x0E, 0x09, 0x00); \
    ILI9341_CMD(0xE1, 0x00, 0x0E, 0x14, 0x03, 0x11, 0x07, 0x31, 0xC1, 0x48, 0x08, 0x0F, 0x0C, 0x31, 0x36, 0x0F);

// Input
#define RG_GAMEPAD_ADC_MAP {}

#define RG_GAMEPAD_GPIO_MAP {\
    {RG_KEY_UP,     .num = GPIO_NUM_16, .pullup = 1, .level = 0},\
    {RG_KEY_DOWN,   .num = GPIO_NUM_14, .pullup = 1, .level = 0},\
    {RG_KEY_LEFT,   .num = GPIO_NUM_8,  .pullup = 1, .level = 0},\
    {RG_KEY_RIGHT,  .num = GPIO_NUM_17, .pullup = 1, .level = 0},\
    {RG_KEY_A,      .num = GPIO_NUM_45, .pullup = 1, .level = 0},\
    {RG_KEY_B,      .num = GPIO_NUM_21, .pullup = 1, .level = 0},\
    {RG_KEY_START,  .num = GPIO_NUM_47, .pullup = 1, .level = 0},\
    {RG_KEY_SELECT, .num = GPIO_NUM_39, .pullup = 1, .level = 0},\
}

// Battery
#define RG_BATTERY_DRIVER           0

// Status LED
#define RG_GPIO_LED                 GPIO_NUM_NC

// LCD (ILI9341)
#define RG_GPIO_LCD_MISO            GPIO_NUM_13
#define RG_GPIO_LCD_MOSI            GPIO_NUM_11
#define RG_GPIO_LCD_CLK             GPIO_NUM_12
#define RG_GPIO_LCD_CS              GPIO_NUM_10
#define RG_GPIO_LCD_DC              GPIO_NUM_15
#define RG_GPIO_LCD_BCKL            GPIO_NUM_NC
#define RG_GPIO_LCD_RST             GPIO_NUM_9

// SD Card
#define RG_GPIO_SDSPI_MISO          GPIO_NUM_1
#define RG_GPIO_SDSPI_MOSI          GPIO_NUM_2
#define RG_GPIO_SDSPI_CLK           GPIO_NUM_42
#define RG_GPIO_SDSPI_CS            GPIO_NUM_41

// External I2S DAC (MAX98357A)
#define RG_GPIO_SND_I2S_BCK         5
#define RG_GPIO_SND_I2S_WS          6
#define RG_GPIO_SND_I2S_DATA        7
