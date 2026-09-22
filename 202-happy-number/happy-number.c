bool isHappy(int n) {
    int x=n,num=n,sum=0;
    while(x>3){
        if(x==4 || x==9) break;
        sum=0;
        num=x;
        while(num>0){
            sum=sum+ (num%10)*(num%10);
            num=num/10;
        }
        x=sum;
    } 
    if(x==1){
        return true;
    }else{
        return false;
    }
}