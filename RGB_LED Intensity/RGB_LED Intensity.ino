#include <LiquidCrystal.h>

#define threshold1 250
#define threshold2 350
#define threshold3 410
#define threshold4 530
#define threshold5 620 
#define threshold6 710
#define threshold7 880

int val = 0; // A Variable to Store the Light Value from the LDR  

// initialize the library with the numbers of the interface pins from the above pin mappings
LiquidCrystal lcd(8,9,10,11,12,13); // induino lcd pin mappping

void setup() {
lcd.begin(16, 2); //setup lcd with number of characters per line and lines
}

void loop() 
{

lcd.clear();//Clears the Display - If you don't clear, previous data will remain as it is
int ldr_val = analogRead(3); // read the LDR value
lcd.print("Intensity : "); // lcd.print to print to the LCD Shield
lcd.print(ldr_val); // printing the ldr value

delay(100); // wait before refreshing the value

val = analogRead(3);// Reads a 10-bit value corresponding to the voltage applied on analog input pin 3.  


if(val > threshold1)
analogWrite(3,85);
else  
analogWrite(3,10); 

if(val > threshold2)  
analogWrite(5,90); 
else 
analogWrite(5,10);

if(val > threshold3) 
analogWrite(6,100); 
else  
analogWrite(6,10);

if(val > threshold4)
analogWrite(3,190);
else
analogWrite(5,10);

if(val > threshold5)
analogWrite(5,200);
else
analogWrite(6,10);

if(val > threshold6)  
analogWrite(6,210); 
else  
analogWrite(3,10); 

}
