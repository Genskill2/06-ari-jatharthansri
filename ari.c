#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>



string ari(string s){
   
   int y,let=0,word=0,sen=0;    
   float x=0;
   
   
   for(int i=0;s[i]!='\0';i++){
     
      if(isalnum(s[i])){
      let++;
      }
    
   
      if(s[i]==' '){
      word++;
      }
      
      if(s[i]=='.'||s[i]=='?'||s[i]=='!'){
      sen++;
      }
   
   }   
   
   x= 4.71*let/word + 0.5*word/sen - 21.43;
   
   y=ceil(x);
    
      if(y==1) { return "Kindergarten"; }
      if(y==2) { return "First/Second Grade";}
      if(y==3) { return "Third Grade";}      
      if(y==4) { return "Fourth Grade";}    
      if(y==5) { return "Fifth Grade";}        
      if(y==6) { return "Sixth Grade";}        
      if(y==7) { return "Seventh Grade";}      
      if(y==8) { return "Eighth Grade";}       
      if(y==9) { return "Ninth Grade";}        
      if(y==10){ return "Tenth Grade";}       
      if(y==11){ return "Eleventh Grade";}     
      if(y==12){ return "Twelfth grade";}     
      if(y==13){ return "College student";}    
      if(y>=14){ return "Professor";}    
    
}

