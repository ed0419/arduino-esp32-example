int led[4] = {4, 0, 2, 15};
int Status = 0;
int i = 0;
void setup() {
  pinMode(4, OUTPUT);
  pinMode(0, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(36, INPUT);
  pinMode(39, INPUT);
  pinMode(34, INPUT);
  pinMode(35, INPUT);
  Serial.begin(9600);
 
}

void loop() {
    if (digitalRead(36)==0){
      if (Status==0){
        Serial.println("移動中");
        digitalWrite(led[i], 1);
        Status=1;
      }
      else if (Status==1){
        digitalWrite(led[i], 0);
        Serial.println("移動結束");
        i = i + 1;
        Status=0;
      }
      delay(500);
    }
    if (i>3){
      i = 0;
    }
}
