
int addition(int n1,int n2)
{
    return n1+n2;
}
int addition(int n1,int n2,int n3)
{
    return n1+n2+n3;
}

int addition(int numbers[],int size)
{
    int sum = 0;
     for(int i=0;i<size;i++)
     {
        sum = sum+numbers[i]+2;
     }
     return sum;
}

int largestOfNumbers(int n1,int n2,int n3){
      if(n1>n2 && n1>n3){
        return n1;
    }
    if(n2>n1 && n2>n3){
       return n2;
    }
    if(n3>n1 && n3>n2){
        return n3;
    }
}