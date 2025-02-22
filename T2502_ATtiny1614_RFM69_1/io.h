#ifndef __IO_H__
#define __IO_H__


#define PA1 8
#define PA2 9
#define PA3 10
#define PA4 0
#define PA5 1
#define PA6 2
#define PA7 3
#define PB0 7
#define PB1 6
#define PB2 5
#define PB3 4


#ifdef  ADA_M0_RFM69
#define RFM69_CS      8
#define RFM69_INT     3
// #define RFM69_IRQN    0  // Pin 2 is IRQ 0!
#define RFM69_RST     4
#endif

#ifdef PRO_MINI_RFM69
#define RFM69_CS      10
#define RFM69_INT     2
#define RFM69_IRQN    0  // Pin 2 is IRQ 0!
#define RFM69_RST     9
#endif

#ifdef ATTINY1614_RFM69
#define RFM69_CS      PA4
#define RFM69_INT     PA6
#define RFM69_IRQN    0  // Pin 2 is IRQ 0!
#define RFM69_RST     PA5
#endif

// LED Definitions
#define PIN_LED         PB1


void io_initialize(void);

void io_led_flash(uint16_t nbr_ticks );

void io_run_100ms(void);


#endif