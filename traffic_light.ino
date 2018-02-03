int red = 10;
int yellow = 9;
int green = 8;
int button = 12;

void setup(){
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT):
  pinMode (botton, INPUT);
  digitalWrite (green, HIGH); // initally set the light to green, until someone put the button 
}

void loop(){
  if (digitalRead (button) == HIGH){
    delay(15) // software debounce
    if (digitRead (button) == HIGH){
      // button is pushed down
      changeLight ();
      delay (10000); // then wait 10s
    }
  }
}

void changeLight(){
  // turn off green, yellow on for 2s
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay (2000);

  // turn off yellow, red on for 5s
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  delay (5000);

  // red and yellow both on for 2s
  digitalWrite (yellow, HIGH);
  delay(2000);

  // turn off red and yellow, turn green back on
  digitalWrite (yellow, LOW);
  digitalWrite (red, LOW);
  digitalWrite (green, HIGH);
  delay (3000);
  
  
}

