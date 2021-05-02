int ledPin = D7;


void setup() {
    
    pinMode(ledPin, OUTPUT); 
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", Input); 
}

void ShortFlash() // flash LED for half a second
{
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
}

void LongFlash() // Flash LED for 10 seconds
{
    digitalWrite(ledPin, HIGH);
    delay(10000);
    digitalWrite(ledPin, LOW);
    delay(10000);
}

void Input(const char *event, const char *data)
{
    if (strcmp(data,"wave") == 0)
    {
        ShortFlash();
        ShortFlash();
        ShortFlash();
    }
    else if(strcmp(data,"pat") == 0)
    {
        LongFlash();
    }

}

void loop() 
{
    
}

