#include <Mouse.h>
void setup() {
  pinMode(LED_BUILTIN_TX, INPUT);
  Mouse.begin();
}

void loop() {
  
  Mouse.move(1, 1, 0);
  delay(500);
  Mouse.move(-1,-1,0);
  delay(500);
  
  
}
