// Define pins for water level sensors
#define WATER_SENSOR_1 D5
#define WATER_SENSOR_2 D6
#define WATER_SENSOR_3 D7
#define WATER_SENSOR_4 D8

// Define pins for relays
#define RELAY_1 D1
#define RELAY_2 D2
#define RELAY_3 D3
#define RELAY_4 D4

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(115200);
  
  // Set water level sensor pins as inputs
  pinMode(WATER_SENSOR_1, INPUT);
  pinMode(WATER_SENSOR_2, INPUT);
  pinMode(WATER_SENSOR_3, INPUT);
  pinMode(WATER_SENSOR_4, INPUT);

  // Set relay pins as outputs
  pinMode(RELAY_1, OUTPUT);
  pinMode(RELAY_2, OUTPUT);
  pinMode(RELAY_3, OUTPUT);
  pinMode(RELAY_4, OUTPUT);

  // Turn off all relays at start
  digitalWrite(RELAY_1, LOW);
  digitalWrite(RELAY_2, LOW);
  digitalWrite(RELAY_3, LOW);
  digitalWrite(RELAY_4, LOW);
}

void loop() {
  // Read water level sensor values
  int sensor1 = digitalRead(WATER_SENSOR_1);
  int sensor2 = digitalRead(WATER_SENSOR_2);
  int sensor3 = digitalRead(WATER_SENSOR_3);
  int sensor4 = digitalRead(WATER_SENSOR_4);

  // Print sensor values to serial monitor
  Serial.print("Sensor 1: "); Serial.print(sensor1);
  Serial.print(", Sensor 2: "); Serial.print(sensor2);
  Serial.print(", Sensor 3: "); Serial.print(sensor3);
  Serial.print(", Sensor 4: "); Serial.println(sensor4);

  // Control relays based on sensor values
  digitalWrite(RELAY_1, sensor1 == HIGH ? HIGH : LOW);
  digitalWrite(RELAY_2, sensor2 == HIGH ? HIGH : LOW);
  digitalWrite(RELAY_3, sensor3 == HIGH ? HIGH : LOW);
  digitalWrite(RELAY_4, sensor4 == HIGH ? HIGH : LOW);

  // Wait for a short time before next loop
  delay(1000);
}
