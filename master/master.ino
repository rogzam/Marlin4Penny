/**
Skynet V2.3.2 edited for Penny

April 29, 2018

Edits:

1 - On Configuration.h changend default steps per units as:

    #define DEFAULT_AXIS_STEPS_PER_UNIT   {80,  80, 400, 95}
    Also changed

2 - On Version.h changed

    Machine Name
    Build config

3 - On Configration_adv.h changed default thermal runway settings:

    THERMAL_PROTECTION_PERIOD 60 to 100
    THERMAL_PROTECTION_HYSTERESIS 10 to 4
    WATCH_TEMP_PERIOD 20 to 40
    WATCH_TEMP_INCREASE 2 to 3
    THERMAL_PROTECTION_BED_PERIOD 60 to 150
    THERMAL_PROTECTION_BED_HYSTERESIS 5 to 2
    WATCH_BED_TEMP_PERIOD 180 to 90
    WATCH_BED_TEMP_INCREASE 2  same

 */

#include "MarlinConfig.h"

#if ENABLED(ULTRA_LCD)
  #if ENABLED(LCD_I2C_TYPE_PCF8575)
    #include <Wire.h>
    #include <LiquidCrystal_I2C.h>
  #elif ENABLED(LCD_I2C_TYPE_MCP23017) || ENABLED(LCD_I2C_TYPE_MCP23008)
    #include <Wire.h>
    #include <LiquidTWI2.h>
  #elif ENABLED(LCM1602)
    #include <Wire.h>
    #include <LCD.h>
    #include <LiquidCrystal_I2C.h>
  #elif ENABLED(DOGLCD)
    #include <U8glib.h> // library for graphics LCD by Oli Kraus (https://github.com/olikraus/U8glib_Arduino)
  #else
    #include <LiquidCrystal.h> // library for character LCD
  #endif
#endif

#if HAS_DIGIPOTSS
  #include <SPI.h>
#endif

#if ENABLED(DIGIPOT_I2C)
  #include <Wire.h>
#endif

#if ENABLED(HAVE_TMCDRIVER)
  #include <SPI.h>
  #include <TMC26XStepper.h>
#endif

#if ENABLED(HAVE_TMC2130DRIVER)
  #include <SPI.h>
  #include <Trinamic_TMC2130.h>
#endif

#if ENABLED(HAVE_L6470DRIVER)
  #include <SPI.h>
  #include <L6470.h>
#endif
