
#define echoPin 2 
#define trigPin 3 

long waktu; 
int jarak;

void setup() {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  Serial.begin(9600);
  Serial.println("Alat Pengukur Jarak");
}
void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  waktu = pulseIn(echoPin, HIGH);
  jarak = waktu * 0.034 / 2;
  Serial.print("Distance: ");
  Serial.print(jarak);
  Serial.println(" cm");
}
