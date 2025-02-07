// Blinking an LED using Arduino UNO

void setup() { 
    pinMode(12, OUTPUT); 
} 

void loop() { 
    digitalWrite(12, HIGH); // Turn LED on
    delay(1000); // Wait 1 second
    digitalWrite(12, LOW); // Turn LED off
    delay(1000); // Wait 1 second
}




// LED Fading effect using PWM

int led = 9;           // LED connected to pin 9 (PWM)
int brightness = 0;    // Initial brightness
int fadeAmount = 5;    // How much to increase/decrease brightness

void setup() { 
    pinMode(led, OUTPUT); 
} 

void loop() { 
    analogWrite(led, brightness); // Set brightness
    brightness += fadeAmount; // Increase/decrease brightness

    // Reverse fade direction at limits (0 or 255)
    if (brightness <= 0 || brightness >= 255) { 
        fadeAmount = -fadeAmount; 
    } 
    
    delay(30); // Short delay for smooth fading
}
