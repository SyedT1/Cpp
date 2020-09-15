int checkBalance(string code) {
   int i = 0;
   Stack<char>si;
   for(char c:code){
      if(c=='(' || c==')' || c=='{' || c=='}' || c=='[' || c==']'){
          if(c=='(' || c=='{' || c=='['){
              si.push(c);
          }else{
              if(si.isEmpty()){
                  return i;
              }else if((si.top()=='(' && c==')')||(si.top()=='{' && c=='}')||(si.top()=='[' && c==']')){
                  si.pop();
              }else{
                  return i;
              }
          }
      }
      i++;
   }
   return si.isEmpty()?-1:i;
}
