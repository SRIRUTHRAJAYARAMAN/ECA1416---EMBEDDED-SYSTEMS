
void setup()
{
  Serial.begin(9600);  // Initialize serial communication
}

int number = 0;

void loop()
{
  Serial.print("Number is ");
  Serial.println(number);

  delay(500);  // Wait half a second
  number++;
}
