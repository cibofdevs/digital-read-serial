boolean RELAYState=false;
int RELAY = 4;
int BUTTON = 2;

void setup() {
    pinMode(RELAY, OUTPUT);
    pinMode(BUTTON, INPUT);
}

void loop() {
    if (digitalRead(BUTTON)==LOW){
        delay(50);
        
        if (digitalRead(BUTTON)==LOW) {
            RELAYState = !RELAYState;
            digitalWrite(RELAY, RELAYState);    
        }
        
        while(digitalRead(BUTTON)==LOW) {
            // wait until BUTTON is read HIGH
        };  
    }
}
