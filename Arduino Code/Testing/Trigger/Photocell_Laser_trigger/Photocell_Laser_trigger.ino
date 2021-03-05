//www.elegoo.com
//2016.12.9

int lightPin = 0; // Sets Photocell value to Analog input 0


void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  int reading  = analogRead(lightPin); // Reads analog input
  if(reading<500){ // Beam is Broken. 500 is the default value for a none-laser lit value
    Serial.print("Beam Broken: "); 
    }
  Serial.print(reading); //Prints Analog Reading into Serial Monitor
  Serial.print("\n");
  delay(1000); //Delays a Second
}
