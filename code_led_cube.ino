int tang[6]={0,13,12,11,10,9};

int cot[26]={0,2,3,4,5,6,7,8,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};

void setup() {
  for(int i=1;i<=5;i++)
  {
    pinMode(tang[i],OUTPUT);
  }
  for(int i=1;i<=25;i++)
  {
    pinMode(cot[i],OUTPUT);
  }
  for(int i=1;i<=5;i++)
  {
    digitalWrite(tang[i],HIGH);
  }
  {
  for(int i=1;i<=25;i++){
    digitalWrite(cot[i],HIGH);
  }
  for(int y=0;y<=5;y++)
  {
    delay(500);
    digitalWrite(tang[y],LOW);
  }
  delay(3000);
  for(int y=5;y>=0;y--)
  {
    delay(100);
    digitalWrite(tang[y],HIGH);
  }
  for(int y=0;y<=5;y++)
  {
    delay(50);
    digitalWrite(tang[y],LOW);
  }
  for(int y=5;y>=0;y--)
  {
    digitalWrite(tang[y],0);
    delay(100);
  }
    
  for(int y=5;y>=0;y--)
  {
    digitalWrite(tang[y],1);
    delay(100);
  }  
}}

void loop() {
//tang 0
//cot 1


a4();
delay(500);
clearall();
phao();
delay(500);
clearall();
a4();
delay(500);
clearall();
duoitang();
delay(500);
clearall();
a2();
delay(500);
clearall();
cheo_ngang_doc();
delay(500);
clearall();
all_tang_len_xuong();
delay(500);
clearall();
}
void phao(){
  digitalWrite(tang[1],0);
  digitalWrite(cot[13],1);
  delay(200);
  digitalWrite(tang[2],0);
  digitalWrite(tang[1],1);
    delay(200);
  digitalWrite(tang[3],0);
  digitalWrite(tang[2],1);
    delay(200);
  digitalWrite(tang[4],0);
  digitalWrite(tang[3],1);
    delay(600);
  //noo
  digitalWrite(tang[3],0);
  digitalWrite(tang[5],0);
  digitalWrite(cot[7],1);
  digitalWrite(cot[8],1);
  digitalWrite(cot[9],1);
  digitalWrite(cot[12],1);
  digitalWrite(cot[14],1);
  digitalWrite(cot[17],1);
  digitalWrite(cot[18],1);
  digitalWrite(cot[19],1);
  delay(300);
    digitalWrite(cot[2],1);
  digitalWrite(cot[15],1);
  digitalWrite(cot[22],1);
  digitalWrite(cot[7],1);
  digitalWrite(cot[17],1);
  for(int i=1;i<=25;i++)
  {digitalWrite(tang[1],0);
  digitalWrite(tang[2],0);
  digitalWrite(cot[i],1);
  }
  delay(400);
  clearall();
}
void a4(){
  //bật all tầng
  for(int i=1;i<=5;i++)
  {
  digitalWrite(tang[i],0);
  }
  //bật giữa
  digitalWrite(cot[13],1);
  delay(400);
  //vòng 2
  digitalWrite(cot[13],0);
  digitalWrite(cot[7],1);
  digitalWrite(cot[8],1);
  digitalWrite(cot[9],1);
  digitalWrite(cot[12],1);
  digitalWrite(cot[14],1);
  digitalWrite(cot[17],1);
  digitalWrite(cot[18],1);
  digitalWrite(cot[19],1);
  delay(400);
  //vòng 3
  for(int i=1;i<=25;i++)
  {
  digitalWrite(cot[i],1);
  }
  digitalWrite(cot[13],1);
  digitalWrite(cot[7],0);
  digitalWrite(cot[8],0);
  digitalWrite(cot[9],0);
  digitalWrite(cot[12],0);
  digitalWrite(cot[14],0);
  digitalWrite(cot[17],0);
  digitalWrite(cot[18],0);
  digitalWrite(cot[19],0);
  delay(500);
  //ngược lại  
  clearall();
  //all tang
  for(int i=1;i<=5;i++)
  {
  digitalWrite(tang[i],0);
  }
  //ngoai
  for(int i=1;i<=25;i++)
  {
  digitalWrite(cot[i],1);
  }
  digitalWrite(cot[13],1);
  digitalWrite(cot[7],0);
  digitalWrite(cot[8],0);
  digitalWrite(cot[9],0);
  digitalWrite(cot[12],0);
  digitalWrite(cot[14],0);
  digitalWrite(cot[17],0);
  digitalWrite(cot[18],0);
  digitalWrite(cot[19],0);
  delay(500);
  //vòng 2
  for(int i=1;i<=25;i++)
  {
  digitalWrite(cot[i],0);
  }
  digitalWrite(cot[7],1);
  digitalWrite(cot[8],1);
  digitalWrite(cot[9],1);
  digitalWrite(cot[12],1);
  digitalWrite(cot[14],1);
  digitalWrite(cot[17],1);
  digitalWrite(cot[18],1);
  digitalWrite(cot[19],1);
  delay(400);
  //giữa
    for(int i=1;i<=25;i++)
  {
  digitalWrite(cot[i],0);
  }
  digitalWrite(cot[13],1);
  delay(400);
  }
void duoitang(){
  for(int i=1;i<=25;i++){
  digitalWrite(cot[i],HIGH);
  }
  for(int y=0;y<=5;y++)
  {
  delay(200);
  digitalWrite(tang[y],LOW);
  if(y>=2){
    digitalWrite(tang[y-1],HIGH);
  }
  }
  for(int i=1;i<=25;i++){
  digitalWrite(cot[i],HIGH);
  }
  for(int y=0;y<5;y++)
  {
  delay(200);
  digitalWrite(tang[y],LOW);
  if(y>=2){
    digitalWrite(tang[y-1],HIGH);
  }
  }
  for(int y=0;y<4;y++)
  {
  delay(200);
  digitalWrite(tang[y],LOW);
  if(y>=2){
    digitalWrite(tang[y-1],HIGH);
  }}
  for(int y=0;y<3;y++)
  {
  delay(200);
  digitalWrite(tang[y],LOW);
  if(y>=2){
    digitalWrite(tang[y-1],HIGH);
  }}
}
void a2(){
  for(int i=1;i<=5;i++)
  {
  digitalWrite(tang[i],0);
  }
  for(int i=1;i<=5;i++)
  {
  digitalWrite(cot[i],1);
  delay(100);
  }
  for(int i=5;i<=20;i+=5)
  {
  
  digitalWrite(cot[i],1);
  delay(100);
  }
  for(int i=25;i>21;i--)
  {
  digitalWrite(cot[i],1);
  delay(100);
  }

  digitalWrite(cot[21],1);
  delay(100);
  digitalWrite(cot[16],1);
  delay(100);
  digitalWrite(cot[11],1);
  delay(100);
  digitalWrite(cot[6],1);
  for(int i=7;i<10;i++)
  {
  digitalWrite(cot[i],1);
  delay(100);
  }
  digitalWrite(cot[14],1);
  delay(100);
  digitalWrite(cot[19],1);
  delay(100);
  digitalWrite(cot[18],1);
  delay(100);
  digitalWrite(cot[17],1);
  delay(100);
  digitalWrite(cot[12],1);
  delay(100);
  digitalWrite(cot[13],1);
  delay(100);


}
void cleartang(){
  for(int i=1;i<=5;i++)
  {
  digitalWrite(tang[i],1);
  }
}
void clearcot(){
  for(int i=1;i<=25;i++)
  {
  digitalWrite(cot[i],0);
  }  
}
void cheo_ngang_doc(){
  for(int i=5;i>=0;i--)
  {
  digitalWrite(tang[i],0);
  }
  //bật đường chéo
  digitalWrite(cot[1],1);
  digitalWrite(cot[7],1);
  digitalWrite(cot[13],1);
  digitalWrite(cot[19],1);
  digitalWrite(cot[25],1);
  delay(300);
  clearcot();
  digitalWrite(cot[3],1);
  digitalWrite(cot[8],1);
  digitalWrite(cot[13],1);
  digitalWrite(cot[18],1);
  digitalWrite(cot[23],1);
  delay(300);
  clearcot();
  digitalWrite(cot[11],1);
  digitalWrite(cot[12],1);
  digitalWrite(cot[13],1);
  digitalWrite(cot[14],1);
  digitalWrite(cot[15],1);
  delay(300);
  clearall();
  }
void clearall()
  {
  for(int i=1;i<=5;i++)
  {
  digitalWrite(tang[i],1);
  }
  for(int i=1;i<=25;i++)
  {
  digitalWrite(cot[i],0);
  }
}
void all_tang_len_xuong()
{
  for(int i=1;i<=25;i++){
    digitalWrite(cot[i],HIGH);
  }
  for(int y=0;y<=5;y++)
  {
    delay(50);
    digitalWrite(tang[y],LOW);
  }
  for(int y=5;y>=0;y--)
  {
    delay(100);
    digitalWrite(tang[y],HIGH);
  }
  for(int y=0;y<=5;y++)
  {
    delay(50);
    digitalWrite(tang[y],LOW);
  }
  for(int y=5;y>=0;y--)
  {
    digitalWrite(tang[y],0);
    delay(100);
  }
    
  for(int y=5;y>=0;y--)
  {
    digitalWrite(tang[y],1);
    delay(100);
  }
    

  for(int y=1;y<=5;y++)
  {
    digitalWrite(tang[y],0);
    delay(100);
  }
  for(int y=5;y>=0;y--)
  {
    digitalWrite(tang[y],1);
    delay(100);
  } 
  }

