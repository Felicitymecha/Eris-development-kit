#define LED_PIN PC13
  void setup()
  {
    pinMode(LED_PIN, OUTPUT);
  }
  
  void loop()
  {
    digitalWrite(LED_PIN, 1);
    delay(2500);
    digitalWrite(LED_PIN, 0);
    delay(2500);
  } 
