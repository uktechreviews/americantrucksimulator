/*  American Truck Simulator control box 
	Based on the  Simple HID Keyboard Example
   by: Jim Lindblom
   SparkFun Electronics
   date: 1/17/12
   
   This example code is here to show basic usage of the
   Keyboard.write(char) function. The ProMicro emulates a USB HID
   Keyboard. When a button press is sensed it'll send a 'z' over
   USB to a computer.
   
 */
 
#include <Keyboard.h>

int red = 2;  				// Connect a button to pin 2
int yellow = 3;  			// Connect a button to pin 3
int blue = 4;  				// Connect a button to pin 4
int green = 5;  			// Connect a button to pin 5
int joyPin1 = 0;            // Connect y-axis output from joy stick to analog pin 0
int value1 = 0;             // variable to read the value from the analog pin 0
int cruise = 8;				// Connect a button to pin 8
int acc = 6;				// Connect a button to pin 6
int ret = 7;				// Connect a button to pin 7
int cruise_resume=9;		// Connect a button to pin 9
int menu=16;				// Connect a button to pin 16
int save=10;				// Connect a button to pin 10
int full=14;				// Connect a button to pin 14
int hand=15;				// Connect a button to pin 15

void setup()
{
  pinMode(red, INPUT);  // Set the button as an input
  digitalWrite(red, HIGH);  // Pull the button high
    pinMode(yellow, INPUT);  // Set the button as an input
  digitalWrite(yellow, HIGH);  // Pull the button high
    pinMode(green, INPUT);  // Set the button as an input
  digitalWrite(green, HIGH);  // Pull the button high
    pinMode(blue, INPUT);  // Set the button as an input
  digitalWrite(blue, HIGH);  // Pull the button high
    pinMode(cruise, INPUT);  // Set the button as an input
  digitalWrite(cruise, HIGH);  // Pull the button high
    pinMode(acc, INPUT);  // Set the button as an input
  digitalWrite(acc, HIGH);  // Pull the button high
    pinMode(ret, INPUT);  // Set the button as an input
  digitalWrite(ret, HIGH);  // Pull the button high
      pinMode(cruise_resume, INPUT);  // Set the button as an input
  digitalWrite(cruise_resume, HIGH);  // Pull the button high
   pinMode(menu, INPUT);  // Set the button as an input
  digitalWrite(menu, HIGH);  // Pull the button high
  pinMode(save, INPUT);  // Set the button as an input
  digitalWrite(save, HIGH);  // Pull the button high
    pinMode(full, INPUT);  // Set the button as an input
  digitalWrite(full, HIGH);  // Pull the button high
  pinMode(hand, INPUT);  // Set the button as an input
  digitalWrite(hand, HIGH);  // Pull the button high
}

void loop()
{
  if (digitalRead(red) == 0)  // if the button goes low
  {
    Keyboard.write('e');  // start engine
    delay(1000);  // delay
  }
   if (digitalRead(yellow) == 0)  // if the button goes low
  {
    Keyboard.write('p');  // wipers
    delay(1000);  // delay 
  }
   if (digitalRead(blue) == 0)  // if the button goes low
    {
    Keyboard.write('l');  // lights
    delay(500);  // delay 
  }
  if (digitalRead(full) == 0)  // if the button goes low
    {
    Keyboard.write('k');  // lights full beam
    delay(500);  // delay 
  }
   if (digitalRead(cruise) == 0)  // if the button goes low
    {
    Keyboard.write('c');  // start cruise control
    delay(500);  // delay 
  }
   if (digitalRead(cruise_resume) == 0)  // if the button goes low
    {
    Keyboard.write('*');  // resume cruise control
    delay(500);  // delay 
  }
  if (digitalRead(hand) == 0)  // if the button goes low
    {
    Keyboard.write(' ');  // resume cruise control
    delay(500);  // delay 
  }
  if (digitalRead(menu) == 0)  // if the button goes low
    {
    Keyboard.write(',');  // resume cruise control
    delay(500);  // delay 
  }
  if (digitalRead(save) == 0)  // if the button goes low
    {
    Keyboard.write('.');  // resume cruise control
    delay(500);  // delay 
  }
   if (digitalRead(acc) == 0)  // if the button goes low
    {
    Keyboard.write('=');  // speed up
    delay(500);  // delay 
  }
   if (digitalRead(ret) == 0)  // if the button goes low
    {
    Keyboard.write('-');  // slow down
    delay(500);  // delay 
    
  }
  if (digitalRead(green) == 0)  // if the button goes low
  {
    Keyboard.press('h');  // horn
    delay(500);  // delay 
    Keyboard.release('h');
    delay(200);
  }
   value1 = analogRead(joyPin1);   
  delay(100);       
  if (value1 < 505)  // if the value is less than 505 (ie down)
  {
    Keyboard.press('0');  // 
    delay(500);  // delay 
    Keyboard.release('0');
  } 
  if (value1 > 515)  // if the value is more than 515 (ie up)
  {
    Keyboard.press('9');  // 
    delay(500);  // delay 
    Keyboard.release('9');
  } 
}
