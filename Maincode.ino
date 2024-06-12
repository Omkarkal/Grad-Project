const int fi = A0;
const int fr = A2;
const int fm = A1;

int index = 0;
int ring = 0;
int middle = 0;

int RPWM1=7;
int LPWM1=8;

int L_EN1=4;
int R_EN1=11;

int RPWM2=6;
int LPWM2=5;

int L_EN2=8;
int R_EN2=9;

int speed = 70; // adjust from 0 min to 255 max

void setup() 
{
    Serial.begin(9600);
    pinMode(RPWM1, OUTPUT);
    pinMode(LPWM1, OUTPUT);
    pinMode(L_EN1, OUTPUT);
    pinMode(R_EN1, OUTPUT);

    pinMode(RPWM2, OUTPUT);
    pinMode(LPWM2, OUTPUT);
    pinMode(L_EN2, OUTPUT);
    pinMode(R_EN2, OUTPUT);
    

    digitalWrite(L_EN1, LOW);
    digitalWrite(R_EN1, LOW);
    analogWrite(RPWM1, 0);
    analogWrite(LPWM1, 0);

    digitalWrite(L_EN2, LOW);
    digitalWrite(R_EN2, LOW);
    analogWrite(RPWM2, 0);
    analogWrite(LPWM2, 0);
}



void loop() 
{
  index = analogRead(A0);
  ring = analogRead(A2);
  middle = analogRead(A1);

  if(index <= 80 && ring > 90)
  {
    //Forward
    digitalWrite(R_EN1, HIGH);
    digitalWrite(L_EN1, HIGH);

    digitalWrite(R_EN2, HIGH);
    digitalWrite(L_EN2, HIGH);

    //r
    analogWrite(RPWM1, 130);
    analogWrite(LPWM1, 0);
    //l
    analogWrite(RPWM2, 100);
    analogWrite(LPWM2, 0);

  }

  else if(index > 80 && ring <= 90)
  {
    //Reverse
    digitalWrite(R_EN1, HIGH);
    digitalWrite(L_EN1, HIGH);

    digitalWrite(R_EN2, HIGH);
    digitalWrite(L_EN2, HIGH);
    
    //r
    analogWrite(RPWM1, 0);
    analogWrite(LPWM1, 130);
    //l
    analogWrite(RPWM2, 0);
    analogWrite(LPWM2, 100);
  }
  else if(middle > 512)
  {
    //Reverse
    digitalWrite(R_EN1, HIGH);
    digitalWrite(L_EN1, HIGH);

    digitalWrite(R_EN2, HIGH);
    digitalWrite(L_EN2, HIGH);
    
    //r
    analogWrite(RPWM1, 130);
    analogWrite(LPWM1, 0);
    //l
    analogWrite(RPWM2, 0);
    analogWrite(LPWM2, 100);
  }

  else
  {
    //Stop
    digitalWrite(R_EN1, LOW);
    digitalWrite(L_EN1, LOW);

    digitalWrite(R_EN2, LOW);
    digitalWrite(L_EN2, LOW);

    analogWrite(RPWM1, 0);
    analogWrite(LPWM1, 0);

    analogWrite(RPWM2, 0);
    analogWrite(LPWM2, 0);
  }
  
}
