/*******************************************************************************

     Exibindo imagem de Marilyn Monroe no display OLED     
     Data: 10/11/2020
             http://squids.com.br/arduino

*******************************************************************************/
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// seus bmp's aqui

void setup()   
{                
  // initialize with the I2C addr 0x3C
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  

  // Clear the buffer.
  display.clearDisplay();  

}

void loop() 
{
  int i = 0;
  //descomente abaixo e insira aqui o tamanho do seu array
  //                            | 
  //for (i = 0; i < tamanho_d0_seu_array; i++)
  {
    //descomente abaixo e insira aqui seu array
    //                             |           
    //display.drawBitmap(0, 0,  seu_array[i] , 128, 64, WHITE);
    display.display();
    delay(60);
    display.clearDisplay();
    delay(1);
  }

}