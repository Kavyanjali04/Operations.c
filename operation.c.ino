void setup()  {

}
void loop() {
Serial.begin(9600);
  int a,b,c,d,e,f,g;
  a=5,b=7;
  c=a+b;
  d=a-b;
  e=a*b;
  f=a/b;
  g=a%b;
  Serial.println(c);
  Serial.println(d); 
  Serial.println(e); 
  Serial.println(f);
  Serial.println(g);

}