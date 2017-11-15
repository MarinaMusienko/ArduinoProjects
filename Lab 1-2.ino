int switchState = 0;
void setup(){
pinMode(3,OUTPUT);  // 3 порт на платі вихідний
pinMode(4, OUTPUT); // 4 порт на платі вихідний
pinMode(5, OUTPUT); // 5 порт на платі вихідний
pinMode(2, INPUT); // 2 порт на платі вхідний
} 
void loop(){
switchState = digitalRead(2);
if(switchState = =LOW){ // умова, якщо кнопка не натиснута, то всі діоди вимкнуті
digitalWrite(3,LOW);
//зелений світлодіод
digitalWrite(4,LOW);
// червоний світлодіод
digitalWrite(5,LOW);
// червоний світлодіод
} 
else{ // кнопка натиснута, всі діоди горять
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
}
} //повернення до початку циклу

