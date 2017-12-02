int delayms=0;
void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  //Serial.println(".....");
}

void loop() 
{
  // put your main code here, to run repeatedly:
    //Serial.println("-------");
    IC7400();
    IC4072();
    IC7404();
    IC7420();
    while(true){
      ;
    }
    
}
void show(char x[ ])
{
  Serial.println(x);
}
void IC4072()
{
  bool x,y;
  
  pinMode(pin(7),OUTPUT);
  pinMode(pin(14),OUTPUT);
  digitalWrite(pin(7),LOW);
  digitalWrite(pin(14),HIGH);
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
  pinMode(pin(7),OUTPUT);
  pinMode(pin(14),OUTPUT);
  digitalWrite(pin(7),LOW);
  digitalWrite(pin(14),HIGH);
  bool a,b,c,d;
  a=nandgate(pin(1),pin(2),pin(3));
  b=nandgate(pin(4),pin(5),pin(6));
  c=nandgate(pin(9),pin(10),pin(8));
  d=nandgate(pin(12),pin(13),pin(11));
  if (a==true&& b==true&& c==true&& d==true)
  {
    show(" IC -7400");
    while (true)
    {
      ;
    }
  }
}
void IC7404()
{
  pinMode(pin(7),OUTPUT);
  pinMode(pin(14),OUTPUT);
  digitalWrite(pin(7),LOW);
  digitalWrite(pin(14),HIGH);
  bool a,b,c,d,e,f;
  a=notgate(pin(1),pin(2));
  b=notgate(pin(3),pin(4));
  c=notgate(pin(5),pin(6));
  d=notgate(pin(13),pin(12));
  e=notgate(pin(11),pin(10));
  f=notgate(pin(9),pin(8));
  Serial.println("result");
  Serial.println(a);
  Serial.println(b);
  Serial.println(c);
  Serial.println(d);
  Serial.println(e);
  Serial.println(f);
  if(a==true && b==true && c==true && d==true && e==true && f==true){
    show("IC7404");
    while(true){
      ;
    }
  }
}
void IC7420()
{
  pinMode(pin(7),OUTPUT);
  pinMode(pin(14),OUTPUT);
  digitalWrite(pin(7),LOW);
  digitalWrite(pin(14),HIGH);
  bool a,b;
  a=fournand(pin(1),pin(2),pin(4),pin(5),pin(6));
  b=fournand(pin(13),pin(12),pin(10),pin(9),pin(8));
  if(a==true && b==true){
    show("IC7420");
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
          Serial.println("---------");
          Serial.print(i);Serial.print(" ");Serial.print(j);Serial.print(" ");Serial.print(k);Serial.print(" ");Serial.print(l);
          Serial.println(v);
          Serial.println(digitalRead(outp));
          Serial.println("---------");
          delay(delayms);
          if (digitalRead(outp)==v)
          {
            flag=flag+1;
          }

        }
      }
    }
  }
  Serial.println(flag);

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
