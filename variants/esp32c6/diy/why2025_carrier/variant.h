// https://github.com/n0p/mesthastic-fw-why-badge/blob/98f87e84264ff62509620489790492205a40a2d5/variants/why_badge/variant.h
// see wiki for info
// https://wiki.why2025.org/Project:Meshtastic_on_the_WHY2025_badge
#define I2C_SDA 8 // I2C pins for this board
#define I2C_SCL 9

// blink the display backight
#define LED_PIN 15    // If defined we will blink this LED
#define LED_STATE_ON 0 // State when LED is lit

// RA-01SH/HT-RA62 LORA module
#define USE_SX1262
#define LORA_SCK 6
#define LORA_MISO 2
#define LORA_MOSI 7
#define LORA_CS 4
#define LORA_RESET 1

#define SX126X_CS LORA_CS

#define SX126X_DIO1 5 // radio pin 6 - CAD (UNCONNECTED)
//#define SX126X_DIO2 20
#define SX126X_BUSY 11 // radio pin10 - busy (UNCONNECTED)
#define SX126X_RESET LORA_RESET
//#define SX126X_RXEN 15
#define SX126X_TXEN 3
//#define SX126X_DIO2_AS_RF_SWITCH
//#define SX126X_DIO3_TCXO_VOLTAGE 1.8
