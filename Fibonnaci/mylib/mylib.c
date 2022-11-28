int FibonnaciIterative(int N){
 int f = 0, s = 1, results, i;
    for (int i = 0; i < N+1; i++)
  {
    if (i <= 1){
        results = i;
    }
    else
    {
      results = f + s;
      f = s;
      s = results;
    }
}
return results;
}


int FibonnaciRecursive(int N){
   if (N==0){
        return 0;
    }
    else if (N==1){
        return 1;
    }
    else{
        return FibonnaciRecursive(N-1)+FibonnaciRecursive(N-2);
    }
    
}