#include <Keypad.h>
#include <BleKeyboard.h>

// --- Constantes ---
// Keypad library settings
const byte ROWS = 3;
const byte COLS = 3;

char keys[ROWS][COLS] = {
  {'1', '6', '9'},
  {'4', '2', '7'},
  {'8', '5', '3'}
};

byte rowPins[COLS] = {0, 2, 4};  // keypad pins, top to bottom
byte colPins[ROWS] = {1, 3, 5};  // keypad pins, left to right

// --- Objetos Globais ---
BleKeyboard bleKeyboard("DMD2Buttons", "RaphaelNorthRiders", 100);
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

// --- Função para lidar com teclas ---
void handleKeypad(KeypadEvent key) {
  if (keypad.getState() == PRESSED && bleKeyboard.isConnected()) {
    switch (key) {
      case '1': bleKeyboard.press(KEY_F6); break;
      case '2': bleKeyboard.press(KEY_F7); break;
    }
  }

  if (keypad.getState() == RELEASED) {
    bleKeyboard.releaseAll();
  }
}

// --- Setup e Loop ---
void setup() {
  bleKeyboard.begin();
  keypad.addEventListener(handleKeypad);
}

void loop() {
  keypad.getKey();
  delay(10);
}