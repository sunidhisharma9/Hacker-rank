// Write your Student class here
class Student
{ int score[5];
 public:
 void input()
 {   
     for( int j=0; j<5 ;j++)
     {cin>>score[j];
     }
     
 }
  int calculateTotalScore()
  {  int sum=0;
           for(int i=0; i<5 ;i++ )
           { sum=sum+score[i];}
   return sum;
  }
    
    
    
};
