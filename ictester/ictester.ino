int delayms=0;
void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() 
{
  // put your main code here, to run repeatedly:
    IC7400();//**7403**quad two input nand gate
    IC7401();//quad two input nand gate but different pins
    IC7402();//quad two input nor gate
    IC7404();//**7405**hex inverter
    IC7408();//**7409**quad two input and gate
    IC7410();//**7412**tri three input nand gate
    IC7411();//**7415**tri three input and gate
    IC7420();//**7422**twice four input nand gate
    IC7421();//twice four input and gate
    IC7427();//tri three input nor gate
    IC7430();//eight input nandgate
    IC7432();//quad two input or gate
    IC7436();//quad two input nor gate
    IC7442();//active low BCD to Decimal decoder
    IC7445();//
    IC7450();//dual 2-wide 2-input AND-OR-invert gate (one gate expandable)
    IC7473();//dual positive edge triggered J-K flip-flop with clear
    IC7474();//dual D positive edge triggered flip-flop with preset and clear
    IC7475();//4 bit bistable latch 16 pin IC
    IC7476();//dual jk flipflop with preset and clear
    IC7477();//4 bit bistable Latch 14 pin IC
    
    IC7486();//quad 2-input XOR gate
    IC74133();//13 input nand gate
    IC4072();//Dual 4-input OR gate
    IC4000();//Dual 3-input NOR gate + 1 Inverter
    IC4002();//Dual 4-input NOR gate
    IC4001();//Quad 2-input NOR gate
    IC4012();//Dual 4-input NAND gate
    IC4013();//Dual D-type flip-flop
    IC4069();//Hex inverter


    IC4023();//Triple 3-input NAND gate
    IC4025();//Triple 3-input NOR gate
    IC4027();//Dual JK flip-flop

    show("NOT_found");
    while(true){
      ;
    }
    
    
}
//functions----
//andOrInvert()
//andgate(i/p,i/p,o/p)
//threeAnd()
//nandgate(i/p,i/p,o/p)
//threeNand()
//fournand(i/p,i/p,i/p,i/p,o/p)
//eightNand()
//fouror()
//threeNor()
//orgate()
//norgate()
//fourand()
//fourAndWII()
//fourNandWII()
//fournor()
//notgate()
//xorgate()
//clock(int n)
//thirteen_Nand()
//dLatch(d,clock,q,q_)
//DLatch(d,clock,q)
//jk_ff_neg_with_invert_clear(int j,int k,int clk,int clr,int q,int q_)
//jk_ff_pos_with_invert_clear(int j,int k,int clk,int clr,int q,int q_)
//jk_Latch_with_preset_and_clear(int j,int k,int clk,int clr,int pre,int q,int q_)
//jk_Latch_with_inverted_preset_and_clear(int j,int k,int clk,int clr,int pre,int q,int q_)
//d_pos_trig_ff_with_pre_clr(int d,int clk,int clr,int pre,int q,int q_)
//jk_ff_pos_with_pre_clr(int j,int k,int clk,int pre,int clr,int q,int q_)

void show(char x[ ])
{
  Serial.println(x);
}
void IC7401()
{ 
  pinMode(7,OUTPUT);
  pinMode(14,OUTPUT);
  digitalWrite(7,LOW);
  digitalWrite(14,HIGH);
  bool a,b,c,d;
  a=nandgate(pin(2),pin(3),pin(1));
  b=nandgate(pin(5),pin(6),pin(4));
  c=nandgate(pin(11),pin(12),pin(13));
  d=nandgate(pin(8),pin(9),pin(10));
  if(a==true && b==true && c==true && d==true){
    show("IC7401");
    while(true){
      ; 
    }
  }
}
void IC7402(){
  pinMode(7,OUTPUT);
  pinMode(14,OUTPUT);
  digitalWrite(7,LOW);
  digitalWrite(14,HIGH);
  bool a,b,c,d;
  a=norgate(pin(2),pin(3),pin(1));
  b=norgate(pin(5),pin(6),pin(4));
  c=norgate(pin(11),pin(12),pin(13));
  d=norgate(pin(8),pin(9),pin(10));
  if(a==true && b==true && c==true && d==true){
    show("IC7402");
    while(true){
      ; 
    }
  }
}
void IC7408(){
  pinMode(7,OUTPUT);
  pinMode(14,OUTPUT);
  digitalWrite(7,LOW);
  digitalWrite(14,HIGH);
  bool a,b,c,d;
  a=andgate(pin(2),pin(1),pin(3));
  b=andgate(pin(5),pin(4),pin(6));
  c=andgate(pin(13),pin(12),pin(11));
  d=andgate(pin(10),pin(9),pin(8));
  if(a==true && b==true && c==true && d==true){
    show("IC7408 Or IC7409");
    while(true){
      ; 
    }
  }
}
void IC7410(){
  pinMode(7,OUTPUT);
  pinMode(14,OUTPUT);
  digitalWrite(7,LOW);
  digitalWrite(14,HIGH);
 bool a,b,c;
 a=threeNand(pin(1),pin(2),pin(13),pin(12));
 Serial.println(a);
 b=threeNand(pin(3),pin(4),pin(5),pin(6));
 Serial.println(b);
 c=threeNand(pin(9),pin(10),pin(11),pin(8));
 Serial.println(c);
 if(a==true && b==true && c==true){
  show("IC7410 or IC7412");
  while(true){
    ;
  }
 }
}
void IC7411(){
  pinMode(7,OUTPUT);
  pinMode(14,OUTPUT);
  digitalWrite(7,LOW);
  digitalWrite(14,HIGH);
 bool a,b,c;
 a=threeAnd(pin(1),pin(2),pin(13),pin(12));
 b=threeAnd(pin(3),pin(4),pin(5),pin(6));
 c=threeAnd(pin(9),pin(10),pin(11),pin(8));
 if(a==true && b==true && c==true){
  show("IC7411 or IC7415");
  while(true){
    ;
  }
 }
}
void IC4072()
{
  pinMode(7,OUTPUT);
  pinMode(14,OUTPUT);
  digitalWrite(7,LOW);
  digitalWrite(14,HIGH);
  bool x,y;
  x=fouror(pin(2),pin(3),pin(4),pin(5),pin(1));
  y=fouror(pin(9),pin(10),pin(11),pin(12),pin(13));
  
  if (x==true && y==true)
  {
    show("IC4072");
    while (true)
    {
      ;
    }
  }
}
void IC7400()
{ 
  pinMode(7,OUTPUT);
  pinMode(14,OUTPUT);
  digitalWrite(7,LOW);
  digitalWrite(14,HIGH);
  bool a,b,c,d;
  a=nandgate(pin(1),pin(2),pin(3));
  b=nandgate(pin(4),pin(5),pin(6));
  c=nandgate(pin(9),pin(10),pin(8));
  d=nandgate(pin(12),pin(13),pin(11));
  if (a==true&& b==true&& c==true&& d==true)
  {
    show(" IC7400 Or 7403");
    while (true)
    {
      ;
    }
  }
}
void IC7404()
{
  pinMode(7,OUTPUT);
  pinMode(14,OUTPUT);
  digitalWrite(7,LOW);
  digitalWrite(14,HIGH);
  bool a,b,c,d,e,f;
  a=notgate(pin(1),pin(2));
  b=notgate(pin(3),pin(4));
  c=notgate(pin(5),pin(6));
  d=notgate(pin(13),pin(12));
  e=notgate(pin(11),pin(10));
  f=notgate(pin(9),pin(8));
  if(a==true && b==true && c==true && d==true && e==true && f==true){
    show("IC7404 Or 7405 or 4069");
    while(true){
      ;
    }
  }
}
void IC7420()
{ 
  pinMode(7,OUTPUT);
  pinMode(14,OUTPUT);
  digitalWrite(7,LOW);
  digitalWrite(14,HIGH);
  bool a,b;
  a=fournand(pin(1),pin(2),pin(4),pin(5),pin(6));
  b=fournand(pin(13),pin(12),pin(10),pin(9),pin(8));
  if(a==true && b==true){
    show("IC7420 or IC7422");
    while(true)
    {
      ;
    }
  }
}
void IC7421()
{ 
  pinMode(7,OUTPUT);
  pinMode(14,OUTPUT);
  digitalWrite(7,LOW);
  digitalWrite(14,HIGH);
  bool a,b;
  a=fourand(pin(1),pin(2),pin(4),pin(5),pin(6));
  b=fourand(pin(13),pin(12),pin(10),pin(9),pin(8));
  if(a==true && b==true){
    show("IC7421");
    while(true)
    {
      ;
    }
  }
}
void IC7427(){
  pinMode(7,OUTPUT);
  pinMode(14,OUTPUT);
  digitalWrite(7,LOW);
  digitalWrite(14,HIGH);
 bool a,b,c;
 a=threeNor(pin(1),pin(2),pin(13),pin(12));
 b=threeNor(pin(3),pin(4),pin(5),pin(6));
 c=threeNor(pin(9),pin(10),pin(11),pin(8));
 if(a==true && b==true && c==true){
  show("IC7427");
  while(true){
    ;
  }
 }
}
void IC7430(){
   pinMode(7,OUTPUT);
  pinMode(14,OUTPUT);
  digitalWrite(7,LOW);
  digitalWrite(14,HIGH);
  bool a;
  a=eightNand(pin(1),pin(2),pin(3),pin(4),pin(5),pin(6),pin(11),pin(12),pin(8));
  if (a==true){
    show("IC7430");
    while(true){
    ;
    }
  }
}
void IC7432(){
  pinMode(7,OUTPUT);
  pinMode(14,OUTPUT);
  digitalWrite(7,LOW);
  digitalWrite(14,HIGH);
  bool a,b,c,d;
  a=orgate(pin(1),pin(2),pin(3));
  b=orgate(pin(4),pin(5),pin(6));
  c=orgate(pin(10),pin(9),pin(8));
  d=orgate(pin(13),pin(12),pin(11));
  if(a==true && b==true && c==true && d==true){
    show("IC7432");
    while(true){
      ;
    }
  }
}
void IC7436(){
  pinMode(7,OUTPUT);
  pinMode(14,OUTPUT);
  digitalWrite(7,LOW);
  digitalWrite(14,HIGH);
  bool a,b,c,d;
  a=norgate(pin(1),pin(2),pin(3));
  b=norgate(pin(4),pin(5),pin(6));
  c=norgate(pin(10),pin(9),pin(8));
  d=norgate(pin(13),pin(12),pin(11));
  if(a==true && b==true && c==true && d==true){
    show("IC7436");
    while(true){
      ;
    }
  }
}
void IC7442(){
  pinMode(pin(8),OUTPUT);
  pinMode(pin(16),OUTPUT);
  digitalWrite(pin(8),0);
  digitalWrite(pin(16),1);
  bool y_0,y_1,y_2,y_3,y_4,y_5,y_6,y_7,y_8,y_9;
  y_0=fourNandWII(pin(15),pin(14),pin(13),pin(12),pin(1),0,0,0,0);
  y_1=fourNandWII(pin(15),pin(14),pin(13),pin(12),pin(2),0,0,0,1);
  y_2=fourNandWII(pin(15),pin(14),pin(13),pin(12),pin(3),0,0,1,0);
  y_3=fourNandWII(pin(15),pin(14),pin(13),pin(12),pin(4),0,0,1,1);
  y_4=fourNandWII(pin(15),pin(14),pin(13),pin(12),pin(5),0,1,0,0);
  y_5=fourNandWII(pin(15),pin(14),pin(13),pin(12),pin(6),0,1,0,1);
  y_6=fourNandWII(pin(15),pin(14),pin(13),pin(12),pin(7),0,1,1,0);
  y_7=fourNandWII(pin(15),pin(14),pin(13),pin(12),pin(9),0,1,1,1);
  y_8=fourNandWII(pin(15),pin(14),pin(13),pin(12),pin(10),1,0,0,0);
  y_9=fourNandWII(pin(15),pin(14),pin(13),pin(12),pin(11),1,0,0,1);
  if(y_0 == true && y_1 == true && y_2 == true && y_3 == true && y_4 == true && y_5 == true && y_6 == true && y_7 == true && y_8 == true &&y_9 == true){
    show("IC7442");
    while(true){
      ;
    }
  }
}
void IC7450(){
  pinMode(pin(7),OUTPUT);
  pinMode(pin(14),OUTPUT);
  digitalWrite(pin(7),0);
  digitalWrite(pin(14),1);
  bool a,b;
  a=andOrInvert(pin(1),pin(13),pin(10),pin(9),pin(8));
  b=andOrInvert(pin(2),pin(3),pin(4),pin(5),pin(6));
  if (a==true && b==true){
    show("IC7450");
    while(true){
      ;
    }
  }
}
void IC7473()
{
  pinMode(pin(4),OUTPUT);
  pinMode(pin(11),OUTPUT);
  digitalWrite(pin(4),HIGH);
  digitalWrite(pin(11),LOW);
  bool a,b;
  a=jk_ff_neg_with_invert_clear(pin(14),pin(3),pin(1),pin(2),pin(12),pin(13));
  b=jk_ff_neg_with_invert_clear(pin(7),pin(10),pin(5),pin(6),pin(9),pin(8));
  if (a==true && b==true)
  {
    show("IC7473");
    while(true)
    {
      ;
    }
  }
}
void IC7474()
{
  pinMode(pin(7),OUTPUT);
  pinMode(pin(14),OUTPUT);
  digitalWrite(pin(7),LOW);
  digitalWrite(pin(14),HIGH);
  bool a,b;
  a=d_pos_trig_ff_with_pre_clr(pin(2),pin(3),pin(1),pin(4),pin(5),pin(6));
  b=d_pos_trig_ff_with_pre_clr(pin(12),pin(11),pin(13),pin(10),pin(9),pin(8));
  if (a==true && b==true)
  {
    show("IC7474");
    while(true)
    {
      ;
    }
  }
}
void IC7475(){
  pinMode(5,OUTPUT);
  pinMode(12,OUTPUT);
  digitalWrite(5,HIGH);
  digitalWrite(12,LOW);
  bool a,b,c,d;
  a=dLatch(pin(2),pin(13),pin(16),pin(1));
  b=dLatch(pin(3),pin(13),pin(15),pin(14));
  c=dLatch(pin(6),pin(4),pin(10),pin(11));
  d=dLatch(pin(7),pin(4),pin(9),pin(8));
  if (a==true && b==true && c==true && d==true){
    show("IC7475");
    while(true){
      ;
    }
  }
}
void IC7476(){
  pinMode(pin(5),OUTPUT);
  pinMode(pin(13),OUTPUT);
  digitalWrite(pin(5),HIGH);
  digitalWrite(pin(13),LOW);
  bool a,b;
  a=jk_Latch_with_inverted_preset_and_clear(pin(4),pin(16),pin(1),pin(3),pin(2),pin(15),pin(14));
  b=jk_Latch_with_inverted_preset_and_clear(pin(9),pin(12),pin(6),pin(8),pin(7),pin(11),pin(10));
  if(a==true && b==true){
    show("IC7476");
    while(true){
      ;
    }
  }
}
void IC7477(){
  pinMode(pin(11),OUTPUT);
  pinMode(pin(4),OUTPUT);
  digitalWrite(pin(4),HIGH);
  digitalWrite(pin(11),LOW);
  bool a,b,c,d;
  a=DLatch(pin(1),pin(12),pin(14));
  b=DLatch(pin(2),pin(12),pin(13));
  c=DLatch(pin(5),pin(3),pin(9));
  d=DLatch(pin(6),pin(3),pin(8));
  if(a==true && b==true && c==true && d==true){
    show("IC7477");
    while(true){
      ;
    }
  }
}
void IC7486()
{
   pinMode(pin(7),OUTPUT);
  pinMode(pin(14),OUTPUT);
  digitalWrite(pin(7),LOW);
  digitalWrite(pin(14),HIGH);
  bool a,b,c,d;
  a=xorgate(pin(1),pin(2),pin(3));
  b=xorgate(pin(4),pin(5),pin(6));
  c=xorgate(pin(9),pin(10),pin(8));
  d=xorgate(pin(12),pin(13),pin(11));
  if(a==true && b==true && c==true && d==true)
  {
    show("IC7486");
    while(true)
    {
      ;
    }
  }
}
void IC74133(){
  pinMode(pin(8),OUTPUT);
  pinMode(pin(16),OUTPUT);
  digitalWrite(pin(8),LOW);
  digitalWrite(pin(16),HIGH);
  bool a;
  a=thirteen_Nand(pin(1),pin(2),pin(3),pin(4),pin(5),pin(6),pin(7),pin(10),pin(11),pin(12),pin(13),pin(14),pin(15),pin(9));
  if (a==true){
    show("IC74133");
    while(true){
      ;
    }
  }
}
void IC4000()
{
  pinMode(pin(7),OUTPUT);
  pinMode(pin(14),OUTPUT);
  digitalWrite(pin(7),LOW);
  digitalWrite(pin(14),HIGH);
  bool a,b,c;
  a=threeNand(pin(3),pin(4),pin(5),pin(6));
  b=threeNand(pin(11),pin(12),pin(13),pin(10));
  c=notgate(pin(8),pin(9));
  if(a==true && b==true && c==true)
  {
    show("IC4000");
    while(true)
    {
      ;
    }
  }
}
void IC4001()
{
  pinMode(pin(7),OUTPUT);
  pinMode(pin(14),OUTPUT);
  digitalWrite(pin(7),LOW);
  digitalWrite(pin(14),HIGH);
  bool a,b,c,d;
  a=norgate(pin(1),pin(2),pin(3));
  b=norgate(pin(5),pin(6),pin(4));
  c=norgate(pin(8),pin(9),pin(10));
  d=norgate(pin(12),pin(13),pin(11));
  if (a==true && b==true && c==true && d==true)
  {
    show("IC4001");
    while(true)
    {
      ;
    }
  }
}
void IC4002()
{
  pinMode(pin(7),OUTPUT);
  pinMode(pin(14),OUTPUT);
  digitalWrite(pin(7),LOW);
  digitalWrite(pin(14),HIGH);
  bool a,b;
  a=fournor(pin(2),pin(3),pin(4),pin(5),pin(1));
  b=fournor(pin(9),pin(10),pin(11),pin(12),pin(13));
  if (a==true && b==true)
  {
    show("IC4002");
    while(true)
    {
      ;
    }
  }
}
void IC4012()
{
  pinMode(pin(7),OUTPUT);
  pinMode(pin(14),OUTPUT);
  digitalWrite(pin(7),LOW);
  digitalWrite(pin(14),HIGH);
  bool a,b;
  a=fournand(pin(2),pin(3),pin(4),pin(5),pin(1));
  b=fournand(pin(9),pin(10),pin(11),pin(12),pin(13));
  if (a==true && b==true)
  {
    show("IC4012");
    while(true)
    {
      ;
    }
  }
}
void IC4013()
{
  pinMode(pin(7),OUTPUT);
  pinMode(pin(14),OUTPUT);
  digitalWrite(pin(7),LOW);
  digitalWrite(pin(14),HIGH);
  bool a,b;
  a=d_pos_trig_ff_with_pre_clr(pin(5),pin(3),pin(4),pin(6),pin(1),pin(2));
  b=d_pos_trig_ff_with_pre_clr(pin(9),pin(11),pin(10),pin(8),pin(13),pin(12));
  if (a==true && b==true)
  {
    show("IC4013");
    while(true)
    {
      ;
    }
  }
}
void IC4069()
{
  pinMode(pin(7),OUTPUT);
  pinMode(pin(14),OUTPUT);
  digitalWrite(pin(7),LOW);
  digitalWrite(pin(14),HIGH);
  bool a,b,c,d,e,f;
  a=notgate(pin(1),pin(2));
  b=notgate(pin(3),pin(4));
  c=notgate(pin(5),pin(6));
  d=notgate(pin(9),pin(8));
  e=notgate(pin(11),pin(10));
  f=notgate(pin(13),pin(12));
  if (a==true && b==true && c==true && d==true && e==true && f==true)
  {
    show("IC4069");
    while(true)
    {
      ;
    }
  }
}


void IC4023()
{
  pinMode(pin(7),OUTPUT);
  pinMode(pin(14),OUTPUT);
  digitalWrite(pin(7),LOW);
  digitalWrite(pin(14),HIGH);
  bool a,b,c;
  a=threeNand(pin(3),pin(4),pin(5),pin(6));
  b=threeNand(pin(11),pin(12),pin(13),pin(10));
  c=threeNand(pin(1),pin(2),pin(8),pin(9));
  if (a==true && b==true && c==true)
  {
    show("IC4023");
    while(true)
    {
      ;
    }
  }
}
void IC4025()
{
  pinMode(pin(7),OUTPUT);
  pinMode(pin(14),OUTPUT);
  digitalWrite(pin(7),LOW);
  digitalWrite(pin(14),HIGH);
  bool a,b,c;
  a=threeNor(pin(3),pin(4),pin(5),pin(6));
  b=threeNor(pin(11),pin(12),pin(13),pin(10));
  c=threeNor(pin(1),pin(2),pin(8),pin(9));
  if (a==true && b==true && c==true)
  {
    show("IC4025");
    while(true)
    {
      ;
    }
  }
}
void IC4027()
{
  pinMode(pin(8),OUTPUT);
  pinMode(pin(16),OUTPUT);
  digitalWrite(pin(8),LOW);
  digitalWrite(pin(16),HIGH);
  bool a,b;
  a=jk_ff_pos_with_pre_clr(pin(10),pin(11),pin(13),pin(9),pin(12),pin(15),pin(14));
  b=jk_ff_pos_with_pre_clr(pin(6),pin(5),pin(3),pin(7),pin(4),pin(1),pin(2));
  if (a==true && b==true)
  {
    show("IC4027");
    while(true)
    {
      ;
    }
  }
}


int pin(int n)
{
  n=n+21;
  return n;
}
boolean notgate(int inp,int outp)
{
  int flag=0;
  pinMode(inp,OUTPUT);
  pinMode(outp,INPUT);
  digitalWrite(inp,HIGH);
  delay(delayms);
  if (digitalRead(outp)==LOW)
  {
    flag=flag+1;
  }
  delay(delayms);
  digitalWrite(inp,LOW);
  delay(delayms);
  if (digitalRead(outp)==HIGH)
  {
    flag=flag+1;
  }
  if (flag==2)
  {
    return true;
  }
  else
  {
    return false;
  }
  
}


boolean andgate(int inp1,int inp2,int outp)
{
  int flag=0;
  pinMode(inp1,OUTPUT);
  pinMode(inp2,OUTPUT);
  pinMode(outp,INPUT);
  digitalWrite(inp1,HIGH);
  digitalWrite(inp2,HIGH);
  delay(delayms);
  if (digitalRead(outp)==HIGH)
  {
    flag=flag+1;
  }
  digitalWrite(inp1,HIGH);
  digitalWrite(inp2,LOW);
  delay(delayms);
  if (digitalRead(outp)==LOW)
  {
    flag=flag+1;
  }
  digitalWrite(inp1,LOW);
  digitalWrite(inp2,HIGH);
  delay(delayms);
  if (digitalRead(outp)==LOW)
  {
    flag=flag+1;
  }
  digitalWrite(inp1,LOW);
  digitalWrite(inp2,LOW);
  delay(delayms);
  if (digitalRead(outp)==LOW)
  {
    flag=flag+1;
  }
  if (flag==4)
  {
    return true;
  }
  else
  {
    return false;
  }
  
}
boolean threeAnd(int inp1,int inp2,int inp3,int otp){
  pinMode(inp1,OUTPUT);
  pinMode(inp2,OUTPUT);
  pinMode(inp3,OUTPUT);
  pinMode(otp,INPUT);
  int i,j,k,count=0;
  for(i=0;i<2;i++){
    digitalWrite(inp1,(bool)i);
    for(j=0;j<2;j++){
      digitalWrite(inp2,(bool)j);
      for(k=0;k<2;k++){
         digitalWrite(inp3,(bool)k);
         delay(delayms);
         if(digitalRead(otp)==((bool)i && (bool)j && (bool)k)){
            count++;
         }
         
      }
    }
  }
  if(count==8){
    return true;
  }
  else{
    return false;
  }
}
boolean nandgate(int inp1,int inp2,int outp)
{
  pinMode(inp1,OUTPUT);
  pinMode(inp2,OUTPUT);
  pinMode(outp,INPUT);
  int flag=0;
  digitalWrite(inp1,HIGH);
  digitalWrite(inp2,HIGH);
  delay(delayms);
  if (digitalRead(outp)==LOW)
  {
    flag=flag+1;
  }
  digitalWrite(inp1,HIGH);
  digitalWrite(inp2,LOW);
  delay(delayms);
  if (digitalRead(outp)==HIGH)
  {
    flag=flag+1;
  }
  digitalWrite(inp1,LOW);
  digitalWrite(inp2,HIGH);
  delay(delayms);
  if (digitalRead(outp)==HIGH)
  {
    flag=flag+1;
  }
  digitalWrite(inp1,LOW);
  digitalWrite(inp2,LOW);
  delay(delayms);
  if (digitalRead(outp)==HIGH)
  {
    flag=flag+1;
  }
  if (flag==4)
  {
    return true;
  }
  else
  {
    return false;
  }
  
}
boolean threeNand(int inp1,int inp2,int inp3,int otp){
  pinMode(inp1,OUTPUT);
  pinMode(inp2,OUTPUT);
  pinMode(inp3,OUTPUT);
  pinMode(otp,INPUT);
  int i,j,k,count=0;
  for(i=0;i<2;i++){
    digitalWrite(inp1,(bool)i);
    for(j=0;j<2;j++){
      digitalWrite(inp2,(bool)j);
      for(k=0;k<2;k++){
         digitalWrite(inp3,(bool)k);
         delayMicroseconds(1);
         if(digitalRead(otp)!=((bool)i && (bool)j && (bool)k)){
            count++;
         }
         
      }
    }
  }
  if(count==8){
    return true;
  }
  else{
    return false;
  }
}
boolean threeNor(int inp1,int inp2,int inp3,int otp){
  pinMode(inp1,OUTPUT);
  pinMode(inp2,OUTPUT);
  pinMode(inp3,OUTPUT);
  pinMode(otp,INPUT);
  int i,j,k,count=0;
  for(i=0;i<2;i++){
    digitalWrite(inp1,(bool)i);
    for(j=0;j<2;j++){
      digitalWrite(inp2,(bool)j);
      for(k=0;k<2;k++){
         digitalWrite(inp3,(bool)k);
         delayMicroseconds(1);
         if(digitalRead(otp)!=((bool)i || (bool)j || (bool)k)){
            count++;
         }
         else{
          return false;
         }
      }
    }
  }
  if(count==8){
    return true;
  }
}
boolean fournand(int inp1,int inp2,int inp3,int inp4,int outp)
{
  pinMode(inp1,OUTPUT);
  pinMode(inp2,OUTPUT);
  pinMode(inp3,OUTPUT);
  pinMode(inp4,OUTPUT);
  pinMode(outp,INPUT);
  
  int flag=0;
  int i,j,k,l;
  bool v;
  for (i=0;i<=1;i++)
  {
    for (j=0;j<=1;j++)
    {
      for(k=0;k<=1;k++)
      {
        for(l=0;l<=1;l++)
        {
          v=!((bool) i&&(bool) j&&(bool) k&&(bool) l);
          digitalWrite(inp1,(bool) i);
          digitalWrite(inp2,(bool) j);
          digitalWrite(inp3,(bool) k);
          digitalWrite(inp4,(bool) l);
          delay(delayms);
          if (digitalRead(outp)==v)
          {
            flag=flag+1;
          }

        }
      }
    }
  }


  if (flag==16)
  {
    return true;
  }
  else
  {
    return false;
  }
  
}
boolean andOrInvert(int inp1,int inp2,int inp3,int inp4,int outp){
  pinMode(inp1,OUTPUT);
  pinMode(inp2,OUTPUT);
  pinMode(inp3,OUTPUT);
  pinMode(inp4,OUTPUT);
  pinMode(outp,INPUT);
  int i,j,k,l,count;
  for (i=0;i<2;i++){
    digitalWrite(inp1,(bool)i);
    for (j=0;j<2;j++){
      digitalWrite(inp2,(bool)j);
      for(k=0;k<2;k++){
        digitalWrite(inp3,(bool)k);
        for(l=0;l<2;l++){
          digitalWrite(inp4,(bool)l);
          delayMicroseconds(1);
          if(digitalRead(outp)!=(((bool)i && (bool)j) || ((bool)j && (bool)k))){
            count++;
          }
          else{
            return false;
          }
        }
      }
    }
  }
  if(count==16){
    return true;
  }
  else{
    return false;
  }
}
boolean eightNand(int inp1,int inp2,int inp3,int inp4,int inp5,int inp6,int inp7,int inp8,int otp){
  pinMode(inp1,OUTPUT);
  pinMode(inp2,OUTPUT);
  pinMode(inp3,OUTPUT);
  pinMode(inp4,OUTPUT);
  pinMode(inp5,OUTPUT);
  pinMode(inp6,OUTPUT);
  pinMode(inp7,OUTPUT);
  pinMode(inp8,OUTPUT);
  pinMode(otp,INPUT);
  int a,b,c,d,e,f,g,h,count=0;
  for(a=0;a<2;a++){
    digitalWrite(inp1,(bool)a);
    for (b=0;b<2;b++){
      digitalWrite(inp2,(bool)b);
      for (c=0;c<2;c++){
        digitalWrite(inp3,(bool)c);
        for(d=0;d<2;d++){
          digitalWrite(inp4,(bool)d);
          for(e=0;e<2;e++){
            digitalWrite(inp5,(bool)e);
            for(f=0;f<2;f++){
              digitalWrite(inp6,(bool)f);
              for(g=0;g<2;g++){
                digitalWrite(inp7,(bool)g);
                for(h=0;h<2;h++){
                  digitalWrite(inp8,(bool)h);
                  delayMicroseconds(1);
                  if(digitalRead(otp)!=((bool)a && (bool)b && (bool)c && (bool)d && (bool)e && (bool)f && (bool)g && (bool)h)){
                    count++;
                  }
                  else {
                    return false;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if(count==256){
    return true;
  }
  else{
    return false;
  }
}
boolean thirteen_Nand(int inp1,int inp2,int inp3,int inp4,int inp5,int inp6,int inp7,int inp8,int inp9,int inp10,int inp11,int inp12,int inp13,int otp){
  pinMode(inp1,OUTPUT);
  pinMode(inp2,OUTPUT);
  pinMode(inp3,OUTPUT);
  pinMode(inp4,OUTPUT);
  pinMode(inp5,OUTPUT);
  pinMode(inp6,OUTPUT);
  pinMode(inp7,OUTPUT);
  pinMode(inp8,OUTPUT);
  pinMode(inp9,OUTPUT);
  pinMode(inp10,OUTPUT);
  pinMode(inp11,OUTPUT);
  pinMode(inp12,OUTPUT);
  pinMode(inp13,OUTPUT);
  pinMode(otp,INPUT);
  int a,b,c,d,e,f,g,h,i,j,k,l,m,count=0;
  for(a=0;a<2;a++){
    digitalWrite(inp1,(bool)a);
    for (b=0;b<2;b++){
      digitalWrite(inp2,(bool)b);
      for (c=0;c<2;c++){
        digitalWrite(inp3,(bool)c);
        for(d=0;d<2;d++){
          digitalWrite(inp4,(bool)d);
          for(e=0;e<2;e++){
            digitalWrite(inp5,(bool)e);
            for(f=0;f<2;f++){
              digitalWrite(inp6,(bool)f);
              for(g=0;g<2;g++){
                digitalWrite(inp7,(bool)g);
                for(h=0;h<2;h++){
                  digitalWrite(inp8,(bool)h);
                  for(a=0;a<2;a++){
                    digitalWrite(inp9,(bool)i);
                    for (b=0;b<2;b++){
                      digitalWrite(inp10,(bool)j);
                      for (c=0;c<2;c++){
                        digitalWrite(inp11,(bool)k);
                        for(d=0;d<2;d++){
                          digitalWrite(inp12,(bool)l);
                            for(e=0;e<2;e++){
                              digitalWrite(inp13,(bool)m);
                              delayMicroseconds(1);
                              if(digitalRead(otp)!=((bool)a && (bool)b && (bool)c && (bool)d && (bool)e && (bool)f && (bool)g && (bool)h && (bool)i && (bool)j && (bool)k && (bool)l && (bool)m)){
                                count++;
                              }
                              else {
                                return false;  
                              }
                            }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if(count==8192){
    return true;
  }
  else{
    return false;
  }
}

boolean fouror(int inp1,int inp2,int inp3,int inp4,int outp)
{
  pinMode(inp1,OUTPUT);
  pinMode(inp2,OUTPUT);
  pinMode(inp3,OUTPUT);
  pinMode(inp4,OUTPUT);
  pinMode(outp,INPUT);
  
  int flag=0;
  int i,j,k,l;
  bool v;
  for (i=0;i<=1;i++)
  {
    for (j=0;j<=1;j++)
    {
      for(k=0;k<=1;k++)
      {
        for(l=0;l<=1;l++)
        {
          v=((bool) i||(bool) j||(bool) k||(bool) l);
          digitalWrite(inp1,(bool) i);
          digitalWrite(inp2,(bool) j);
          digitalWrite(inp3,(bool) k);
          digitalWrite(inp4,(bool) l);
          delay(delayms);
          if (digitalRead(outp)==v)
          {
            flag=flag+1;
          }

        }
      }
    }
  }
  

  if (flag==16)
  {
    return true;
  }
  else
  {
    return false;
  }
}
boolean orgate(int inp1,int inp2,int outp)
{
  int flag=0;
  pinMode(inp1,OUTPUT);
  pinMode(inp2,OUTPUT);
  pinMode(outp,INPUT);
  digitalWrite(inp1,LOW);
  digitalWrite(inp2,LOW);
  delay(delayms);
  if (digitalRead(outp)==LOW)
  {
    flag=flag+1;
  }
  digitalWrite(inp1,HIGH);
  digitalWrite(inp2,LOW);
  delay(delayms);
  if (digitalRead(outp)==HIGH)
  {
    flag=flag+1;
  }
  digitalWrite(inp1,LOW);
  digitalWrite(inp2,HIGH);
  delay(delayms);
  if (digitalRead(outp)==HIGH)
  {
    flag=flag+1;
  }
  digitalWrite(inp1,HIGH);
  digitalWrite(inp2,HIGH);
  delay(delayms);
  if (digitalRead(outp)==HIGH)
  {
    flag=flag+1;
  }
  if(flag==4)
  {
    return true;
  }
  else
  {
    return false;
  }
  
}
boolean norgate(int inp1,int inp2,int outp)
{
  int flag=0;
  pinMode(inp1,OUTPUT);
  pinMode(inp2,OUTPUT);
  pinMode(outp,INPUT);
  digitalWrite(inp1,LOW);
  digitalWrite(inp2,LOW);
  delay(delayms);
  if (digitalRead(outp)==HIGH)
  {
    flag=flag+1;
  }
  digitalWrite(inp1,HIGH);
  digitalWrite(inp2,LOW);
  delay(delayms);
  if (digitalRead(outp)==LOW)
  {
    flag=flag+1;
  }
  digitalWrite(inp1,LOW);
  digitalWrite(inp2,HIGH);
  delay(delayms);
  if (digitalRead(outp)==LOW)
  {
    flag=flag+1;
  }
  digitalWrite(inp1,HIGH);
  digitalWrite(inp2,HIGH);
  delay(delayms);
  if (digitalRead(outp)==LOW)
  {
    flag=flag+1;
  }
  if(flag==4)
  {
    return true;
  }
  else
  {
    return false;
  }
  
}

boolean fourand(int inp1,int inp2,int inp3,int inp4,int outp)
{
  pinMode(inp1,OUTPUT);
  pinMode(inp2,OUTPUT);
  pinMode(inp3,OUTPUT);
  pinMode(inp4,OUTPUT);
  pinMode(outp,INPUT);
  
  int flag=0;
  int i,j,k,l;
  bool v;
  for (i=0;i<=1;i++)
  {
    for (j=0;j<=1;j++)
    {
      for(k=0;k<=1;k++)
      {
        for(l=0;l<=1;l++)
        {
          v=((bool) i&&(bool) j&&(bool) k&&(bool) l);
          digitalWrite(inp1,(bool) i);
          digitalWrite(inp2,(bool) j);
          digitalWrite(inp3,(bool) k);
          digitalWrite(inp4,(bool) l);
          delay(delayms);
          if (digitalRead(outp)==v)
          {
            flag=flag+1;
          }

        }
      }
    }
  }


  if (flag==16)
  {
    return true;
  }
  else
  {
    return false;
  }
  
}
boolean fourAndWII(int inp1,int inp2,int inp3,int inp4,int outp,bool a,bool b,bool c,bool d){
  pinMode(inp1,OUTPUT);
  pinMode(inp2,OUTPUT);
  pinMode(inp3,OUTPUT);
  pinMode(inp4,OUTPUT);
  pinMode(outp,INPUT);
  int count=0;
  int i,j,k,l;
  for (i=0;i<2;i++){
    if(a==true){
      digitalWrite(inp1,(bool)i);
    }
    else{
      digitalWrite(inp1,!(bool)i);
    }
    for(j=0;j<2;j++){
      if(b==true){
        digitalWrite(inp2,(bool)j);
      }
      else{
        digitalWrite(inp2,!(bool)j);
      }
      for(k=0;k<2;k++){
        if(c==true){
          digitalWrite(inp3,(bool)k);
        }
        else{
          digitalWrite(inp3,!(bool)k);
        }
        for(l=0;l<2;l++){
          if(d==true){
            digitalWrite(inp4,(bool)l);
          }
          else{
            digitalWrite(inp4,!(bool)l);
          }
          delayMicroseconds(1);
          if(digitalRead(outp)==((bool)i && (bool)j && (bool)k && (bool)l)){
            count++;
          }
          else{
            return false;
          }
        }
      }
    }
  }
  if(count==16){
    return true;
  }
  else{
    return false;
  }
}
boolean fourNandWII(int inp1,int inp2,int inp3,int inp4,int outp,bool a,bool b,bool c,bool d){
  pinMode(inp1,OUTPUT);
  pinMode(inp2,OUTPUT);
  pinMode(inp3,OUTPUT);
  pinMode(inp4,OUTPUT);
  pinMode(outp,INPUT);
  int count=0;
  int i,j,k,l;
  for (i=0;i<2;i++){
    if(a==true){
      digitalWrite(inp1,(bool)i);
    }
    else{
      digitalWrite(inp1,!(bool)i);
    }
    for(j=0;j<2;j++){
      if(b==true){
        digitalWrite(inp2,(bool)j);
      }
      else{
        digitalWrite(inp2,!(bool)j);
      }
      for(k=0;k<2;k++){
        if(c==true){
          digitalWrite(inp3,(bool)k);
        }
        else{
          digitalWrite(inp3,!(bool)k);
        }
        for(l=0;l<2;l++){
          if(d==true){
            digitalWrite(inp4,(bool)l);
          }
          else{
            digitalWrite(inp4,!(bool)l);
          }
          delayMicroseconds(1);
          if(digitalRead(outp)!=((bool)i && (bool)j && (bool)k && (bool)l)){
            count++;
          }
          else{
            return false;
          }
        }
      }
    }
  }
  if(count==16){
    return true;
  }
  else{
    return false;
  }
}
boolean fournor(int inp1,int inp2,int inp3,int inp4,int outp)
{
  pinMode(inp1,OUTPUT);
  pinMode(inp2,OUTPUT);
  pinMode(inp3,OUTPUT);
  pinMode(inp4,OUTPUT);
  pinMode(outp,INPUT);
  
  int flag=0;
  int i,j,k,l;
  bool v;
  for (i=0;i<=1;i++)
  {
    for (j=0;j<=1;j++)
    {
      for(k=0;k<=1;k++)
      {
        for(l=0;l<=1;l++)
        {
          v=!((bool) i||(bool) j||(bool) k||(bool) l);
          digitalWrite(inp1,(bool) i);
          digitalWrite(inp2,(bool) j);
          digitalWrite(inp3,(bool) k);
          digitalWrite(inp4,(bool) l);
          delay(delayms);
          if (digitalRead(outp)==v)
          {
            flag=flag+1;
          }

        }
      }
    }
  }
  

  if (flag==16)
  {
    return true;
  }
  else
  {
    return false;
  }
}
void clock(int n)
{
  pinMode(n,OUTPUT);
  digitalWrite(n,LOW);
  delayMicroseconds(10);
  digitalWrite(n,HIGH);
  delayMicroseconds(10);
  digitalWrite(n,LOW);
  delayMicroseconds(10);
  return;
}
boolean jk_ff_pos_with_invert_clear(int j,int k,int clk,int clr,int q,int q_){
  pinMode(j,OUTPUT);
  pinMode(k,OUTPUT);
  pinMode(clk,OUTPUT);
  pinMode(clr,OUTPUT);
  pinMode(q,INPUT);
  pinMode(q_,INPUT); 
  int count = 0,a,b;
  digitalWrite(clr,HIGH);
  digitalWrite(clk,LOW);
  delayMicroseconds(10);
  digitalWrite(j,HIGH);
  digitalWrite(k,LOW);
  digitalWrite(clk,HIGH);
  delayMicroseconds(10);
  if(digitalRead(q)==HIGH && digitalRead(q_)==LOW){
    count++; 
  }
  else{
    return false;
  }
  digitalWrite(clk,LOW);
  delayMicroseconds(10);
  if(digitalRead(q)==HIGH && digitalRead(q_)==LOW){
    count++; 
  }
  else{
    return false;
  }
  digitalWrite(j,LOW);
  digitalWrite(k,LOW);
  clock(clk);
  if(digitalRead(q)==HIGH && digitalRead(q_)==LOW){
    count++; 
  }
  else{
    return false;
  }
  digitalWrite(j,LOW);
  digitalWrite(k,HIGH);
  digitalWrite(clk,HIGH);
  delayMicroseconds(10);
  if(digitalRead(q)==LOW && digitalRead(q_)==HIGH){
    count++; 
  }
  else{
    return false;
  }
  digitalWrite(clk,LOW);
  delayMicroseconds(10);
  if(digitalRead(q)==LOW && digitalRead(q_)==HIGH){
    count++; 
  }
  else{
    return false;
  }
  digitalWrite(j,LOW);
  digitalWrite(k,LOW);
  clock(clk);
  if(digitalRead(q)==LOW && digitalRead(q_)==HIGH){
    count++; 
  }
  else{
    return false;
  }
  digitalWrite(clr,LOW);
  delayMicroseconds(10);
  for(a=0;a<2;a++){
    digitalWrite(j,(bool)a);
    for(b=0;b<2;b++){
      digitalWrite(k,(bool)b);
      clock(clk);
       if(digitalRead(q)==LOW && digitalRead(q_)==HIGH){
        count++;
       }
       else{
        return false;
       }
    }
  }
  if(count==10){
    return true;
  }
  else{
    return false;
  }
}
boolean jk_ff_neg_with_invert_clear(int j,int k,int clk,int clr,int q,int q_){
  pinMode(j,OUTPUT);
  pinMode(k,OUTPUT);
  pinMode(clk,OUTPUT);
  pinMode(clr,OUTPUT);
  pinMode(q,INPUT);
  pinMode(q_,INPUT); 
  int count = 0,a,b;
  digitalWrite(clr,HIGH);
  digitalWrite(clk,HIGH);
  delayMicroseconds(10);
  digitalWrite(j,HIGH);
  digitalWrite(k,LOW);
  digitalWrite(clk,LOW);
  delayMicroseconds(10);
  if(digitalRead(q)==HIGH && digitalRead(q_)==LOW){
    count++;
  }
  else{
    return false;
  }
  digitalWrite(clk,HIGH);
  delayMicroseconds(10);
  if(digitalRead(q)==HIGH && digitalRead(q_)==LOW){
    count++; 
  }
  else{
    return false;
  }
  digitalWrite(j,LOW);
  digitalWrite(k,LOW);
  clock(clk);
  if(digitalRead(q)==HIGH && digitalRead(q_)==LOW){
    count++;
  }
  else{
    return false;
  }
  digitalWrite(clk,HIGH);
  delayMicroseconds(10);
  digitalWrite(j,LOW);
  digitalWrite(k,HIGH);
  digitalWrite(clk,LOW);
  delayMicroseconds(10);
  if(digitalRead(q)==LOW && digitalRead(q_)==HIGH){
    count++;
  }
  else{
    return false;
  }
  digitalWrite(clk,HIGH);
  delayMicroseconds(10);
  if(digitalRead(q)==LOW && digitalRead(q_)==HIGH){
    count++;
  }
  else{
    return false;
  }
  digitalWrite(j,LOW);
  digitalWrite(k,LOW);
  clock(clk);
  if(digitalRead(q)==LOW && digitalRead(q_)==HIGH){
    count++;
  }
  else{
    return false;
  }
  digitalWrite(clr,LOW);
  delayMicroseconds(10);
  for(a=0;a<2;a++){
    digitalWrite(j,(bool)a);
    for(b=0;b<2;b++){
      digitalWrite(k,(bool)b);
      clock(clk);
       if(digitalRead(q)==LOW && digitalRead(q_)==HIGH){
        count++;
       }
       else{
        return false;
       }
    }
  }
  if(count==10){
    return true;
  }
  else{
    return false;
  }
}
boolean dLatch(int d,int clk,int q,int q_){
  pinMode(d,OUTPUT);
  pinMode(clk,OUTPUT);
  pinMode(q,INPUT);
  pinMode(q_,INPUT);
  int i,count=0;
  for(i=0;i<2;i++){
    digitalWrite(d,(bool)i);
    clock(clk);
    if(digitalRead(q)==(bool)i && digitalRead(q_)!=(bool)i){
      count++;
    }
    else{
      return false;
    }
  }
  if(count==2){
    return true;
  }
  else{
    return false;
  }
}
boolean DLatch(int d,int clk,int q){
  pinMode(d,OUTPUT);
  pinMode(clk,OUTPUT);
  pinMode(q,INPUT);
  int i,count=0;
  for(i=0;i<2;i++){
    digitalWrite(d,(bool)i);
    clock(clk);
    if(digitalRead(q)==(bool)i){
      count++;
    }
    else{
      return false;
    }
  }
  if(count==2){
    return true;
  }
  else{
    return false;
  }
}
boolean d_pos_trig_ff_with_pre_clr(int d,int clk,int clr,int pre,int q,int q_)
{
  pinMode(d,OUTPUT);
  pinMode(clk,OUTPUT);
  pinMode(clr,OUTPUT);
  pinMode(pre,OUTPUT);
  int flag=0;
  int i;
  pinMode(q,INPUT);
  pinMode(q_,INPUT);
  digitalWrite(pre,HIGH);
  digitalWrite(clr,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(clk,LOW);
  delayMicroseconds(10);
  digitalWrite(clk,HIGH);
  delayMicroseconds(10);
  if (digitalRead(q)==HIGH && digitalRead(q_)==LOW)
  {
    flag=flag+1;
  }
  digitalWrite(d,LOW);
  digitalWrite(clk,LOW);
  delayMicroseconds(10);
 if (digitalRead(q)==HIGH && digitalRead(q_)==LOW)
  {
    flag=flag+1;
  }
  digitalWrite(clk,HIGH);
  delayMicroseconds(10);
  if (digitalRead(q)==LOW && digitalRead(q_)==HIGH)
  {
    flag=flag+1;
  }
  digitalWrite(clk,LOW);
  delayMicroseconds(10);
  if (digitalRead(q)==LOW && digitalRead(q_)==HIGH)
  {
    flag=flag+1;
  }
  digitalWrite(pre,LOW);
  digitalWrite(clr,HIGH);
  for(i=0;i<=1;i++)
  {
    digitalWrite(d,(bool) i);
    if (digitalRead(q)==HIGH && digitalRead(q_)==LOW)
    {
      flag=flag+1;
    }
  }
  digitalWrite(pre,HIGH);
  digitalWrite(clr,LOW);
  for(i=0;i<=1;i++)
  {
    digitalWrite(d,(bool) i);
    if (digitalRead(q)==LOW && digitalRead(q_)==HIGH)
    {
      flag=flag+1;
    }
  }
  digitalWrite(pre,LOW);
  digitalWrite(clr,LOW);
  for(i=0;i<=1;i++)
  {
    digitalWrite(d,(bool) i);
    if (digitalRead(q)==HIGH && digitalRead(q_)==HIGH)
    {
      flag=flag+1;
    }
  }
  if (flag==10)
  {
    return true;
  }
  else
  {
    return false;
  }
}

boolean jk_Latch_with_preset_and_clear(int j,int k,int clk,int clr,int pre,int q,int q_){
  pinMode(j,OUTPUT);
  pinMode(k,OUTPUT);
  pinMode(clk,OUTPUT);
  pinMode(clr,OUTPUT);
  pinMode(pre,OUTPUT);
  pinMode(q,OUTPUT);
  pinMode(q_,OUTPUT);
  int a,b,count=0;
  digitalWrite(pre,LOW);
  digitalWrite(clr,LOW);
  for(a=0;a<2;a++){
    digitalWrite(j,(bool)a);
    for(b=0;b<2;b++){
      digitalWrite(k,(bool)b);
      clock(clk);
      if(digitalRead(q)==HIGH && digitalRead(q_)==HIGH){
        count++;
      }
      else{
        return false;
      }
    }
  }
  digitalWrite(pre,LOW);
  digitalWrite(clr,HIGH);
   for(a=0;a<2;a++){
    digitalWrite(j,(bool)a);
    for(b=0;b<2;b++){
      digitalWrite(k,(bool)b);
      clock(clk);
      if(digitalRead(q)==HIGH && digitalRead(q_)==LOW){
        count++;
      }
      else{
        return false;
      }
    }
  }
  digitalWrite(pre,HIGH);
  digitalWrite(clr,LOW);
   for(a=0;a<2;a++){
    digitalWrite(j,(bool)a);
    for(b=0;b<2;b++){
      digitalWrite(k,(bool)b);
      clock(clk);
      if(digitalRead(q)==LOW && digitalRead(q_)==HIGH){
        count++;
      }
      else{
        return false;
      }
    }
  }
  digitalWrite(pre,HIGH);
  digitalWrite(clr,HIGH);
  digitalWrite(j,0);
  digitalWrite(k,1);
  clock(clk);
  if(digitalRead(q)==LOW && digitalRead(q_)==HIGH){
    count++;
  }
  else{
    return false;
  }
  digitalWrite(j,0);
  digitalWrite(k,0);
  clock(clk);
  if(digitalRead(q)==LOW && digitalRead(q_)==HIGH){
    count++;
  }
  else{
    return false;
  }
  digitalWrite(j,1);
  digitalWrite(k,0);
  clock(clk);
  if(digitalRead(q)==HIGH && digitalRead(q_)==LOW){
    count++;
  }
  else{
    return false;
  }
  digitalWrite(j,0);
  digitalWrite(k,0);
  clock(clk);
  if(digitalRead(q)==HIGH && digitalRead(q_)==LOW){
    count++;
  }
  else{
    return false;
  }
  if(count==16){
    return true;
  }
  else{
    return false;
  }
}
boolean jk_Latch_with_inverted_preset_and_clear(int j,int k,int clk,int clr,int pre,int q,int q_){
  pinMode(j,OUTPUT);
  pinMode(k,OUTPUT);
  pinMode(clk,OUTPUT);
  pinMode(clr,OUTPUT);
  pinMode(pre,OUTPUT);
  pinMode(q,OUTPUT);
  pinMode(q_,OUTPUT);
  int a,b,count=0;
  digitalWrite(pre,HIGH);
  digitalWrite(clr,HIGH);
  for(a=0;a<2;a++){
    digitalWrite(j,(bool)a);
    for(b=0;b<2;b++){
      digitalWrite(k,(bool)b);
      clock(clk);
      if(digitalRead(q)==HIGH && digitalRead(q_)==HIGH){
        count++;
      }
      else{
        return false;
      }
    }
  }
  digitalWrite(pre,HIGH);
  digitalWrite(clr,LOW);
   for(a=0;a<2;a++){
    digitalWrite(j,(bool)a);
    for(b=0;b<2;b++){
      digitalWrite(k,(bool)b);
      clock(clk);
      if(digitalRead(q)==HIGH && digitalRead(q_)==LOW){
        count++;
      }
      else{
        return false;
      }
    }
  }
  digitalWrite(pre,LOW);
  digitalWrite(clr,HIGH);
   for(a=0;a<2;a++){
    digitalWrite(j,(bool)a);
    for(b=0;b<2;b++){
      digitalWrite(k,(bool)b);
      clock(clk);
      if(digitalRead(q)==LOW && digitalRead(q_)==HIGH){
        count++;
      }
      else{
        return false;
      }
    }
  }
  digitalWrite(pre,LOW);
  digitalWrite(clr,LOW);
  digitalWrite(j,0);
  digitalWrite(k,1);
  clock(clk);
  if(digitalRead(q)==LOW && digitalRead(q_)==HIGH){
    count++;
  }
  else{
    return false;
  }
  digitalWrite(j,0);
  digitalWrite(k,0);
  clock(clk);
  if(digitalRead(q)==LOW && digitalRead(q_)==HIGH){
    count++;
  }
  else{
    return false;
  }
  digitalWrite(j,1);
  digitalWrite(k,0);
  clock(clk);
  if(digitalRead(q)==HIGH && digitalRead(q_)==LOW){
    count++;
  }
  else{
    return false;
  }
  digitalWrite(j,0);
  digitalWrite(k,0);
  clock(clk);
  if(digitalRead(q)==HIGH && digitalRead(q_)==LOW){
    count++;
  }
  else{
    return false;
  }
  if(count==16){
    return true;
  }
  else{
    return false;
  }
}
boolean jk_ff_pos_with_pre_clr(int j,int k,int clk,int pre,int clr,int q,int q_)
{
  pinMode(j,OUTPUT);
  pinMode(k,OUTPUT);
  pinMode(clk,OUTPUT);
  pinMode(clr,OUTPUT);
  pinMode(pre,OUTPUT);
  pinMode(q,OUTPUT);
  pinMode(q_,OUTPUT);
  pinMode(q,OUTPUT);
  pinMode(q_,OUTPUT);
  int a,b,flag=0;
  digitalWrite(pre,LOW);
  digitalWrite(clr,LOW);
  digitalWrite(j,HIGH);
  digitalWrite(k,LOW);
  digitalWrite(clk,LOW);
  delayMicroseconds(10);
  digitalWrite(clk,HIGH);
  delayMicroseconds(10);
  if (digitalRead(q)==HIGH && digitalRead(q_)==LOW)
  {
    flag=flag+1;
  }
  digitalWrite(clk,LOW);
  delayMicroseconds(10);
  if (digitalRead(q)==HIGH && digitalRead(q_)==LOW)
  {
    flag=flag+1;
  }
  digitalWrite(j,HIGH);
  digitalWrite(k,LOW);
  digitalWrite(clk,HIGH);
  delayMicroseconds(10);
  if (digitalRead(q)==HIGH && digitalRead(q_)==LOW)
  {
    flag=flag+1;
  }
  digitalWrite(clk,LOW);
  delayMicroseconds(10);
  if (digitalRead(q)==HIGH && digitalRead(q_)==LOW)
  {
    flag=flag+1;
  }
  digitalWrite(j,LOW);
  digitalWrite(k,LOW);
  digitalWrite(clk,HIGH);
  delayMicroseconds(10);
  if (digitalRead(q)==HIGH && digitalRead(q_)==LOW)
  {
    flag=flag+1;
  }
  digitalWrite(clk,LOW);
  delayMicroseconds(10);
  if (digitalRead(q)==HIGH && digitalRead(q_)==LOW)
  {
    flag=flag+1;
  }
 digitalWrite(j,LOW);
 digitalWrite(k,HIGH);
 digitalWrite(clk,HIGH);
 delayMicroseconds(10);
 if (digitalRead(q)==LOW && digitalRead(q_)==HIGH)
  {
    flag=flag+1;
  }
 digitalWrite(clk,LOW);
 delayMicroseconds(10);
 if (digitalRead(q)==LOW && digitalRead(q_)==HIGH)
  {
    flag=flag+1;
  }
 digitalWrite(j,LOW);
  digitalWrite(k,LOW);
  digitalWrite(clk,HIGH);
  delayMicroseconds(10);
  if (digitalRead(q)==LOW && digitalRead(q_)==HIGH)
  {
    flag=flag+1;
  }
  digitalWrite(clk,LOW);
  delayMicroseconds(10);
  if (digitalRead(q)==LOW && digitalRead(q_)==HIGH)
  {
    flag=flag+1;
  }
  digitalWrite(pre,HIGH);
  digitalWrite(clr,LOW);
  if (digitalRead(q)==HIGH && digitalRead(q_)==LOW)
  {
    flag=flag+1;
  }
  digitalWrite(pre,LOW);
  digitalWrite(clr,HIGH);
  if (digitalRead(q)==LOW && digitalRead(q_)==HIGH)
  {
    flag=flag+1;
  }
  digitalWrite(pre,HIGH);
  digitalWrite(clr,HIGH);
  if (digitalRead(q)==HIGH && digitalRead(q_)==HIGH)
  {
    flag=flag+1;
  }
  if (flag==13)
  {
    return true;
  }
  else
  {
    return false;
  }
}
boolean xorgate(int inp1,int inp2,int outp)
{
  pinMode(inp1,OUTPUT);
  pinMode(inp2,OUTPUT);
  pinMode(outp,INPUT);
  int flag=0;
  digitalWrite(inp1,LOW);
  digitalWrite(inp2,LOW);
  if (digitalRead(outp)==LOW)
  {
    flag=flag+1;
  }
  digitalWrite(inp1,LOW);
  digitalWrite(inp2,HIGH);
  if (digitalRead(outp)==HIGH)
  {
    flag=flag+1;
  }
  digitalWrite(inp1,HIGH);
  digitalWrite(inp2,LOW);
  if (digitalRead(outp)==HIGH)
  {
    flag=flag+1;
  }
  digitalWrite(inp1,HIGH);
  digitalWrite(inp2,HIGH);
  if (digitalRead(outp)==LOW)
  {
    flag=flag+1;
  }
  if (flag==4)
  {
    return true;
  }
  else
  {
    return false;
  }
}

