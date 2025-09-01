# 🌃 Smart Street Light (IoT-ready) — Arduino + PIR + LDR

A simple, power-efficient **smart street light** that turns ON only at **night** when **motion** is detected.  
Built and tested in **Tinkercad**; easily extensible to **ESP32/ESP8266 + IoT**

---



## 📌 Overview
- Uses **LDR (photoresistor)** to detect day/night.
- Uses **PIR sensor** to detect human/vehicle motion.
- Turns **LED/Street light** ON only when **night + motion**.
- Designed for **easy migration** to IoT dashboards .

---

## 🛠 Components (Simulation)
- Arduino **UNO**
- **PIR** Motion Sensor (OUT, VCC, GND)
- **Photoresistor (LDR)** + **10kΩ** resistor (voltage divider)  
  > *In Tinkercad, search for “Photoresistor” (that’s the LDR).*
- **LED** + **220Ω** resistor
- Breadboard + jumper wires

---

## 🔌 Wiring (Quick Reference)

**LDR Voltage Divider → A0**
- LDR leg 1 → **5V**
- LDR leg 2 → **A0** and → **10kΩ** → **GND**

**PIR Sensor**
- **VCC** → **5V**
- **GND** → **GND**
- **OUT** → **D2**

**LED**
- **Anode (long leg)** → **D5** through **220Ω**
- **Cathode** → **GND**

