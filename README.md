# 🔍 DMD2 Zoom Controller – ESP32 BLE Keypad

A simple Bluetooth controller for **Zoom In** and **Zoom Out** functions in DMD2 app.

This project uses an **ESP32 Super Mini** board configured as a BLE (Bluetooth Low Energy) keyboard. It enables physical control over zooming actions through a matrix keypad or wired buttons.

---

## 📦 Features

- **Zoom In / Zoom Out** via physical buttons
- Emulates a **Bluetooth keyboard** (no app required on Android)
- Clean and minimal codebase using `Keypad` and `BleKeyboard` libraries

---

## 🧰 Hardware Requirements

- [x] **ESP32-C3 SuperMini** development board  
- [x] 2 momentary push buttons (wired in a matrix configuration)
- [x] Jumper wires or PCB for connections

---

## 🔌 Wiring Guide

| Function     | ESP32 Pins | Description                                |
|--------------|------------|--------------------------------------------|
| **Zoom In**  | Pins `0` & `1` | Button closes connection between these pins |
| **Zoom Out** | Pins `2` & `3` | Button closes connection between these pins |

---

## 🚀 Getting Started

### 1. Flash the Code

- Open the Arduino IDE or PlatformIO
- Select the correct **ESP32 board** and port
- Flash the sketch to your ESP32 Super Mini

### 2. Pair with Android

- Power the ESP32
- Search for Bluetooth devices on your Android
- Connect to device named: **`DMD2Buttons`**

### 3. Use the Buttons

- Open the **DMD2** app or similar
- Press:
  - **Zoom In** → Sends `F6`
  - **Zoom Out** → Sends `F7`

---

## 📄 License

This project is released under the [MIT License](LICENSE).

---

## 📄 Example

https://github.com/user-attachments/assets/906419c4-8a72-4b62-85cc-782015822c41

---

## 🙌 Credits

Built by [Raphael713](https://github.com/Raphael713)  
Based on [BarButtons](https://jaxeadv.com/barbuttons/)
