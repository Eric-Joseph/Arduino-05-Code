int onesPin = 10;
int tensPin = 11;
int hundredsPin = 12;
int thousandsPin = 13;
int counter = 0;

void setup() {
  // put your setup code here, to run once:
 pinMode(10, OUTPUT);  
 pinMode(11, OUTPUT);  
 pinMode(12, OUTPUT); 
 pinMode(13, OUTPUT);
}

void loop() {
 digitalWrite(thousandsPin, LOW);
 digitalWrite(hundredsPin, LOW);
 digitalWrite(tensPin, LOW);
 digitalWrite(onesPin, LOW);
 delay(1000);

 digitalWrite(thousandsPin, LOW);
 digitalWrite(hundredsPin, LOW);
 digitalWrite(tensPin, LOW);
 digitalWrite(onesPin, HIGH);
 delay(1000);

 digitalWrite(thousandsPin, LOW);
 digitalWrite(hundredsPin, LOW);
 digitalWrite(tensPin, HIGH);
 digitalWrite(onesPin, LOW);
 delay(1000);

 digitalWrite(thousandsPin, LOW);
 digitalWrite(hundredsPin, LOW);
 digitalWrite(tensPin, HIGH);
 digitalWrite(onesPin, HIGH);
 delay(1000);

 digitalWrite(thousandsPin, LOW);
 digitalWrite(hundredsPin, HIGH);
 digitalWrite(tensPin, LOW);
 digitalWrite(onesPin, LOW);
 delay(1000);

 digitalWrite(thousandsPin, LOW);
 digitalWrite(hundredsPin, HIGH);
 digitalWrite(tensPin, LOW);
 digitalWrite(onesPin, HIGH);
 delay(1000);

 digitalWrite(thousandsPin, LOW);
 digitalWrite(hundredsPin, HIGH);
 digitalWrite(tensPin, HIGH);
 digitalWrite(onesPin, LOW);
 delay(1000);

 digitalWrite(thousandsPin, LOW);
 digitalWrite(hundredsPin, HIGH);
 digitalWrite(tensPin, HIGH);
 digitalWrite(onesPin, HIGH);
 delay(1000);

 digitalWrite(thousandsPin, HIGH);
 digitalWrite(hundredsPin, LOW);
 digitalWrite(tensPin, LOW);
 digitalWrite(onesPin, LOW);
 delay(1000);

 digitalWrite(thousandsPin, HIGH);
 digitalWrite(hundredsPin, LOW);
 digitalWrite(tensPin, LOW);
 digitalWrite(onesPin, HIGH);
 delay(1000);

 digitalWrite(thousandsPin, HIGH);
 digitalWrite(hundredsPin, LOW);
 digitalWrite(tensPin, HIGH);
 digitalWrite(onesPin, LOW);
 delay(1000);

 digitalWrite(thousandsPin, HIGH);
 digitalWrite(hundredsPin, LOW);
 digitalWrite(tensPin, HIGH);
 digitalWrite(onesPin, HIGH);
 delay(1000);

 digitalWrite(thousandsPin, HIGH);
 digitalWrite(hundredsPin, HIGH);
 digitalWrite(tensPin, LOW);
 digitalWrite(onesPin, LOW);
 delay(1000);

 digitalWrite(thousandsPin, HIGH);
 digitalWrite(hundredsPin, HIGH);
 digitalWrite(tensPin, LOW);
 digitalWrite(onesPin, HIGH);
 delay(1000);

 digitalWrite(thousandsPin, HIGH);
 digitalWrite(hundredsPin, HIGH);
 digitalWrite(tensPin, HIGH);
 digitalWrite(onesPin, LOW);
 delay(1000);

 digitalWrite(thousandsPin, HIGH);
 digitalWrite(hundredsPin, HIGH);
 digitalWrite(tensPin, HIGH);
 digitalWrite(onesPin, HIGH);
 delay(1000);
}
