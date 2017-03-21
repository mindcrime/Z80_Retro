

int SER_PIN = 13;
int RCLK_PIN = 12;
int SRCLK_PIN = 11;


void setup() {

  // setup code goes here.
  pinMode( SER_PIN, OUTPUT);
  pinMode( RCLK_PIN, OUTPUT);
  pinMode( SRCLK_PIN, OUTPUT);

  digitalWrite( RCLK_PIN, LOW);
  shiftOut(SER_PIN,SRCLK_PIN,MSBFIRST,0);
  digitalWrite(RCLK_PIN,HIGH);
  delay(4000);

}


int dataArray[16] = {252, 96, 218, 242, 102, 182, 190, 224, 254, 246, 238, 62, 156, 122, 158, 142};

void loop() {

  for( int i = 0; i < 16; i++ ) {

        digitalWrite( RCLK_PIN, LOW);
        shiftOut(SER_PIN,SRCLK_PIN,MSBFIRST,dataArray[i]);
        digitalWrite(RCLK_PIN,HIGH);
        delay(2000);
  }
}

