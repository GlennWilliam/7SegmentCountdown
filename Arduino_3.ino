void setup() {
  // put your setup code here, to run once:
  // A -> 2
  // B -> 3
  // C -> 4
  // D -> 5
  // E -> 6
  // F -> 7
  // G -> 8

  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  
}

void loop() {
  for (int i = 9; i >= 0; i--) {
    displayNumber(i);
    delay(1500);
  }
}

void displayNumber(int x){
  switch(x){
    case 0:
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      break;

    case 1:
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH); 
      break;
    
    case 2:
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(8,LOW);
      break;

    case 3:
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,LOW);
      break;
    
    case 4:
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      break;

    case 5:
      digitalWrite(2,LOW);
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      break;
    
    case 6:
      digitalWrite(2,LOW);
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      break;

    case 7:
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      break;

    case 8:
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      break;

    case 9:
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      break;
  }
  
}
 

  

  

  
 
  
 
  
