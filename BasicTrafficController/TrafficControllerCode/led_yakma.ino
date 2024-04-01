#define wayLedRed 13
#define wayLedYellow 12
#define wayLedGreen 11

#define crossWalkGreen 3
#define crossWalkRed 2


void setup()
{
  pinMode(wayLedRed, OUTPUT);
  pinMode(wayLedYellow, OUTPUT);
  pinMode(wayLedGreen, OUTPUT);
  pinMode(crossWalkGreen, OUTPUT);
  pinMode(crossWalkRed, OUTPUT);
}


void changeLights(uint8_t redWay, uint8_t yellowWay, uint8_t greenWay, uint8_t redcrossWalk, uint8_t greencrossWalk, int second)
{
  digitalWrite(wayLedRed, redWay);
  digitalWrite(wayLedYellow, yellowWay);
  digitalWrite(wayLedGreen, greenWay);
  digitalWrite(crossWalkGreen, greencrossWalk);
  digitalWrite(crossWalkRed, redcrossWalk);
  delay(second);
}


void loop()
{
  changeLights(HIGH, LOW, LOW, LOW, HIGH, 8000);  
  changeLights(LOW, HIGH, LOW, HIGH, LOW, 2000);
  changeLights(LOW, LOW, HIGH, HIGH, LOW, 6000);
  changeLights(LOW, HIGH, LOW, HIGH, LOW, 2000);
  changeLights(HIGH, LOW, LOW, HIGH, LOW, 2000);
}