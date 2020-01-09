void printBin(byte a, byte numberOfIn) {
  for(int i = numberOfIn - 1; i >= 0; i--) {
    Serial.print(bitRead(a, i)); 
    Serial.print(" ");
  }
}

void setup() {
   DDRA = 0xFF;
   DDRC = 0x0;
   
   byte numberOfInputs = 4;
   byte numberOfOutputs = 4;
   Serial.begin(9600);
   
   for(int output = 0; output <= (pow(2, numberOfInputs) - 1); output++) {
     PORTA = output;
     Serial.print(output);
     Serial.print(".\t");
     printBin(output, numberOfInputs);
     Serial.print(" ||  ");
     printBin(PINC, numberOfOutputs);
     Serial.print("\n");
     delay(10);
   } 
}

void loop() {
  
}
