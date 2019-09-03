#include <Arduino.h>
#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include <OneWire.h>
#include <DallasTemperature.h>
LiquidCrystal_I2C lcd(0x27,20,4);
OneWire  onewire(PB8);
DallasTemperature sensors(&onewire);
volatile int state = LOW;
void blink()
{
  state = !state;
}
void setup(void)
{
  attachInterrupt(0,blink,FALLING);
  sensors.begin();
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
  pinMode(PA11,INPUT_PULLUP);
  pinMode(PA12,INPUT_PULLUP);
  pinMode(PA15,INPUT_PULLUP);
  pinMode(PB3,INPUT_PULLUP);
  pinMode(PA0,OUTPUT);
  pinMode(PA1,OUTPUT);
  pinMode(PA2,OUTPUT);
  pinMode(PA3,OUTPUT);
  pinMode(PA4,OUTPUT);
  pinMode(PA5,OUTPUT);
  pinMode(PA6,OUTPUT);
  pinMode(PA7,OUTPUT);
  pinMode(PB0,OUTPUT);
  pinMode(PB1,OUTPUT);
  pinMode(PB10,OUTPUT);
  pinMode(PB11,OUTPUT);
  pinMode(PB12,OUTPUT);
  pinMode(PB13,OUTPUT);
  pinMode(PB14,OUTPUT);
  pinMode(PB15,OUTPUT);
  pinMode(PC14,INPUT_PULLUP);
  pinMode(PA10,INPUT_PULLUP);
  pinMode(PC13,OUTPUT);
  // pinMode(PB8,INPUT);
  digitalWrite(PC13,HIGH);
}
void owr2(void)//开窗
{
  for (int count = 0; count < 100; count++)
  {
      digitalWrite(PA0,HIGH);
      digitalWrite(PA1,LOW);
      digitalWrite(PA2,LOW);
      digitalWrite(PA3,LOW);
      delay(20);
      digitalWrite(PA0,LOW);
      digitalWrite(PA1,HIGH);
      digitalWrite(PA2,LOW);
      digitalWrite(PA3,LOW);
      delay(20);
      digitalWrite(PA0,LOW);
      digitalWrite(PA1,LOW);
      digitalWrite(PA2,HIGH);
      digitalWrite(PA3,LOW);
      delay(20);
      digitalWrite(PA0,LOW);
      digitalWrite(PA1,LOW);
      digitalWrite(PA2,LOW);
      digitalWrite(PA3,HIGH);
      delay(20);
    }
  }
void cwr2(void)//关窗
{
  for (int count = 0; count < 100; count++)
  {
    digitalWrite(PA3,HIGH);
    digitalWrite(PA2,LOW);
    digitalWrite(PA1,LOW);
    digitalWrite(PA0,LOW);
    delay(10);
    digitalWrite(PA3,LOW);
    digitalWrite(PA2,HIGH);
    digitalWrite(PA1,LOW);
    digitalWrite(PA0,LOW);
    delay(10);
    digitalWrite(PA3,LOW);
    digitalWrite(PA2,LOW);
    digitalWrite(PA1,HIGH);
    digitalWrite(PA0,LOW);
    delay(10);
    digitalWrite(PA3,LOW);
    digitalWrite(PA2,LOW);
    digitalWrite(PA1,LOW);
    digitalWrite(PA0,HIGH);
    delay(10);
  }
}
void owr1(void)//开窗
{
  for (int count = 0; count < 100; count++)
  {
    digitalWrite(PA4,HIGH);
    digitalWrite(PA5,LOW);
    digitalWrite(PA6,LOW);
    digitalWrite(PA7,LOW);
    delay(10);
    digitalWrite(PA4,LOW);
    digitalWrite(PA5,HIGH);
    digitalWrite(PA6,LOW);
    digitalWrite(PA7,LOW);
    delay(10);
    digitalWrite(PA4,LOW);
    digitalWrite(PA5,LOW);
    digitalWrite(PA6,HIGH);
    digitalWrite(PA7,LOW);
    delay(10);
    digitalWrite(PA4,LOW);
    digitalWrite(PA5,LOW);
    digitalWrite(PA6,LOW);
    digitalWrite(PA7,HIGH);
    delay(10);
  }  
}
void cwr1(void)//关窗
{
  for (int count = 0; count < 100; count++)
  {
    digitalWrite(PA7,HIGH);
    digitalWrite(PA6,LOW);
    digitalWrite(PA5,LOW);
    digitalWrite(PA4,LOW);
    delay(10);
    digitalWrite(PA7,LOW);
    digitalWrite(PA6,HIGH);
    digitalWrite(PA5,LOW);
    digitalWrite(PA4,LOW);
    delay(10);
    digitalWrite(PA7,LOW);
    digitalWrite(PA6,LOW);
    digitalWrite(PA5,HIGH);
    digitalWrite(PA4,LOW);
    delay(10);
    digitalWrite(PA7,LOW);
    digitalWrite(PA6,LOW);
    digitalWrite(PA5,LOW);
    digitalWrite(PA4,HIGH);
    delay(10);
  }
}void owl1(void)//开窗
{
  for (int count = 0; count < 100; count++)
  {
    digitalWrite(PB0,HIGH);
    digitalWrite(PB1,LOW);
    digitalWrite(PB10,LOW);
    digitalWrite(PB11,LOW);
    delay(10);
    digitalWrite(PB0,LOW);
    digitalWrite(PB1,HIGH);
    digitalWrite(PB10,LOW);
    digitalWrite(PB11,LOW);
    delay(10);
    digitalWrite(PB0,LOW);
    digitalWrite(PB1,LOW);
    digitalWrite(PB10,HIGH);
    digitalWrite(PB11,LOW);
    delay(10);
    digitalWrite(PB0,LOW);
    digitalWrite(PB1,LOW);
    digitalWrite(PB10,LOW);
    digitalWrite(PB11,HIGH);
    delay(10);
  }
}
void cwl1(void)//关窗
{
  for (int count = 0; count < 100; count++)
  {
    digitalWrite(PB11,HIGH);
    digitalWrite(PB10,LOW);
    digitalWrite(PB0,LOW);
    digitalWrite(PB1,LOW);
    delay(10);
    digitalWrite(PB11,LOW);
    digitalWrite(PB10,HIGH);
    digitalWrite(PB0,LOW);
    digitalWrite(PB1,LOW);
    delay(10);
    digitalWrite(PB11,LOW);
    digitalWrite(PB10,LOW);
    digitalWrite(PB0,HIGH);
    digitalWrite(PB1,LOW);
    delay(10);
    digitalWrite(PB11,LOW);
    digitalWrite(PB10,LOW);
    digitalWrite(PB0,LOW);
    digitalWrite(PB1,HIGH);
    delay(10);
  }
}
void owl2(void)//开窗
{
  for (int count = 0; count < 100; count++)
  {
    digitalWrite(PB12,HIGH);
    digitalWrite(PB13,LOW);
    digitalWrite(PB14,LOW);
    digitalWrite(PB15,LOW);
    delay(10);
    digitalWrite(PB12,LOW);
    digitalWrite(PB13,HIGH);
    digitalWrite(PB14,LOW);
    digitalWrite(PB15,LOW);
    delay(10);
    digitalWrite(PB12,LOW);
    digitalWrite(PB13,LOW);
    digitalWrite(PB14,HIGH);
    digitalWrite(PB15,LOW);
    delay(10);
    digitalWrite(PB12,LOW);
    digitalWrite(PB13,LOW);
    digitalWrite(PB14,LOW);
    digitalWrite(PB15,HIGH);
    delay(10);
  }
}
void cwl2(void)//关窗
{
  for (int count = 0; count < 100; count++)
  {
    digitalWrite(PB15,HIGH);
    digitalWrite(PB14,LOW);
    digitalWrite(PB13,LOW);
    digitalWrite(PB12,LOW);
    delay(10);
    digitalWrite(PB15,LOW);
    digitalWrite(PB14,HIGH);
    digitalWrite(PB13,LOW);
    digitalWrite(PB12,LOW);
    delay(10);
    digitalWrite(PB15,LOW);
    digitalWrite(PB14,LOW);
    digitalWrite(PB13,HIGH);
    digitalWrite(PB12,LOW);
    delay(10);
    digitalWrite(PB15,LOW);
    digitalWrite(PB14,LOW);
    digitalWrite(PB13,LOW);
    digitalWrite(PB12,HIGH);
    delay(10);
  }
}
void loop(void)
{
  // if(digitalRead(PC14) == LOW)
  // {
  //   //state = !state;
  //   if(digitalRead(PA11) == LOW)
  //   {
  //     state = !state;
  //     owr2();
  //   }
  //   else
  //   {
  //     state = !state;
  //     cwr2();
  //   }
  //   if(digitalRead(PA12) == LOW)
  //   {
  //     state = !state;
  //     owr1();
  //   }
  //   else
  //   {
  //     state = !state;
  //     cwr1();
  //   }
  //   if(digitalRead(PA15) == LOW)
  //   {
  //     state = !state;
  //     owl1();
  //   }
  //   else
  //   {
  //     state = !state;
  //     cwl1();
  //   }
  //   if(digitalRead(PB3) == LOW)
  //   {
  //     state = !state;
  //     owl2();
  //   }
  //   else
  //   {
  //     state = !state;
  //     cwl2();
  //   }
  // }
  // else
  // {
  //   state = !state;
  // }
  state = !state;
  noInterrupts();
  if(digitalRead(PA10) == LOW)
  {
    digitalWrite(PC13,LOW);
  }
  else
  {
    digitalWrite(PC13,HIGH);
  }
  sensors.requestTemperatures(); 
  lcd.setCursor(0,0);                //设置显示指针
  lcd.print("elsius:");     //输出字符到LCD上
  lcd.setCursor(0,1);
  float c = sensors.getTempCByIndex(0);
  float f = sensors.getTempFByIndex(0);
  lcd.print(c);
  lcd.setCursor(0,2);
  lcd.print("Fahrenheit:");
  lcd.setCursor(0,3);
  lcd.print(f);
  delay(100);
}