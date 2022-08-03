int ledR = 13;
int ledY = 7;
int ledG = 2;

void setup() {
 pinMode (13,OUTPUT);
 pinMode (7,OUTPUT);
 pinMode (2,OUTPUT);
}

void loop() {
 digitalWrite (13,HIGH);
 digitalWrite (7,LOW);
 digitalWrite (2,LOW);
 delay (8000);

 digitalWrite (13,LOW);
 digitalWrite (7,HIGH);
 digitalWrite (2,LOW);
 delay (2000);
 
digitalWrite (13,LOW);
 digitalWrite (7,LOW);
 digitalWrite (2,HIGH);
 delay (8000);
}
 
