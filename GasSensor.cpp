// Define the pin connected to the gas sensor
const int gasSensorPin = A0;

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(gasSensorPin, INPUT); // Set the sensor pin as input
}

void loop() {
  int sensorValue = analogRead(gasSensorPin); // Read the analog value
  float voltage = (sensorValue / 1023.0) * 5.0; // Convert to voltage
  Serial.print("Sensor Value: ");
  Serial.print(sensorValue);
  Serial.print(" | Voltage: ");
  Serial.println(voltage);
  delay(1000); // Delay for readability
}
