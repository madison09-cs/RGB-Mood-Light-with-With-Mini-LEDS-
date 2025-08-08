# 🌌 RGB Mood Light with Mini LEDs

A stunning, galaxy-inspired RGB mood light built with Arduino! This project uses a photoresistor to adjust brightness based on ambient light, and displays vibrant, dynamic color patterns using an RGB LED and additional red LEDs. It's a beautiful way to add reactive lighting to any space.

---

## 📝 Description

**RGB Mood Light with Mini LEDs** is a light-reactive system that creates colorful, ambient lighting based on the surrounding light level. As the environment gets darker, the brightness of the RGB and red LEDs increases, giving the effect of glowing stars or galaxies.

The RGB LED cycles through different colors automatically, and additional mini red LEDs enhance the galaxy-like mood. The light levels are read using a **photoresistor**, which dynamically controls the intensity of the LEDs to match the environment.

---

## 🔧 Components Used

| Component               | Quantity |
|-------------------------|----------|
| Arduino Uno R3          | 1        |
| RGB LED (Common Cathode)| 1        |
| Red LEDs                | 3        |
| 220Ω Resistors          | 4        |
| 10kΩ Resistor (for photoresistor) | 1 |
| Photoresistor (LDR)     | 1        |
| Breadboard              | 1        |
| Jumper Wires / Cables   | Several  |
| USB Cable (for programming) | 1     |

---

## 🚀 Installation & Setup

1. **Connect the RGB LED**:
   - Red pin → Digital Pin 9 (through 220Ω resistor)
   - Green pin → Digital Pin 10 (through 220Ω resistor)
   - Blue pin → Digital Pin 11 (through 220Ω resistor)
   - Common cathode → GND

2. **Connect the 3 Red LEDs**:
   - Each anode → Digital Pins 5, 6, and 7 (through 220Ω resistors)
   - Each cathode → GND

3. **Connect the Photoresistor (LDR)**:
   - One side of LDR → 5V
   - Other side → Analog Pin A0 and also to GND through a 10kΩ resistor (voltage divider)

4. **Upload the Code**:
   - Open the Arduino IDE.
   - Connect your Arduino Uno via USB.
   - Upload the sketch (code) to the board.

---

## ⚙️ How It Works

1. **Photoresistor Sensing**:
   - Reads the ambient light level via analog pin A0.
   - Converts this value to control the **brightness** of the LEDs.

2. **RGB LED Fading**:
   - Cycles through color combinations using PWM (Pulse Width Modulation) on pins 9, 10, and 11.
   - Intensity is scaled depending on the surrounding light (darker room = brighter LEDs).

3. **Mini Red LEDs**:
   - Add sparkle and enhance the galaxy/mood lighting feel.
   - Brightness may also be affected by the photoresistor reading.

This combination creates a reactive and visually engaging mood light.

---

## 📸 Images / Videos

> Add your images or videos to showcase your project here:
> https://sites.google.com/d/1kRYFgoPpI5KiRHlfU4u9C--i8z4OA6I5/p/1_ZLDAirpPNf5aijgyz-LQdDFrC5D1Gd2/edit 

---

## 🔬 Simulation

If you'd like to simulate or share the project virtually, use platforms like **Tinkercad** or **Wokwi**:

- [🔗 Tinkercad Simulation Link]([https://www.tinkercad.com/your-simulation-link](https://www.tinkercad.com/things/gmnNKhMk32D-mini-project-rgb-mood-light-with-photoresistor-with-mini-leds ))

---

## 🙌 Credits

- Project by **[Madison Diggs]**
- Developed using **Arduino Uno R3**
- Inspired by ambient mood and galaxy light designs

---

## 📄 License

This project is licensed under the Code in the Schools

---
