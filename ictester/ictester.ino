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
    IC7473();//dual J-K flip-flop with clear
    IC7474();//dual D positive edge triggered flip-flop with preset and clear
    IC4072();//Dual 4-input OR gate
    IC4000();//Dual 3-input NOR gate + 1 Inverter
    IC4002();//Dual 4-input NOR gate
    IC4001();//Quad 2-input NOR gate
    IC4012();//Dual 4-input NAND gate
    IC4013();//Dual D-type flip-flop
    IC7486();//quad 2-input XOR gate
    IC4069();//Hex inverter
    show("NOT found");
    while(true){
      ;
    }
    
    
}
//functions----
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
//fournor()
//notgate()
//xorgate()
//clock(int n)
//jk_ff_with_clear(int j,int k,int clk,int clr,int q,int q_)
//d_pos_trig_ff_with_pre_clr(int d,int clk,int clr,int pre,int q,int q_)


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
 b=threeNand(pin(3),pin(4),pin(5),pin(6));
 c=threeNand(pin(9),pin(10),pin(11),pin(8));
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
void IC7473()
{
  pinMode(pin(4),OUTPUT);
  pinMode(pin(11),OUTPUT);
  digitalWrite(pin(4),HIGH);
  digitalWrite(pin(11),LOW);
  bool a,b;
  a=jk_ff_with_clear(pin(14),pin(3),pin(1),pin(2),pin(12),pin(13));
  b=jk_ff_with_clear(pin(7),pin(10),pin(5),pin(6),pin(9),pin(8));
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
    show('IC4001');
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
  delay(1);
  digitalWrite(n,HIGH);
  delay(1);
  digitalWrite(n,LOW);
  delay(1);
  return;

}
boolean jk_ff_with_clear(int j,int k,int clk,int clr,int q,int q_)
{
  pinMode(j,OUTPUT);
  pinMode(k,OUTPUT);
  pinMode(clk,OUTPUT);
  pinMode(clr,OUTPUT);
  pinMode(q,INPUT);
  pinMode(q_,INPUT);
  int flag=0;
  int y,u;
  digitalWrite(clr,HIGH);
  digitalWrite(j,LOW);
  digitalWrite(k,HIGH);
  clock(clk);
  if (digitalRead(q)==LOW && digitalRead(q_)==HIGH)
  {
    flag=flag+1;
  }
  digitalWrite(j,HIGH);
  digitalWrite(k,LOW);
  clock(clk);
  if (digitalRead(q)==HIGH && digitalRead(q_)==LOW)
  {
    flag=flag+1;
  }
  digitalWrite(j,LOW);
  digitalWrite(k,LOW);
  clock(clk);
  if (digitalRead(q)==HIGH && digitalRead(q_)==LOW)
  {
    flag=flag+1;
  }
  digitalWrite(j,HIGH);
  digitalWrite(k,HIGH);
  clock(clk);
  if (digitalRead(q)==LOW && digitalRead(q_)==HIGH)
  {
    flag=flag+1;
  }
  digitalWrite(clr,LOW);
  for (y=0;y<=1;y++)
  {
    for(u=0;u<=1;u++)
    {
      digitalWrite(j,(bool) y);
      digitalWrite(k,(bool) u);
      clock(clk);
      if(digitalRead(q)==LOW && digitalRead(q_)==HIGH)
      {
        flag=flag+1;
      }
    }
  }
  digitalWrite(clr,HIGH);
  digitalWrite(j,LOW);
  digitalWrite(k,HIGH);
  clock(clk);
  digitalWrite(j,LOW);
  digitalWrite(k,LOW);
  clock(clk);
  if(digitalRead(q)==LOW && digitalRead(q_)==HIGH)
  {
    flag=flag+1;
  }
  digitalWrite(j,HIGH);
  digitalWrite(k,HIGH);
  clock(clk);
  if (digitalRead(q)==HIGH && digitalRead(q_)==LOW)
  {
    flag=flag+1;
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
  clock(clk);
  if (digitalRead(q)==HIGH && digitalRead(q_)==LOW)
  {
    flag=flag+1;
  }
  digitalWrite(d,LOW);
  clock(clk);
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
  if (flag==8)
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

