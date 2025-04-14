public class fibono {
        public int fib(int n) {
            int temp1=0;
            int temp2=1;
            int ct=1;
            if(n==0) return 0;
            while(ct<n){
                int temp3= temp1+temp2;
                temp1=temp2;
                temp2=temp3;
                ct++;
            }
            return temp2;
    
        }
    
}
