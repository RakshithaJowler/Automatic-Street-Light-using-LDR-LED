# Automatic-Street-Light-using-LDR-LED
This project is an automatic street light system using Arduino Uno and an LDR sensor. The LDR detects the surrounding light intensity. When it becomes dark, the Arduino automatically turns ON the LED. When there is enough light, the LED turns OFF. This project demonstrates sensor interfacing, analog input, and automatic control using Arduino.

#Working

The LDR detects the surrounding light intensity. When the environment becomes dark, the Arduino turns ON the LED automatically. When there is enough light, the Arduino turns OFF the LED.

# Components
Arduino Uno
LDR (Light Dependent Resistor)
10kΩ resistor
LED
220Ω resistor
Breadboard
Jumper wires

## Connections

- LDR → 5V and A0
- 10kΩ resistor → A0 and GND
- LED Anode (+) → Digital Pin 13 through 220Ω resistor
- LED Cathode (−) → GND

#Programming

int ldr = A0;
int led = 13;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int lightValue = analogRead(ldr);

  Serial.println(lightValue);

  if (lightValue < 500) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }

  delay(200);
}


## Project Image



![Automatic Street Light](Screenshot%202026-08-18%20224239.png)

![Automatic Street Light Connection](Screenshot%202026-08-18%20224301.png)
