#include <Keypad.h> 
const byte ROWS = 4;
const byte COLS = 4; 
char keys [ROWS] [COLS] = { 
  {'7', '8', '9', '/'}, 
  {'4', '5', '6', 'x'}, 
  {'1', '2', '3', '-'}, 
  {'*', '0', '#', '+'} 
}; 
byte rowPins [ROWS] = {13, 12, 11, 10}; 
byte colPins[COLS] = {9, 8, 7, 6}; 
Keypad keypad = Keypad (makeKeymap (keys), rowPins, colPins, ROWS, COLS); 
int keyCheck = 0; 
void setup() 
{ 
  Serial.begin (9600);   
} 
void loop ()  
{ 
  char key = keypad.getKey (); 
    if (key) 
  { 
    if (key == '1') {keyCheck = 1; Serial.print ("1");} 
    if (key == '2') {keyCheck = 1; Serial.print ("2");} 
    if (key == '3') {keyCheck = 1; Serial.print ("3");} 
    
    if (key == '4') {keyCheck = 1; Serial.print ("4");} 
    if (key == '5') {keyCheck = 1; Serial.print ("5");} 
    if (key == '6') {keyCheck = 1; Serial.print ("6");} 
    if (keyCheck == 0) {Serial.print (key);} 
    keyCheck = 0; 
  } 
}
