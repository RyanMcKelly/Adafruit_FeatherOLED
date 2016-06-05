#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_FeatherOLED.h>

McKelly_KegFeatherOLED oled = McKelly_KegFeatherOLED();

void setup()
{
  oled.init();
  oled.refresh();
}

void loop()
{

}
