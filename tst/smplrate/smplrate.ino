

void setup(){
    int samples[100] = {};
    unsigned long stop;
    unsigned long start = millis();
    for (int i = 0; i < 100; i++){
        samples[i] = analogRead(A0);
    }
    stop = millis() - start;

    Serial.begin(115200);
    Serial.println(stop / 100);
    while (1){
        ;;;;;;;;;;;;;;;;;;;;
    }
    

}
void loop(){
    
}