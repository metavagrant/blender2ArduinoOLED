

void setup(void) {
  Serial.begin(9600);
}

String cmd = "";

void loop(void) {
  
  if(Serial.available() > 0){
    cmd = Serial.readStringUntil('\n') ; // use readStringUntil(endline) instead of simple readString() to have instant response
    if(cmd == "Hi Nano"){
      Serial.println("Yes Master, What can I do for you?");
    }
    
  }
  
  delay(1/50); // 20ms delay
}
