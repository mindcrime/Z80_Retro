

// int SER_PIN = 13;
int SER_PIN = 7;
// int RCLK_PIN = 12;
int RCLK_PIN = 6;
// int SRCLK_PIN = 11;
int SRCLK_PIN=5;

void setup() {

  // setup code goes here.
  pinMode( SER_PIN, OUTPUT);
  pinMode( RCLK_PIN, OUTPUT);
  pinMode( SRCLK_PIN, OUTPUT);

  // everything should default to 0 (LOW) so all LED's should be off
  writereg();

  delay(5000);
}


boolean registers[8];


void writereg() {

  digitalWrite( RCLK_PIN, LOW );

  for( int i = 7; i >= 0 ; i-- )
  {
    digitalWrite( SRCLK_PIN, LOW );
    digitalWrite( SER_PIN, registers[i] );
    digitalWrite( SRCLK_PIN, HIGH );  
    
  }

  digitalWrite( RCLK_PIN, HIGH );
  
}

void loop() {
  
  // take each register HIGH in turn, while pushing the array of values to the shift register each time
  for( int i = 0; i < 8; i++ )
  {
    registers[i] = HIGH;  
    delay(200);
    writereg();
  }

  // take each register LOW in turn, while pushing the array of values to the shift register each time
  for( int i = 7; i >= 0; i-- )
  {
      
    registers[i] = LOW;
    delay(200);
    writereg();
  }
    
}

