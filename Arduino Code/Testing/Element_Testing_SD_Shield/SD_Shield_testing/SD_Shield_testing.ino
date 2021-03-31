// SD Card reader and writer Testing
//Michael Stewart
// Mar 07 2021
// Work in Progress 

// Purpose: Read Humidity and Temp Values for the Night 

#include <SPI.h>
#include <SD.h>


#define LOG_INTERVAl 1000

const int chipSelect= 10; // Sets the chipseledct to 10 this is the chip select for 

File logfile; // The loggin File

void setup(void) {
  Serial.begin(9600);
  Serial.println();

#if WAIT_TO_START
  Serial.println("Type any character to start");
  while (!Serial.available());
#endif //WAIT_TO_START


     

  
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
