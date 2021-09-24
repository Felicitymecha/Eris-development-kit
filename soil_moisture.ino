#define SENSOR PA6
#define LED PC13
int sensorValue;

char buffer[100];
HardwareSerial Serial2(PA10, PA9);

void setup()
{
    Serial2.begin(115200);
    delay(100);
    while (!Serial2)
    {
        ;
    }
    pinMode(SENSOR, INPUT_ANALOG);
    pinMode(LED, OUTPUT);
}

void loop()
{

    sensorValue = analogRead(SENSOR);
    snprintf(buffer, sizeof(buffer), "Soil Moisture Value: %i", sensorValue);
    Serial2.println(buffer);

    if (sensorValue < 512)
    {
        digitalWrite(LED, HIGH);
    }
    else
    {
        digitalWrite(LED, LOW);
    }

    delay(1000);
}
