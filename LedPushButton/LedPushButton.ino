boolean LEDState=false;
int LED = 4;
int BUTTON = 2;

void setup() {
    pinMode(LED, OUTPUT);
    pinMode(BUTTON, INPUT);
}

void loop() {
    if (digitalRead(BUTTON)==LOW){
        delay(50);
        
        if (digitalRead(BUTTON)==LOW) {
            LEDState = !LEDState;
            digitalWrite(LED, LEDState);    
        }
        
        while(digitalRead(BUTTON)==LOW) {
            // wait until BUTTON is read HIGH
        };  
    }
}
