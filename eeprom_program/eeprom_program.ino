


int SER_PIN_DATA = 13;
int RCLK_PIN_DATA = 12;
int SRCLK_PIN_DATA = 11;


int SER_PIN_ADDR = 7;
int RCLK_PIN_ADDR = 6;
int SRCLK_PIN_ADDR = 5;



void setup() {

  pinMode( SER_PIN_DATA, OUTPUT);
  pinMode( RCLK_PIN_DATA, OUTPUT);
  pinMode( SRCLK_PIN_DATA, OUTPUT);


  pinMode( SER_PIN_ADDR, OUTPUT);
  pinMode( RCLK_PIN_ADDR, OUTPUT);
  pinMode( SRCLK_PIN_ADDR, OUTPUT);

  // zero out the data bus shift register
  digitalWrite( RCLK_PIN_DATA, LOW);
  shiftOut(SER_PIN_DATA,SRCLK_PIN_DATA,MSBFIRST,0);
  digitalWrite(RCLK_PIN_DATA,HIGH);

  // zero out the address bus shift register
  digitalWrite( RCLK_PIN_ADDR, LOW);
  shiftOut(SER_PIN_ADDR,SRCLK_PIN_ADDR,MSBFIRST,0);
  digitalWrite(RCLK_PIN_ADDR,HIGH);
 
  delay(500);

  // TODO: send bits to the EEPROM
  


  
}


void loop() {
      
}

