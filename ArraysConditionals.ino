
int dataVal[] = {20, 70, 44, 61, 50, 31, 6};
String dataName[] = {"tina","tim","nick","ali","fred","jia","sasha"};   
int dataCount = 7;   

void setup() {
  // the array elements are numbered from 0 to (dataCount - 1).
  // use a for loop to print each item of the array
  
  for (int dataNum = 0; dataNum < dataCount; dataNum++) {
    Serial.print(dataName[dataNum]);
    Serial.print(" is ");  
    Serial.print(dataVal[dataNum]);
    Serial.println(" years old.");
  
  }
}

void loop() {
//test your data and print different messages based on this: 

 for (int dataNum = 0; dataNum < dataCount; dataNum++) {
if (dataVal[dataNum]>18) {
  Serial.print(dataName[dataNum]); 
  Serial.println("is more than 18 years old"); 
}
}
}
